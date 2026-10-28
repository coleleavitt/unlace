//! `xtask type-recovery-report` - DWARF/source-backed type recovery score.
//!
//! This is intentionally conservative about ground truth: DWARF fixtures use
//! imported debug facts, C/C++ source-only fixtures use parsed source facts, and
//! assembly/generator-backed non-host fixtures contribute only the signature
//! facts their sources actually define. The recovered side is the user-visible C
//! output from `unlace batch`, so the report measures what a reverser actually
//! sees rather than internal debug-info availability.

use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::path::Path;
use std::process::{self, Command};

use crate::cargo_bin;
use crate::fixture_outputs::timeout_arg;
use serde::Deserialize;
use unlace_loader::{
    DwarfInfo, ElfLoader, FunctionDebugInfo, Loader, LocalVariable, ParameterInfo, StructField,
    StructType, import_dwarf,
};

#[derive(Debug, Deserialize)]
struct Manifest {
    #[serde(default)]
    fixture: Vec<Fixture>,
}

#[derive(Debug, Deserialize)]
struct Fixture {
    name: String,
    #[serde(default)]
    source_path: Option<String>,
    binary_path: String,
    #[serde(default)]
    flags: Option<String>,
    #[serde(default)]
    architecture: Option<String>,
    #[serde(default)]
    feature_tags: Vec<String>,
}

#[derive(Debug, Default, Clone, Copy)]
struct Counter {
    expected: usize,
    recovered: usize,
    reported: usize,
    source_oracle_only_expected: usize,
    source_oracle_only_recovered: usize,
    /// Emitted facts whose *recovery is source-oracle-only* for this fixture
    /// (e.g. exact local names in optimized/no-DWARF binaries). The recall
    /// denominator already excludes these via `source_oracle_only_expected`, so
    /// the recoverable precision denominator must exclude the corresponding
    /// emissions too — otherwise precision and recall use inconsistent scopes.
    /// They remain visible through `raw_*` precision.
    source_oracle_only_reported: usize,
}

impl Counter {
    fn add_expected(&mut self, recovered: bool) {
        self.expected += 1;
        if recovered {
            self.recovered += 1;
        }
    }

    fn add_source_oracle_only(&mut self, recovered: bool) {
        self.source_oracle_only_expected += 1;
        if recovered {
            self.source_oracle_only_recovered += 1;
        }
    }

    fn add_reported(&mut self, reported: usize) {
        self.reported += reported;
    }

    fn merge(&mut self, other: Counter) {
        self.expected += other.expected;
        self.recovered += other.recovered;
        self.reported += other.reported;
        self.source_oracle_only_expected += other.source_oracle_only_expected;
        self.source_oracle_only_recovered += other.source_oracle_only_recovered;
        self.source_oracle_only_reported += other.source_oracle_only_reported;
    }

    /// Recoverable-scope precision denominator: emitted facts that purport to be
    /// recoverable source-entity claims. Source-oracle-only emissions are routed
    /// out to `source_oracle_only_reported` so precision shares recall's scope.
    fn precision_denominator(&self) -> usize {
        self.reported.max(self.recovered)
    }

    /// Raw (all-scope) precision denominator — includes source-oracle-only
    /// emissions, so the strict number is always visible alongside the
    /// recoverable one and nothing is hidden by the scope split.
    fn raw_precision_denominator(&self) -> usize {
        (self.reported + self.source_oracle_only_reported).max(self.raw_recovered())
    }

    fn raw_expected(&self) -> usize {
        self.expected + self.source_oracle_only_expected
    }

    fn raw_recovered(&self) -> usize {
        self.recovered + self.source_oracle_only_recovered
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum FactScope {
    Recoverable,
    SourceOracleOnly(&'static str),
}

impl FactScope {
    fn add_expected(self, counter: &mut Counter, recovered: bool) {
        match self {
            FactScope::Recoverable => counter.add_expected(recovered),
            FactScope::SourceOracleOnly(_) => counter.add_source_oracle_only(recovered),
        }
    }

    /// Routes a reported (emitted) fact into the same scope its recovery uses,
    /// keeping the precision denominator consistent with the recall denominator.
    fn add_reported(self, counter: &mut Counter) {
        match self {
            FactScope::Recoverable => counter.reported += 1,
            FactScope::SourceOracleOnly(_) => counter.source_oracle_only_reported += 1,
        }
    }

    fn reason(self) -> Option<&'static str> {
        match self {
            FactScope::Recoverable => None,
            FactScope::SourceOracleOnly(reason) => Some(reason),
        }
    }
}

#[derive(Debug, Default, Clone)]
struct TypeScore {
    fixtures: usize,
    functions: usize,
    c_functions: usize,
    cpp_functions: usize,
    return_types: Counter,
    param_names: Counter,
    param_types: Counter,
    local_names: Counter,
    local_types: Counter,
    struct_names: Counter,
    field_names: Counter,
    field_types: Counter,
    pointer_types: Counter,
    array_types: Counter,
    struct_ref_types: Counter,
    leaked_temp_decls: usize,
    stack_carrier_decls: usize,
    abi_param_carriers: usize,
    duplicate_source_local_decls: usize,
    leaked_temp_sites: BTreeMap<TempLeakSite, usize>,
    /// Every local decl counted into the precision denominator, retained so the
    /// precision gap can be classified by name pattern + printer comment tag
    /// (measure, don't guess). Generic `vN` leaks are also in `leaked_temp_*`;
    /// this captures the non-generic excess (`v_NN` stack slots, named locals)
    /// that the leaked-temp ledger does not.
    reported_local_sites: Vec<ReportedLocalSite>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct ReportedLocalSite {
    fixture: String,
    function: String,
    ty: String,
    name: String,
    comment: Option<String>,
    /// True when this reported decl's name matches a DWARF-expected local of the
    /// same function — i.e. it is a CORRECT recovery that nonetheless inflates
    /// the precision denominator (a metric-scoping artifact), as opposed to a
    /// genuine EXCESS leaked decl. Splits the ledger so the two populations are
    /// never conflated (the council's rank-0 diagnostic prerequisite).
    matched_dwarf: bool,
}

impl ReportedLocalSite {
    /// Coarse name-pattern class for the precision ledger.
    fn name_class(&self) -> &'static str {
        if is_generic_reported_lvar_name(&self.name) {
            "generic(vN/cN/aN)"
        } else if self
            .name
            .strip_prefix("v_")
            .or_else(|| self.name.strip_prefix("a_"))
            .is_some_and(|rest| !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit()))
        {
            "stack-offset(v_NN)"
        } else if self.name.starts_with("saved_") {
            "saved-register"
        } else if self.name.len() <= 2 {
            "short(<=2 chars)"
        } else {
            "named"
        }
    }

    /// Coarse printer-comment class for the precision ledger.
    fn comment_class(&self) -> &'static str {
        match self.comment.as_deref().map(str::trim) {
            None | Some("") => "no-comment",
            Some("temp") => "// temp",
            Some(c) if is_register_location_comment(c) => "// <register>",
            Some(c) if is_cpu_flag_comment(c) => "// <flag>",
            Some(_) => "// other",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, PartialOrd, Ord)]
struct TempLeakSite {
    fixture: String,
    function: String,
    ty: String,
    name: String,
}

impl TypeScore {
    fn record_leaked_temp(&mut self, fixture: &str, function: &str, ty: &str, name: &str) {
        self.leaked_temp_decls += 1;
        *self
            .leaked_temp_sites
            .entry(TempLeakSite {
                fixture: fixture.to_string(),
                function: function.to_string(),
                ty: ty.to_string(),
                name: name.to_string(),
            })
            .or_default() += 1;
    }

    fn record_stack_carrier(&mut self) {
        self.stack_carrier_decls += 1;
    }

    fn record_abi_param_carrier(&mut self) {
        self.abi_param_carriers += 1;
    }

    fn record_duplicate_source_local(&mut self) {
        self.duplicate_source_local_decls += 1;
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum TruthKind {
    Dwarf,
    ParsedSource,
}

#[derive(Debug, Default, Clone)]
struct BinaryEvidence {
    text: String,
}

impl BinaryEvidence {
    fn from_fixture(root: &Path, fixture: &Fixture) -> Self {
        let path = root.join(&fixture.binary_path);
        let text = std::fs::read(&path)
            .map(|data| String::from_utf8_lossy(&data).into_owned())
            .unwrap_or_default();
        Self { text }
    }

    fn contains_name(&self, name: &str) -> bool {
        name.len() >= 2 && self.text.contains(name)
    }
}

struct ScoringPolicy<'a> {
    truth_kind: TruthKind,
    binary_evidence: BinaryEvidence,
    trace: &'a TypeTrace,
}

impl<'a> ScoringPolicy<'a> {
    #[cfg(test)]
    fn for_test(truth_kind: TruthKind, trace: &'a TypeTrace) -> Self {
        Self {
            truth_kind,
            binary_evidence: BinaryEvidence::default(),
            trace,
        }
    }

    fn new(root: &Path, fixture: &Fixture, truth_kind: TruthKind, trace: &'a TypeTrace) -> Self {
        Self {
            truth_kind,
            binary_evidence: BinaryEvidence::from_fixture(root, fixture),
            trace,
        }
    }

    fn exact_param_name_scope(&self, function: &FunctionDebugInfo, name: &str) -> FactScope {
        if self.truth_kind == TruthKind::Dwarf || (name == "this" && is_cpp_function(function)) {
            FactScope::Recoverable
        } else {
            FactScope::SourceOracleOnly(
                "exact parameter name is source-only without DWARF/PDB local name records",
            )
        }
    }

    fn local_name_scope(&self) -> FactScope {
        if self.truth_kind == TruthKind::Dwarf {
            FactScope::Recoverable
        } else {
            FactScope::SourceOracleOnly(
                "exact local name is source-only after optimized no-debug compilation",
            )
        }
    }

    fn local_type_scope(&self) -> FactScope {
        if self.truth_kind == TruthKind::Dwarf {
            FactScope::Recoverable
        } else {
            FactScope::SourceOracleOnly(
                "exact local type is tied to a source local that has no no-debug location/name record",
            )
        }
    }

    fn struct_name_scope(&self, name: &str) -> FactScope {
        if self.truth_kind == TruthKind::Dwarf || self.binary_evidence.contains_name(name) {
            FactScope::Recoverable
        } else {
            FactScope::SourceOracleOnly(
                "source type name is absent from no-debug binary symbols/RTTI/string data",
            )
        }
    }

    fn field_scope(&self, field: &StructField) -> FactScope {
        if self.truth_kind == TruthKind::Dwarf || self.binary_evidence.contains_name(&field.name) {
            FactScope::Recoverable
        } else {
            FactScope::SourceOracleOnly(
                "field name/type is source-only without debug or reflected field metadata",
            )
        }
    }

    fn trace_oracle_only(
        &self,
        fixture: &str,
        function: &str,
        kind: &str,
        expected: &str,
        scope: FactScope,
    ) {
        if let Some(reason) = scope.reason() {
            self.trace.line(
                Some(fixture),
                Some(function),
                format!("source_oracle_only kind={kind} expected={expected} reason={reason}"),
            );
        }
    }
}

#[derive(Debug, Clone)]
struct TypeTrace {
    enabled: bool,
    verbose: bool,
    filter: Option<String>,
    fixture_filter: Option<String>,
}

impl TypeTrace {
    #[cfg(test)]
    fn disabled() -> Self {
        Self {
            enabled: false,
            verbose: false,
            filter: None,
            fixture_filter: None,
        }
    }

    /// Decode `--trace`, `--trace-verbose`, `--trace-filter <text>`, and
    /// `--trace-fixture <text>` from the subcommand arguments.
    fn from_args(args: &[String]) -> Result<Self, String> {
        let mut trace = Self {
            enabled: false,
            verbose: false,
            filter: None,
            fixture_filter: None,
        };
        let mut args = args.iter();
        while let Some(arg) = args.next() {
            match arg.as_str() {
                "--trace" => trace.enabled = true,
                "--trace-verbose" => {
                    trace.enabled = true;
                    trace.verbose = true;
                }
                "--trace-filter" | "--trace-fixture" => {
                    let value = args
                        .next()
                        .filter(|value| !value.is_empty())
                        .ok_or_else(|| format!("{arg} needs a value"))?;
                    trace.enabled = true;
                    if arg == "--trace-filter" {
                        trace.filter = Some(value.clone());
                    } else {
                        trace.fixture_filter = Some(value.clone());
                    }
                }
                "--no-missing-ledger" => {}
                other => return Err(format!("unknown argument `{other}`")),
            }
        }
        Ok(trace)
    }

    fn enabled_for(&self, fixture: Option<&str>, function: Option<&str>, message: &str) -> bool {
        if !self.enabled {
            return false;
        }
        if let Some(filter) = self.fixture_filter.as_deref()
            && !fixture.is_some_and(|fixture| fixture.contains(filter))
        {
            return false;
        }
        if let Some(filter) = self.filter.as_deref() {
            let matched = fixture.is_some_and(|value| value.contains(filter))
                || function.is_some_and(|value| value.contains(filter))
                || message.contains(filter);
            if !matched {
                return false;
            }
        }
        true
    }

    fn line(&self, fixture: Option<&str>, function: Option<&str>, message: impl std::fmt::Display) {
        let message = message.to_string();
        if !self.enabled_for(fixture, function, &message) {
            return;
        }
        eprintln!(
            "[type-recovery:trace] fixture={} function={} {message}",
            fixture.unwrap_or("-"),
            function.unwrap_or("-")
        );
    }

    fn verbose(
        &self,
        fixture: Option<&str>,
        function: Option<&str>,
        message: impl std::fmt::Display,
    ) {
        if self.verbose {
            self.line(fixture, function, message);
        }
    }

    fn miss(&self, fixture: Option<&str>, function: Option<&str>, message: impl std::fmt::Display) {
        let message = message.to_string();
        if !self.enabled_for(fixture, function, &message) {
            return;
        }
        eprintln!(
            "[type-recovery:miss] fixture={} function={} {message}",
            fixture.unwrap_or("-"),
            function.unwrap_or("-")
        );
    }
}

/// One unrecovered ground-truth fact, captured the moment scoring decides it is
/// missing. The ledger separates genuine *recoverable* recovery-gaps (the
/// producer should be able to derive these from the binary alone) from
/// *source-oracle-only* facts (exact spellings that GCC/G++ never emit into an
/// optimized no-debug binary, so they need a DWARF/PDB/source sidecar).
#[derive(Debug, Clone)]
struct MissingFact {
    fixture: String,
    owner: String,
    kind: &'static str,
    expected: String,
    detail: String,
    recoverable: bool,
    reason: Option<&'static str>,
}

/// Always-on collector for every missing fact. Unlike `--trace` (per-line,
/// opt-in) this aggregates the full corpus into one grouped report so "what is
/// still missing" is answerable in a single glance. `--no-missing-ledger`
/// silences it.
#[derive(Debug)]
struct MissingLedger {
    enabled: bool,
    facts: RefCell<Vec<MissingFact>>,
}

impl MissingLedger {
    fn new(enabled: bool) -> Self {
        Self {
            enabled,
            facts: RefCell::new(Vec::new()),
        }
    }

    fn record(
        &self,
        fixture: &str,
        owner: &str,
        kind: &'static str,
        expected: &str,
        detail: impl Into<String>,
        scope: FactScope,
    ) {
        if !self.enabled {
            return;
        }
        self.facts.borrow_mut().push(MissingFact {
            fixture: fixture.to_string(),
            owner: owner.to_string(),
            kind,
            expected: expected.to_string(),
            detail: detail.into(),
            recoverable: matches!(scope, FactScope::Recoverable),
            reason: scope.reason(),
        });
    }

    fn print_summary(&self) {
        if !self.enabled {
            return;
        }
        let facts = self.facts.borrow();
        println!();
        println!("type-recovery-report: MISSING LEDGER (every unrecovered ground-truth fact)");
        if facts.is_empty() {
            println!("  total missing facts: 0 - nothing unrecovered across the scored corpus");
            return;
        }

        let recoverable = facts.iter().filter(|f| f.recoverable).count();
        let oracle = facts.len() - recoverable;
        println!("  total missing facts: {}", facts.len());
        println!(
            "    recoverable recovery-gaps: {recoverable:<4} (producer SHOULD derive these from the binary alone)"
        );
        println!(
            "    source-oracle-only:        {oracle:<4} (need DWARF/PDB/sidecar; absent from optimized no-debug binary)"
        );

        Self::print_kind_breakdown("recoverable recovery-gaps", &facts, true);
        Self::print_kind_breakdown("source-oracle-only", &facts, false);

        println!();
        println!("  -- by fixture --");
        let mut by_fixture: BTreeMap<&str, (usize, usize)> = BTreeMap::new();
        for fact in facts.iter() {
            let entry = by_fixture.entry(fact.fixture.as_str()).or_default();
            if fact.recoverable {
                entry.0 += 1;
            } else {
                entry.1 += 1;
            }
        }
        for (fixture, (rec, orc)) in &by_fixture {
            println!(
                "    {fixture:<18} missing={:<3} recoverable={rec:<3} oracle={orc:<3}",
                rec + orc
            );
        }

        println!();
        println!("  -- full enumeration (sorted: recoverable first, then fixture/owner/kind) --");
        let mut sorted: Vec<&MissingFact> = facts.iter().collect();
        sorted.sort_by(|a, b| {
            b.recoverable
                .cmp(&a.recoverable)
                .then_with(|| a.fixture.cmp(&b.fixture))
                .then_with(|| a.owner.cmp(&b.owner))
                .then_with(|| a.kind.cmp(b.kind))
                .then_with(|| a.expected.cmp(&b.expected))
        });
        for fact in sorted {
            let tag = if fact.recoverable {
                "RECOVERABLE"
            } else {
                "oracle-only"
            };
            let detail = if fact.detail.is_empty() {
                String::new()
            } else {
                format!(" {}", fact.detail)
            };
            let reason = fact
                .reason
                .map(|r| format!(" reason=\"{r}\""))
                .unwrap_or_default();
            println!(
                "    [{tag}] {}::{} {} expected={}{detail}{reason}",
                fact.fixture, fact.owner, fact.kind, fact.expected
            );
        }
    }

    fn print_kind_breakdown(label: &str, facts: &[MissingFact], recoverable: bool) {
        let mut by_kind: BTreeMap<&'static str, Vec<&MissingFact>> = BTreeMap::new();
        for fact in facts.iter().filter(|f| f.recoverable == recoverable) {
            by_kind.entry(fact.kind).or_default().push(fact);
        }
        println!();
        println!("  -- {label} by kind --");
        if by_kind.is_empty() {
            println!("    (none)");
            return;
        }
        for (kind, entries) in &by_kind {
            let mut samples: Vec<String> = entries
                .iter()
                .take(6)
                .map(|f| format!("{}.{}:{}", f.fixture, f.owner, f.expected))
                .collect();
            if entries.len() > 6 {
                samples.push(format!("(+{} more)", entries.len() - 6));
            }
            println!(
                "    {kind:<14} {:<4} [{}]",
                entries.len(),
                samples.join(", ")
            );
        }
    }
}

impl TypeScore {
    fn merge(&mut self, other: &TypeScore) {
        self.fixtures += other.fixtures;
        self.functions += other.functions;
        self.c_functions += other.c_functions;
        self.cpp_functions += other.cpp_functions;
        self.return_types.merge(other.return_types);
        self.param_names.merge(other.param_names);
        self.param_types.merge(other.param_types);
        self.local_names.merge(other.local_names);
        self.local_types.merge(other.local_types);
        self.struct_names.merge(other.struct_names);
        self.field_names.merge(other.field_names);
        self.field_types.merge(other.field_types);
        self.pointer_types.merge(other.pointer_types);
        self.array_types.merge(other.array_types);
        self.struct_ref_types.merge(other.struct_ref_types);
        self.leaked_temp_decls += other.leaked_temp_decls;
        self.stack_carrier_decls += other.stack_carrier_decls;
        self.abi_param_carriers += other.abi_param_carriers;
        self.duplicate_source_local_decls += other.duplicate_source_local_decls;
        for (site, count) in &other.leaked_temp_sites {
            *self.leaked_temp_sites.entry(site.clone()).or_default() += count;
        }
        self.reported_local_sites
            .extend(other.reported_local_sites.iter().cloned());
    }

    fn expected(&self) -> usize {
        self.return_types.expected
            + self.param_names.expected
            + self.param_types.expected
            + self.local_names.expected
            + self.local_types.expected
            + self.struct_names.expected
            + self.field_names.expected
            + self.field_types.expected
            + self.pointer_types.expected
            + self.array_types.expected
            + self.struct_ref_types.expected
    }

    fn source_oracle_only_expected(&self) -> usize {
        self.return_types.source_oracle_only_expected
            + self.param_names.source_oracle_only_expected
            + self.param_types.source_oracle_only_expected
            + self.local_names.source_oracle_only_expected
            + self.local_types.source_oracle_only_expected
            + self.struct_names.source_oracle_only_expected
            + self.field_names.source_oracle_only_expected
            + self.field_types.source_oracle_only_expected
            + self.pointer_types.source_oracle_only_expected
            + self.array_types.source_oracle_only_expected
            + self.struct_ref_types.source_oracle_only_expected
    }

    fn recovered(&self) -> usize {
        self.return_types.recovered
            + self.param_names.recovered
            + self.param_types.recovered
            + self.local_names.recovered
            + self.local_types.recovered
            + self.struct_names.recovered
            + self.field_names.recovered
            + self.field_types.recovered
            + self.pointer_types.recovered
            + self.array_types.recovered
            + self.struct_ref_types.recovered
    }

    fn source_oracle_only_recovered(&self) -> usize {
        self.return_types.source_oracle_only_recovered
            + self.param_names.source_oracle_only_recovered
            + self.param_types.source_oracle_only_recovered
            + self.local_names.source_oracle_only_recovered
            + self.local_types.source_oracle_only_recovered
            + self.struct_names.source_oracle_only_recovered
            + self.field_names.source_oracle_only_recovered
            + self.field_types.source_oracle_only_recovered
            + self.pointer_types.source_oracle_only_recovered
            + self.array_types.source_oracle_only_recovered
            + self.struct_ref_types.source_oracle_only_recovered
    }

    fn raw_expected(&self) -> usize {
        self.return_types.raw_expected()
            + self.param_names.raw_expected()
            + self.param_types.raw_expected()
            + self.local_names.raw_expected()
            + self.local_types.raw_expected()
            + self.struct_names.raw_expected()
            + self.field_names.raw_expected()
            + self.field_types.raw_expected()
            + self.pointer_types.raw_expected()
            + self.array_types.raw_expected()
            + self.struct_ref_types.raw_expected()
    }

    fn raw_recovered(&self) -> usize {
        self.return_types.raw_recovered()
            + self.param_names.raw_recovered()
            + self.param_types.raw_recovered()
            + self.local_names.raw_recovered()
            + self.local_types.raw_recovered()
            + self.struct_names.raw_recovered()
            + self.field_names.raw_recovered()
            + self.field_types.raw_recovered()
            + self.pointer_types.raw_recovered()
            + self.array_types.raw_recovered()
            + self.struct_ref_types.raw_recovered()
    }

    fn reported(&self) -> usize {
        self.categories()
            .iter()
            .map(|(_, counter)| counter.precision_denominator())
            .sum()
    }

    /// All-scope reported total (recoverable + source-oracle-only emissions).
    fn raw_reported(&self) -> usize {
        self.categories()
            .iter()
            .map(|(_, counter)| counter.raw_precision_denominator())
            .sum()
    }

    /// Raw precision: correct facts over ALL emitted facts, including the
    /// source-oracle-only scope. This is the strict, nothing-excluded number.
    fn raw_precision(&self) -> f64 {
        let reported = self.raw_reported();
        if reported == 0 {
            0.0
        } else {
            self.raw_recovered() as f64 * 100.0 / reported as f64
        }
    }

    /// All scored fact categories in a stable order, for precision-ledger
    /// reporting. The precision denominator is the sum of each category's
    /// `precision_denominator()`, so the per-category excess
    /// (`reported - recovered`) explains exactly where precision is lost.
    fn categories(&self) -> [(&'static str, &Counter); 11] {
        [
            ("return_types", &self.return_types),
            ("param_names", &self.param_names),
            ("param_types", &self.param_types),
            ("local_names", &self.local_names),
            ("local_types", &self.local_types),
            ("struct_names", &self.struct_names),
            ("field_names", &self.field_names),
            ("field_types", &self.field_types),
            ("pointer_types", &self.pointer_types),
            ("array_types", &self.array_types),
            ("struct_ref_types", &self.struct_ref_types),
        ]
    }

    fn percent(&self) -> f64 {
        let expected = self.expected();
        if expected == 0 {
            0.0
        } else {
            self.recovered() as f64 * 100.0 / expected as f64
        }
    }

    fn raw_percent(&self) -> f64 {
        let expected = self.raw_expected();
        if expected == 0 {
            0.0
        } else {
            self.raw_recovered() as f64 * 100.0 / expected as f64
        }
    }

    fn precision(&self) -> f64 {
        let reported = self.reported();
        if reported == 0 {
            0.0
        } else {
            self.recovered() as f64 * 100.0 / reported as f64
        }
    }
}

pub fn run(root: &Path, args: &[String]) -> i32 {
    let trace = match TypeTrace::from_args(args) {
        Ok(trace) => trace,
        Err(e) => {
            eprintln!("type-recovery-report: {e}");
            return 2;
        }
    };
    let ledger = MissingLedger::new(!args.iter().any(|arg| arg == "--no-missing-ledger"));
    let manifest = match read_manifest(root) {
        Ok(m) => m,
        Err(e) => {
            eprintln!("type-recovery-report: {e}");
            return 1;
        }
    };

    let unlace_bin = match cargo_bin::build_unlace_bin(root) {
        Ok(path) => path,
        Err(e) => {
            eprintln!("type-recovery-report: {e}");
            return 1;
        }
    };

    let mut source_known = 0usize;
    let mut dwarf_candidates = 0usize;
    let mut source_only = 0usize;
    let mut source_parsed = 0usize;
    let mut cpp_candidates = 0usize;
    let mut non_host_candidates = 0usize;
    let mut scored_cpp = 0usize;
    let mut scored_optimized = 0usize;
    let mut scored_source_only = 0usize;
    let mut scored_non_host = 0usize;
    let mut by_opt: BTreeMap<String, usize> = BTreeMap::new();
    let mut score_by_opt: BTreeMap<String, TypeScore> = BTreeMap::new();
    let mut score_by_arch: BTreeMap<String, TypeScore> = BTreeMap::new();
    let mut total_score = TypeScore::default();

    println!("type-recovery-report: source/DWARF ground-truth candidates");
    println!();

    for fixture in &manifest.fixture {
        let Some(source) = fixture.source_path.as_deref() else {
            continue;
        };
        source_known += 1;

        let flags = fixture.flags.as_deref().unwrap_or("unknown");
        let opt = optimization_level(flags);
        *by_opt.entry(opt.to_string()).or_default() += 1;
        let arch = fixture.architecture.as_deref().unwrap_or("unknown");
        if arch != "x86_64" {
            non_host_candidates += 1;
        }
        if is_cpp_source(source) {
            cpp_candidates += 1;
        }

        let dwarf = match load_dwarf(root, fixture) {
            Ok(dwarf) => dwarf,
            Err(e) => {
                println!(
                    "[type-ground-truth] SKIP {} arch={} opt={} source={} binary={} reason={}",
                    fixture.name,
                    fixture.architecture.as_deref().unwrap_or("unknown"),
                    opt,
                    source,
                    fixture.binary_path,
                    e,
                );
                continue;
            }
        };
        let has_dwarf = dwarf
            .as_ref()
            .is_some_and(|d| !d.functions.is_empty() || !d.structs.is_empty());
        if has_dwarf {
            dwarf_candidates += 1;
        } else {
            source_only += 1;
        }
        let parsed_source = if has_dwarf {
            None
        } else {
            match parse_source_truth(root, fixture, source) {
                Ok(Some(truth)) if !truth.functions.is_empty() || !truth.structs.is_empty() => {
                    source_parsed += 1;
                    Some(truth)
                }
                Ok(_) => None,
                Err(e) => {
                    println!(
                        "[type-ground-truth] SKIP {} arch={} opt={} source={} binary={} reason={}",
                        fixture.name,
                        fixture.architecture.as_deref().unwrap_or("unknown"),
                        opt,
                        source,
                        fixture.binary_path,
                        e,
                    );
                    continue;
                }
            }
        };

        let candidate_kind = if has_dwarf {
            "source+dwarf"
        } else if parsed_source.is_some() {
            "source+parsed"
        } else {
            "source-only"
        };
        println!(
            "[type-ground-truth] CANDIDATE {} arch={} opt={} kind={} source={} binary={} tags={}",
            fixture.name,
            fixture.architecture.as_deref().unwrap_or("unknown"),
            opt,
            candidate_kind,
            source,
            fixture.binary_path,
            fixture.feature_tags.join(","),
        );

        let (truth, truth_kind) = if let Some(dwarf) = dwarf {
            (dwarf, TruthKind::Dwarf)
        } else if let Some(parsed_source) = parsed_source {
            (parsed_source, TruthKind::ParsedSource)
        } else {
            continue;
        };

        match score_fixture(
            root,
            &unlace_bin,
            fixture,
            &truth,
            truth_kind,
            &trace,
            &ledger,
        ) {
            Ok(score) => {
                println_score(&fixture.name, &score);
                if score.cpp_functions > 0 {
                    scored_cpp += 1;
                }
                if matches!(opt, "-O1" | "-O2" | "-O3") {
                    scored_optimized += 1;
                }
                if !has_dwarf {
                    scored_source_only += 1;
                }
                if arch != "x86_64" {
                    scored_non_host += 1;
                }
                score_by_opt
                    .entry(opt.to_string())
                    .or_default()
                    .merge(&score);
                score_by_arch
                    .entry(arch.to_string())
                    .or_default()
                    .merge(&score);
                total_score.merge(&score);
            }
            Err(e) => println!("[type-recovery] SKIP {} - {}", fixture.name, e),
        }
    }

    println!();
    println!("type-recovery-report: optimization-level denominator");
    for (opt, count) in by_opt {
        println!("[type-ground-truth] opt={opt} fixtures={count}");
    }
    println!();
    println!("type-recovery-report: scored optimization buckets");
    for (opt, score) in &score_by_opt {
        println_score(&format!("opt={opt}"), score);
    }
    println!();
    println!("type-recovery-report: scored architecture buckets");
    for (arch, score) in &score_by_arch {
        println_score(&format!("arch={arch}"), score);
    }

    println!();
    println_score("TOTAL", &total_score);
    println!(
        "Type/Variable Recovery: MEASURED fixtures={} functions={} c_functions={} cpp_functions={} recovered={} expected={} reported={} recall={:.1}% precision={:.1}% raw_precision={:.1}% raw_reported={} leaked_temp_decls={} stack_carrier_decls={} abi_param_carriers={} duplicate_source_local_decls={} source_oracle_only_recovered={} source_oracle_only_expected={} raw_recovered={} raw_expected={} raw_recall={:.1}% source_known={} source_only={} source_parsed={} dwarf_candidates={} cpp_candidates={} scored_cpp={} optimized_scored={} scored_source_only={} non_host_candidates={} scored_non_host={}",
        total_score.fixtures,
        total_score.functions,
        total_score.c_functions,
        total_score.cpp_functions,
        total_score.recovered(),
        total_score.expected(),
        total_score.reported(),
        total_score.percent(),
        total_score.precision(),
        total_score.raw_precision(),
        total_score.raw_reported(),
        total_score.leaked_temp_decls,
        total_score.stack_carrier_decls,
        total_score.abi_param_carriers,
        total_score.duplicate_source_local_decls,
        total_score.source_oracle_only_recovered(),
        total_score.source_oracle_only_expected(),
        total_score.raw_recovered(),
        total_score.raw_expected(),
        total_score.raw_percent(),
        source_known,
        source_only,
        source_parsed,
        dwarf_candidates,
        cpp_candidates,
        scored_cpp,
        scored_optimized,
        scored_source_only,
        non_host_candidates,
        scored_non_host,
    );
    println!(
        "type-recovery-report: recoverable recall excludes exact source-only local/parameter names and field facts that GCC/G++ do not emit into optimized no-debug binaries; those facts stay visible as source_oracle_only and raw_recall"
    );
    print_precision_ledger(&total_score);
    print_output_debt_ledger(&total_score);
    print_reported_local_ledger(&total_score);
    print_leaked_temp_summary(&total_score, 15);

    ledger.print_summary();

    0
}

fn read_manifest(root: &Path) -> Result<Manifest, String> {
    let path = root.join("tests/corpus.toml");
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read {}: {e}", path.display()))?;
    toml::from_str(&text).map_err(|e| format!("failed to parse {}: {e}", path.display()))
}

fn load_dwarf(root: &Path, fixture: &Fixture) -> Result<Option<DwarfInfo>, String> {
    let path = root.join(&fixture.binary_path);
    let data = std::fs::read(&path).map_err(|e| format!("failed to read binary: {e}"))?;
    if !ElfLoader::can_load(&data) {
        return Ok(None);
    }
    let image = ElfLoader::load(&data).map_err(|e| format!("failed to load ELF: {e}"))?;
    let dwarf = import_dwarf(&image).map_err(|e| format!("failed to import DWARF: {e}"))?;
    if dwarf.functions.is_empty() && dwarf.structs.is_empty() {
        Ok(None)
    } else {
        Ok(Some(dwarf))
    }
}

fn parse_source_truth(
    root: &Path,
    fixture: &Fixture,
    source_path: &str,
) -> Result<Option<DwarfInfo>, String> {
    let path = root.join(source_path);
    let text = std::fs::read_to_string(&path)
        .map_err(|e| format!("failed to read source {}: {e}", path.display()))?;
    let ext = path
        .extension()
        .and_then(|e| e.to_str())
        .unwrap_or_default();
    let truth = match ext {
        "c" | "cc" | "cpp" | "cxx" | "C" => {
            parse_c_like_source_truth(&text, is_cpp_source(source_path))
        }
        "S" | "s" => parse_assembly_source_truth(&text),
        "py" => parse_python_generated_source_truth(&text),
        _ => DwarfInfo::default(),
    };
    if truth.functions.is_empty() && truth.structs.is_empty() {
        println!(
            "[type-ground-truth] SKIP {} - no parsed source facts for {}",
            fixture.name, source_path
        );
        Ok(None)
    } else {
        Ok(Some(truth))
    }
}

fn parse_c_like_source_truth(text: &str, source_is_cpp: bool) -> DwarfInfo {
    let cleaned = remove_gnu_attributes(&strip_comments_and_directives(text));
    let structs = parse_source_structs(&cleaned);
    let composite_names = structs.keys().cloned().collect::<BTreeSet<_>>();
    let mut functions = parse_source_functions(&cleaned, &composite_names, source_is_cpp);
    if source_is_cpp {
        for function in parse_source_inline_methods(&cleaned, &composite_names) {
            let key = functions.len() as u64;
            functions.insert(key, function);
        }
    }
    DwarfInfo {
        functions,
        structs,
        ..DwarfInfo::default()
    }
}

fn parse_assembly_source_truth(text: &str) -> DwarfInfo {
    let mut names = BTreeSet::new();
    for line in text.lines() {
        let trimmed = line.trim();
        let Some(rest) = trimmed
            .strip_prefix(".global")
            .or_else(|| trimmed.strip_prefix(".globl"))
        else {
            continue;
        };
        for name in rest
            .split(',')
            .map(str::trim)
            .filter(|name| !name.is_empty())
        {
            names.insert(name.to_string());
        }
    }
    source_truth_from_function_names(names)
}

fn parse_python_generated_source_truth(text: &str) -> DwarfInfo {
    let mut names = BTreeSet::new();
    let mut in_functions = false;
    for line in text.lines() {
        let trimmed = line.trim();
        if trimmed.starts_with("functions = {") {
            in_functions = true;
            continue;
        }
        if in_functions && trimmed.starts_with('}') {
            in_functions = false;
            continue;
        }
        if !in_functions {
            continue;
        }
        if let Some(rest) = trimmed.strip_prefix('"')
            && let Some((name, _)) = rest.split_once('"')
            && is_c_identifier(name)
        {
            names.insert(name.to_string());
        }
    }
    source_truth_from_function_names(names)
}

fn source_truth_from_function_names(names: BTreeSet<String>) -> DwarfInfo {
    let mut functions = BTreeMap::new();
    for (idx, name) in names.into_iter().enumerate() {
        functions.insert(
            idx as u64,
            FunctionDebugInfo {
                variadic: false,
                name,
                linkage_name: None,
                low_pc: idx as u64,
                high_pc: None,
                ranges: Vec::new(),
                params: Vec::new(),
                return_type: Some("void".to_string()),
                decl: None,
                locals: Vec::new(),
                cfa_to_rbp_delta: None,
            },
        );
    }
    DwarfInfo {
        functions,
        ..DwarfInfo::default()
    }
}

fn strip_comments_and_directives(text: &str) -> String {
    let bytes = text.as_bytes();
    let mut out = String::with_capacity(text.len());
    let mut i = 0usize;
    let mut in_line_comment = false;
    let mut in_block_comment = false;
    let mut in_string: Option<u8> = None;
    while i < bytes.len() {
        let b = bytes[i];
        let next = bytes.get(i + 1).copied();
        if in_line_comment {
            if b == b'\n' {
                in_line_comment = false;
                out.push('\n');
            } else {
                out.push(' ');
            }
            i += 1;
            continue;
        }
        if in_block_comment {
            if b == b'*' && next == Some(b'/') {
                out.push_str("  ");
                in_block_comment = false;
                i += 2;
            } else {
                out.push(if b == b'\n' { '\n' } else { ' ' });
                i += 1;
            }
            continue;
        }
        if let Some(quote) = in_string {
            out.push(b as char);
            if b == b'\\' && next.is_some() {
                i += 1;
                out.push(bytes[i] as char);
            } else if b == quote {
                in_string = None;
            }
            i += 1;
            continue;
        }
        if (b == b'"' || b == b'\'') && !in_line_comment && !in_block_comment {
            in_string = Some(b);
            out.push(b as char);
            i += 1;
            continue;
        }
        if b == b'/' && next == Some(b'/') {
            in_line_comment = true;
            out.push_str("  ");
            i += 2;
            continue;
        }
        if b == b'/' && next == Some(b'*') {
            in_block_comment = true;
            out.push_str("  ");
            i += 2;
            continue;
        }
        out.push(b as char);
        i += 1;
    }

    out.lines()
        .map(|line| {
            if line.trim_start().starts_with('#') {
                ""
            } else {
                line
            }
        })
        .collect::<Vec<_>>()
        .join("\n")
}

fn remove_gnu_attributes(text: &str) -> String {
    let mut out = text.to_string();
    while let Some(start) = out.find("__attribute__((") {
        let Some(end_rel) = out[start..].find("))") else {
            break;
        };
        let end = start + end_rel + 2;
        out.replace_range(start..end, " ");
    }
    out
}

fn parse_source_structs(text: &str) -> BTreeMap<String, StructType> {
    let mut structs = BTreeMap::new();
    let mut search = 0usize;
    while let Some(rel) = text[search..].find("struct ") {
        let start = search + rel;
        if !is_keyword_boundary(text, start, "struct") {
            search = start + "struct ".len();
            continue;
        }
        let mut pos = start + "struct ".len();
        pos = skip_ws(text, pos);
        let (name, name_end) = read_identifier(text, pos);
        if name.is_empty() {
            search = pos.saturating_add(1);
            continue;
        }
        let Some(open_rel) = text[name_end..].find('{') else {
            break;
        };
        let open = name_end + open_rel;
        let between = text[name_end..open].trim();
        if !(between.is_empty() || between.starts_with(':')) {
            search = name_end;
            continue;
        }
        let Some(close) = find_matching_brace(text, open) else {
            break;
        };
        let body = &text[open + 1..close];
        let fields = parse_source_struct_fields(body);
        structs.insert(
            name.to_string(),
            StructType {
                name: name.to_string(),
                size: 0,
                template_params: Vec::new(),
                fields,
            },
        );
        search = close + 1;
    }
    structs
}

fn parse_source_struct_fields(body: &str) -> Vec<StructField> {
    let mut fields = Vec::new();
    let composite_names = BTreeSet::new();
    for statement in body.split(';') {
        let candidate = declaration_tail(statement);
        if candidate.contains('(')
            || candidate.starts_with("virtual ")
            || candidate.starts_with("template ")
            || candidate.starts_with('~')
        {
            continue;
        }
        for (name, ty) in parse_var_decl_statement(candidate, &composite_names) {
            fields.push(StructField {
                name,
                offset: fields.len() as u64,
                size: 0,
                type_name: ty,
            });
        }
    }
    fields
}

fn parse_source_functions(
    text: &str,
    composite_names: &BTreeSet<String>,
    source_is_cpp: bool,
) -> BTreeMap<u64, FunctionDebugInfo> {
    let mut functions = BTreeMap::new();
    let mut idx = 0usize;
    let mut boundary = 0usize;
    while let Some(open_rel) = text[idx..].find('{') {
        let open = idx + open_rel;
        let header = text[boundary..open].trim();
        let Some(close) = find_matching_brace(text, open) else {
            break;
        };
        if let Some((name, return_type, params)) = parse_function_header(header) {
            let body = &text[open + 1..close];
            let locals = parse_source_locals(body, composite_names);
            let key = functions.len() as u64;
            functions.insert(
                key,
                FunctionDebugInfo {
                    variadic: false,
                    linkage_name: source_is_cpp.then(|| format!("__source_cpp::{name}")),
                    name,
                    low_pc: key,
                    high_pc: None,
                    ranges: Vec::new(),
                    params,
                    return_type: Some(return_type),
                    decl: None,
                    locals,
                    cfa_to_rbp_delta: None,
                },
            );
        }
        idx = close + 1;
        boundary = idx;
    }
    functions
}

fn parse_source_inline_methods(
    text: &str,
    composite_names: &BTreeSet<String>,
) -> Vec<FunctionDebugInfo> {
    let mut methods = Vec::new();
    let mut search = 0usize;
    while let Some(rel) = text[search..].find("struct ") {
        let start = search + rel;
        if !is_keyword_boundary(text, start, "struct") {
            search = start + "struct ".len();
            continue;
        }
        let mut pos = start + "struct ".len();
        pos = skip_ws(text, pos);
        let (struct_name, name_end) = read_identifier(text, pos);
        if struct_name.is_empty() {
            search = pos.saturating_add(1);
            continue;
        }
        let Some(open_rel) = text[name_end..].find('{') else {
            break;
        };
        let open = name_end + open_rel;
        let between = text[name_end..open].trim();
        if !(between.is_empty() || between.starts_with(':')) {
            search = name_end;
            continue;
        }
        let Some(close) = find_matching_brace(text, open) else {
            break;
        };
        let body = &text[open + 1..close];
        methods.extend(parse_methods_in_struct_body(
            struct_name,
            body,
            composite_names,
            methods.len() as u64,
        ));
        search = close + 1;
    }
    methods
}

fn parse_methods_in_struct_body(
    struct_name: &str,
    body: &str,
    composite_names: &BTreeSet<String>,
    key_base: u64,
) -> Vec<FunctionDebugInfo> {
    let mut out = Vec::new();
    let mut idx = 0usize;
    let mut boundary = 0usize;
    while let Some(open_rel) = body[idx..].find('{') {
        let open = idx + open_rel;
        let header = body[boundary..open].trim();
        let Some(close) = find_matching_brace(body, open) else {
            break;
        };
        if let Some((method, return_type, mut params)) = parse_function_header(header)
            && method != struct_name
        {
            params.insert(
                0,
                ParameterInfo {
                    name: Some("this".to_string()),
                    type_name: Some(format!("{struct_name} *")),
                    pointee_size: None,
                    frame_offset: None,
                },
            );
            let locals = parse_source_locals(&body[open + 1..close], composite_names);
            let key = key_base + out.len() as u64;
            out.push(FunctionDebugInfo {
                variadic: false,
                name: format!("{struct_name}_{method}"),
                linkage_name: Some(format!("{struct_name}::{method}")),
                low_pc: key,
                high_pc: None,
                ranges: Vec::new(),
                params,
                return_type: Some(return_type),
                decl: None,
                locals,
                cfa_to_rbp_delta: None,
            });
        }
        idx = close + 1;
        boundary = idx;
    }
    out
}

fn parse_function_header(header: &str) -> Option<(String, String, Vec<ParameterInfo>)> {
    let header = header
        .trim()
        .trim_start_matches(';')
        .trim()
        .replace('\n', " ");
    let header = strip_template_prefixes(&header);
    let header = header.trim();
    if header.is_empty()
        || header.starts_with("if ")
        || header.starts_with("for ")
        || header.starts_with("while ")
        || header.starts_with("switch ")
        || header.starts_with("catch ")
        || header.starts_with("struct ")
        || header.starts_with("class ")
    {
        return None;
    }
    let open = header.rfind('(')?;
    let close = find_matching_paren(header, open)?;
    let suffix = header[close + 1..].trim();
    if !suffix.is_empty() && !is_source_method_suffix(suffix) {
        return None;
    }
    let before = header[..open].trim();
    let params_text = &header[open + 1..close];
    let (return_type, name) = split_function_return_and_name(before)?;
    if !is_c_identifier(&name) {
        return None;
    }
    Some((
        name,
        clean_source_type(&return_type),
        parse_source_params(params_text),
    ))
}

fn is_source_method_suffix(suffix: &str) -> bool {
    suffix
        .split_whitespace()
        .all(|word| matches!(word, "const" | "override" | "final" | "noexcept"))
}

fn strip_template_prefixes(header: &str) -> String {
    let mut rest = header.trim();
    while let Some(after_template) = rest.strip_prefix("template") {
        let after_template = after_template.trim_start();
        if !after_template.starts_with('<') {
            break;
        }
        let Some(close) = find_matching_angle(after_template, 0) else {
            break;
        };
        rest = after_template[close + 1..].trim_start();
    }
    rest.to_string()
}

fn split_function_return_and_name(before: &str) -> Option<(String, String)> {
    let before = before.trim();
    let idx = before
        .char_indices()
        .rev()
        .find(|(_, ch)| ch.is_whitespace())
        .map(|(idx, _)| idx)?;
    let mut return_type = before[..idx].trim().to_string();
    let mut name = before[idx..].trim().to_string();
    while let Some(stripped) = name.strip_prefix('*').or_else(|| name.strip_prefix('&')) {
        return_type.push(' ');
        return_type.push(name.chars().next().unwrap_or('*'));
        name = stripped.trim_start().to_string();
    }
    if return_type.is_empty() || name.is_empty() {
        None
    } else {
        Some((return_type, name))
    }
}

fn parse_source_params(params_text: &str) -> Vec<ParameterInfo> {
    split_top_level_commas(params_text)
        .into_iter()
        .filter_map(|param| {
            let param = strip_initializer(param.trim());
            let param = param.trim();
            if param.is_empty() || param == "void" {
                return None;
            }
            let (ty, name) = split_type_and_name(param);
            Some(ParameterInfo {
                name,
                type_name: Some(clean_source_type(&ty)),
                pointee_size: None,
                frame_offset: None,
            })
        })
        .collect()
}

fn parse_source_locals(body: &str, composite_names: &BTreeSet<String>) -> Vec<LocalVariable> {
    let mut locals = Vec::new();
    let mut seen = BTreeSet::new();
    for statement in body.split(';') {
        let candidate = declaration_tail(statement);
        for (name, ty) in parse_var_decl_statement(candidate, composite_names) {
            if seen.insert(name.clone()) {
                locals.push(LocalVariable {
                    name,
                    type_name: Some(ty),
                    frame_offset: None,
                    locations: Vec::new(),
                    locations_dwarf_v5: Vec::new(),
                });
            }
        }
    }
    locals
}

fn declaration_tail(statement: &str) -> &str {
    let candidate = statement
        .rsplit('\n')
        .next()
        .unwrap_or(statement)
        .trim()
        .trim_start_matches('}')
        .trim();
    candidate
        .strip_prefix("for")
        .map(str::trim_start)
        .and_then(|rest| rest.strip_prefix('('))
        .unwrap_or(candidate)
        .trim()
}

fn parse_var_decl_statement(
    statement: &str,
    composite_names: &BTreeSet<String>,
) -> Vec<(String, String)> {
    let statement = statement.trim();
    if statement.is_empty()
        || statement.starts_with("return ")
        || statement.starts_with("if ")
        || statement.starts_with("while ")
        || statement.starts_with("switch ")
        || statement.starts_with("case ")
        || statement.starts_with("catch ")
        || statement.starts_with("throw ")
        || statement.starts_with("delete ")
    {
        return Vec::new();
    }
    let mut parts = split_top_level_commas(statement).into_iter();
    let Some(first_part) = parts.next() else {
        return Vec::new();
    };
    let first_decl = strip_initializer(first_part);
    let (base_ty, first_name) = split_type_and_name(first_decl.trim());
    let base_ty = clean_source_type(&base_ty);
    if !is_source_type_like(&base_ty, composite_names) || base_ty == "auto" {
        return Vec::new();
    }

    let mut out = Vec::new();
    if let Some(name) = first_name {
        out.push((name, base_ty.clone()));
    }
    for part in parts {
        let raw = strip_initializer(part).trim().to_string();
        if raw.is_empty() {
            continue;
        }
        let pointer_prefix = raw
            .chars()
            .take_while(|ch| *ch == '*' || *ch == '&')
            .count();
        let name = raw[pointer_prefix..]
            .split(['[', '{'])
            .next()
            .unwrap_or("")
            .trim();
        if !is_c_identifier(name) {
            continue;
        }
        let mut ty = base_ty.clone();
        if pointer_prefix > 0 {
            ty.push(' ');
            ty.push_str(&raw[..pointer_prefix]);
        }
        if let Some(brackets) = raw.find('[').map(|pos| &raw[pos..]) {
            ty.push_str(brackets);
        }
        out.push((name.to_string(), clean_source_type(&ty)));
    }
    out
}

fn strip_initializer(decl: &str) -> &str {
    let mut angle = 0usize;
    let mut paren = 0usize;
    let mut bracket = 0usize;
    for (idx, ch) in decl.char_indices() {
        match ch {
            '<' => angle += 1,
            '>' => angle = angle.saturating_sub(1),
            '(' => paren += 1,
            ')' => paren = paren.saturating_sub(1),
            '[' => bracket += 1,
            ']' => bracket = bracket.saturating_sub(1),
            '=' | '{' if angle == 0 && paren == 0 && bracket == 0 => {
                return decl[..idx].trim_end();
            }
            _ => {}
        }
    }
    decl.trim_end()
}

fn clean_source_type(ty: &str) -> String {
    let mut words = Vec::new();
    for word in ty.split_whitespace() {
        if matches!(
            word,
            "static" | "inline" | "extern" | "virtual" | "constexpr" | "mutable"
        ) {
            continue;
        }
        words.push(word);
    }
    words.join(" ")
}

fn is_source_type_like(ty: &str, composite_names: &BTreeSet<String>) -> bool {
    let normalized = ty.trim().trim_start_matches("const ").trim();
    let normalized = normalized
        .trim_start_matches("volatile ")
        .trim_start_matches("struct ")
        .trim();
    let head = normalized
        .split_whitespace()
        .next()
        .unwrap_or("")
        .trim_matches('*')
        .trim_matches('&');
    let base = head
        .split('<')
        .next()
        .unwrap_or(head)
        .split('[')
        .next()
        .unwrap_or(head);
    matches!(
        base,
        "void"
            | "bool"
            | "_Bool"
            | "char"
            | "short"
            | "int"
            | "long"
            | "float"
            | "double"
            | "signed"
            | "unsigned"
            | "size_t"
            | "int8_t"
            | "uint8_t"
            | "int16_t"
            | "uint16_t"
            | "int32_t"
            | "uint32_t"
            | "int64_t"
            | "uint64_t"
    ) || composite_names.contains(base)
}

fn skip_ws(text: &str, mut pos: usize) -> usize {
    while text
        .as_bytes()
        .get(pos)
        .is_some_and(u8::is_ascii_whitespace)
    {
        pos += 1;
    }
    pos
}

fn read_identifier(text: &str, pos: usize) -> (&str, usize) {
    let mut end = pos;
    for (idx, ch) in text[pos..].char_indices() {
        if idx == 0 {
            if !(ch == '_' || ch.is_ascii_alphabetic()) {
                return ("", pos);
            }
            end = pos + ch.len_utf8();
            continue;
        }
        if is_ident_char(ch) {
            end = pos + idx + ch.len_utf8();
        } else {
            break;
        }
    }
    (&text[pos..end], end)
}

fn is_keyword_boundary(text: &str, start: usize, keyword: &str) -> bool {
    let end = start + keyword.len();
    let before = text[..start].chars().next_back();
    let after = text[end..].chars().next();
    before.is_none_or(|ch| !is_ident_char(ch)) && after.is_none_or(|ch| !is_ident_char(ch))
}

fn find_matching_brace(text: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (idx, ch) in text.char_indices().skip_while(|(idx, _)| *idx < open) {
        match ch {
            '{' => depth += 1,
            '}' => {
                depth = depth.saturating_sub(1);
                if depth == 0 {
                    return Some(idx);
                }
            }
            _ => {}
        }
    }
    None
}

fn find_matching_angle(text: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (idx, ch) in text.char_indices().skip_while(|(idx, _)| *idx < open) {
        match ch {
            '<' => depth += 1,
            '>' => {
                depth = depth.saturating_sub(1);
                if depth == 0 {
                    return Some(idx);
                }
            }
            _ => {}
        }
    }
    None
}

#[allow(clippy::too_many_arguments)]
fn score_fixture(
    root: &Path,
    unlace_bin: &Path,
    fixture: &Fixture,
    dwarf: &DwarfInfo,
    truth_kind: TruthKind,
    trace: &TypeTrace,
    ledger: &MissingLedger,
) -> Result<TypeScore, String> {
    let mut functions = scoreable_functions(dwarf);
    if functions.is_empty() {
        return Err("no source-level functions to score".to_string());
    }

    let output_dir = std::env::temp_dir().join(format!(
        "unlace-type-recovery-{}-{}",
        process::id(),
        fixture.name
    ));
    let _ = std::fs::remove_dir_all(&output_dir);
    std::fs::create_dir_all(&output_dir)
        .map_err(|e| format!("failed to create {}: {e}", output_dir.display()))?;

    let binary = root.join(&fixture.binary_path);
    let mut command = Command::new(unlace_bin);
    command.args([
        "batch",
        "--emit",
        "c",
        "--timeout",
        &timeout_arg(),
        "--output-dir",
    ]);
    command.arg(&output_dir);
    if truth_kind == TruthKind::Dwarf {
        let scope = format!(
            "^({})$",
            functions
                .iter()
                .flat_map(|f| function_scope_names(f).into_iter())
                .map(|name| regex_escape(&name))
                .collect::<Vec<_>>()
                .join("|")
        );
        command.args(["--scope", &scope]);
        trace.line(
            Some(&fixture.name),
            None,
            format!(
                "batch scope truth={truth_kind:?} functions={} regex={scope}",
                functions.len()
            ),
        );
    } else {
        trace.line(
            Some(&fixture.name),
            None,
            format!(
                "batch scope truth={truth_kind:?} functions={} regex=<all-rendered>",
                functions.len()
            ),
        );
    }
    trace.line(
        Some(&fixture.name),
        None,
        format!(
            "batch spawn bin={} binary={} output_dir={}",
            unlace_bin.display(),
            binary.display(),
            output_dir.display()
        ),
    );
    let output = command
        .arg(&binary)
        .env_remove("RUST_LOG")
        .output()
        .map_err(|e| format!("failed to spawn unlace batch: {e}"))?;
    if !output.status.success() {
        return Err(format!(
            "unlace batch failed: {}",
            String::from_utf8_lossy(&output.stderr)
                .lines()
                .next()
                .unwrap_or("unknown error")
        ));
    }
    trace.verbose(
        Some(&fixture.name),
        None,
        format!(
            "batch ok stdout_bytes={} stderr_bytes={}",
            output.stdout.len(),
            output.stderr.len()
        ),
    );
    if trace.verbose {
        for line in String::from_utf8_lossy(&output.stderr).lines().take(200) {
            trace.verbose(Some(&fixture.name), None, format!("batch stderr {line}"));
        }
    }

    let output_files = read_output_files(&output_dir);
    trace.line(
        Some(&fixture.name),
        None,
        format!(
            "batch outputs count={} stems={:?}",
            output_files.len(),
            output_files.keys().collect::<Vec<_>>()
        ),
    );
    let mut rendered = BTreeMap::new();
    for function in &functions {
        let (source, text) = rendered_text_for_function(function, &output_files);
        trace.line(
            Some(&fixture.name),
            Some(&function.name),
            format!(
                "render-map identity={} source={} text_len={} signature={:?}",
                function_identity(function),
                source.as_deref().unwrap_or("<none>"),
                text.len(),
                signature_line_for_function(&text, function)
            ),
        );
        rendered.insert(function_identity(function), text);
    }
    if truth_kind == TruthKind::ParsedSource {
        let before = functions.len();
        functions.retain(|function| {
            let keep = rendered
                .get(&function_identity(function))
                .is_some_and(|text| !text.is_empty());
            if !keep {
                trace.line(
                    Some(&fixture.name),
                    Some(&function.name),
                    "parsed-source function omitted: no exact rendered function match",
                );
            }
            keep
        });
        trace.line(
            Some(&fixture.name),
            None,
            format!(
                "parsed-source rendered retain before={} after={}",
                before,
                functions.len()
            ),
        );
        if functions.is_empty() {
            let _ = std::fs::remove_dir_all(&output_dir);
            return Err("no rendered source functions to score".to_string());
        }
    }
    let all_output = rendered.values().cloned().collect::<Vec<_>>().join("\n");
    let composite_names = composite_names(dwarf);
    let policy = ScoringPolicy::new(root, fixture, truth_kind, trace);
    let mut score = TypeScore {
        fixtures: 1,
        functions: functions.len(),
        c_functions: functions.iter().filter(|f| !is_cpp_function(f)).count(),
        cpp_functions: functions.iter().filter(|f| is_cpp_function(f)).count(),
        ..TypeScore::default()
    };

    for function in &functions {
        let text = rendered
            .get(&function_identity(function))
            .map_or("", String::as_str);
        score_function(
            &fixture.name,
            function,
            text,
            &composite_names,
            &policy,
            &mut score,
            trace,
            ledger,
        );
    }
    score_structs(
        &fixture.name,
        dwarf,
        &all_output,
        &composite_names,
        &policy,
        &mut score,
        trace,
        ledger,
    );

    let _ = std::fs::remove_dir_all(&output_dir);
    Ok(score)
}

fn scoreable_functions(dwarf: &DwarfInfo) -> Vec<&FunctionDebugInfo> {
    let mut seen = BTreeSet::new();
    let mut functions = Vec::new();
    for function in dwarf.functions.values() {
        if !is_scoreable_function(function) || !seen.insert(function_identity(function)) {
            continue;
        }
        functions.push(function);
    }
    functions.sort_by(|a, b| a.name.cmp(&b.name));
    functions
}

fn is_scoreable_function(function: &FunctionDebugInfo) -> bool {
    let base = function_base_name(&function.name);
    !base.is_empty()
        && !base.starts_with('_')
        && (function.return_type.is_some()
            || !function.params.is_empty()
            || !function.locals.is_empty()
            || function.decl.is_some())
}

#[allow(clippy::too_many_arguments)]
fn score_function(
    fixture: &str,
    function: &FunctionDebugInfo,
    text: &str,
    composite_names: &BTreeSet<String>,
    policy: &ScoringPolicy<'_>,
    score: &mut TypeScore,
    trace: &TypeTrace,
    ledger: &MissingLedger,
) {
    let signature = signature_line_for_function(text, function);
    trace.line(
        Some(fixture),
        Some(&function.name),
        format!(
            "score start return={:?} params={} locals={} signature={signature:?} text_len={}",
            function.return_type,
            function.params.len(),
            function.locals.len(),
            text.len()
        ),
    );
    trace.verbose(
        Some(fixture),
        Some(&function.name),
        format!(
            "reported params={:?} locals={:?}",
            signature
                .as_deref()
                .map(|sig| reported_params(sig, function))
                .unwrap_or_default()
                .into_iter()
                .map(|p| (p.ty, p.name))
                .collect::<Vec<_>>(),
            reported_local_decls(text, signature.as_deref())
                .into_iter()
                .map(|d| (d.ty, d.name))
                .collect::<Vec<_>>()
        ),
    );
    add_reported_function_facts(
        fixture,
        function,
        text,
        signature.as_deref(),
        composite_names,
        score,
        policy,
        trace,
    );
    if let Some(return_type) = function.return_type.as_deref() {
        let recovered = signature
            .as_deref()
            .is_some_and(|line| signature_return_matches(line, function, return_type));
        if !recovered {
            trace.miss(
                Some(fixture),
                Some(&function.name),
                format!("return_type expected={return_type} signature={signature:?}"),
            );
            ledger.record(
                fixture,
                &function.name,
                "return_type",
                return_type,
                format!("signature={signature:?}"),
                FactScope::Recoverable,
            );
        }
        score.return_types.add_expected(recovered);
        let shape_recovered = signature
            .as_deref()
            .is_some_and(|line| type_and_name_appear(line, return_type, None));
        let facts = add_type_shape_expectations(
            score,
            return_type,
            None,
            shape_recovered,
            composite_names,
            FactScope::Recoverable,
        );
        trace_type_shape_miss(
            trace,
            ledger,
            fixture,
            &function.name,
            "return",
            return_type,
            None,
            facts,
            shape_recovered,
            FactScope::Recoverable,
        );
    }

    for (param_idx, param) in function.params.iter().enumerate() {
        if let Some(name) = param.name.as_deref() {
            let recovered = signature
                .as_deref()
                .is_some_and(|line| word_contains(line, name));
            let scope = policy.exact_param_name_scope(function, name);
            if !recovered {
                trace.miss(
                    Some(fixture),
                    Some(&function.name),
                    format!(
                        "param_name index={param_idx} expected={name} type={:?} signature={signature:?}",
                        param.type_name
                    ),
                );
                ledger.record(
                    fixture,
                    &function.name,
                    "param_name",
                    name,
                    format!("index={param_idx} type={:?}", param.type_name),
                    scope,
                );
            }
            policy.trace_oracle_only(fixture, &function.name, "param_name", name, scope);
            scope.add_expected(&mut score.param_names, recovered);
        }
        if let Some(type_name) = param.type_name.as_deref() {
            let recovered = signature.as_deref().is_some_and(|line| {
                signature_param_type_matches(line, function, param_idx, type_name)
            });
            if !recovered {
                trace.miss(
                    Some(fixture),
                    Some(&function.name),
                    format!(
                        "param_type index={param_idx} expected={type_name} name={:?} signature={signature:?}",
                        param.name
                    ),
                );
                ledger.record(
                    fixture,
                    &function.name,
                    "param_type",
                    type_name,
                    format!("index={param_idx} name={:?}", param.name),
                    FactScope::Recoverable,
                );
            }
            score.param_types.add_expected(recovered);
            let facts = add_type_shape_expectations(
                score,
                type_name,
                param.name.as_deref(),
                recovered,
                composite_names,
                FactScope::Recoverable,
            );
            trace_type_shape_miss(
                trace,
                ledger,
                fixture,
                &function.name,
                "param",
                type_name,
                param.name.as_deref(),
                facts,
                recovered,
                FactScope::Recoverable,
            );
        }
    }

    for local in &function.locals {
        let name_recovered = word_contains(text, &local.name);
        let name_scope = policy.local_name_scope();
        if !name_recovered {
            trace.miss(
                Some(fixture),
                Some(&function.name),
                format!(
                    "local_name expected={} type={:?} frame_offset={:?}",
                    local.name, local.type_name, local.frame_offset
                ),
            );
            ledger.record(
                fixture,
                &function.name,
                "local_name",
                &local.name,
                format!(
                    "type={:?} frame_offset={:?}",
                    local.type_name, local.frame_offset
                ),
                name_scope,
            );
        }
        policy.trace_oracle_only(
            fixture,
            &function.name,
            "local_name",
            &local.name,
            name_scope,
        );
        name_scope.add_expected(&mut score.local_names, name_recovered);
        if let Some(type_name) = local.type_name.as_deref() {
            let type_recovered = type_and_name_appear(text, type_name, Some(&local.name));
            let type_scope = policy.local_type_scope();
            if !type_recovered {
                trace.miss(
                    Some(fixture),
                    Some(&function.name),
                    format!("local_type expected={type_name} name={}", local.name),
                );
                ledger.record(
                    fixture,
                    &function.name,
                    "local_type",
                    type_name,
                    format!("name={}", local.name),
                    type_scope,
                );
            }
            policy.trace_oracle_only(fixture, &function.name, "local_type", type_name, type_scope);
            type_scope.add_expected(&mut score.local_types, type_recovered);
            let facts = add_type_shape_expectations(
                score,
                type_name,
                Some(&local.name),
                type_recovered,
                composite_names,
                type_scope,
            );
            trace_type_shape_miss(
                trace,
                ledger,
                fixture,
                &function.name,
                "local",
                type_name,
                Some(&local.name),
                facts,
                type_recovered,
                type_scope,
            );
        }
    }
}

#[allow(clippy::too_many_arguments)]
/// Compiler-emitted builtin types (e.g. `__va_list_tag` for varargs) are not
/// source-authored ground truth; the decompiler is not expected to reproduce
/// their exact DWARF spelling, so they are excluded from scoring entirely.
fn is_compiler_synthetic_struct(name: &str) -> bool {
    name.contains("__va_list_tag") || name.contains("__builtin")
}

/// Synthetic members the compiler injects (the `_vptr.<Class>` vtable pointer
/// emitted for polymorphic C++ types, which has no source declaration and an
/// empty/implicit type) are not source facts and are skipped during scoring.
fn is_compiler_synthetic_field(field: &StructField) -> bool {
    field.name.starts_with("_vptr") || field.name.is_empty()
}

#[allow(clippy::too_many_arguments)]
fn score_structs(
    fixture: &str,
    dwarf: &DwarfInfo,
    output: &str,
    composite_names: &BTreeSet<String>,
    policy: &ScoringPolicy<'_>,
    score: &mut TypeScore,
    trace: &TypeTrace,
    ledger: &MissingLedger,
) {
    add_reported_struct_facts(output, composite_names, score);
    for strukt in dwarf.structs.values() {
        if strukt.name.is_empty() || is_compiler_synthetic_struct(&strukt.name) {
            continue;
        }
        let struct_recovered = word_contains(output, &strukt.name);
        let struct_scope = policy.struct_name_scope(&strukt.name);
        if !struct_recovered {
            trace.miss(
                Some(fixture),
                Some(&strukt.name),
                format!("struct_name expected={}", strukt.name),
            );
            ledger.record(
                fixture,
                &strukt.name,
                "struct_name",
                &strukt.name,
                String::new(),
                struct_scope,
            );
        }
        policy.trace_oracle_only(
            fixture,
            &strukt.name,
            "struct_name",
            &strukt.name,
            struct_scope,
        );
        struct_scope.add_expected(&mut score.struct_names, struct_recovered);
        for field in &strukt.fields {
            if is_compiler_synthetic_field(field) {
                continue;
            }
            let field_name_recovered = field_name_appears(output, field);
            let field_scope = policy.field_scope(field);
            if !field_name_recovered {
                trace.miss(
                    Some(fixture),
                    Some(&strukt.name),
                    format!(
                        "field_name struct={} expected={} offset={} type={}",
                        strukt.name, field.name, field.offset, field.type_name
                    ),
                );
                ledger.record(
                    fixture,
                    &strukt.name,
                    "field_name",
                    &field.name,
                    format!(
                        "struct={} offset={} type={}",
                        strukt.name, field.offset, field.type_name
                    ),
                    field_scope,
                );
            }
            policy.trace_oracle_only(
                fixture,
                &strukt.name,
                "field_name",
                &field.name,
                field_scope,
            );
            field_scope.add_expected(&mut score.field_names, field_name_recovered);
            let field_type_recovered =
                type_and_name_appear(output, &field.type_name, Some(&field.name));
            if !field_type_recovered {
                trace.miss(
                    Some(fixture),
                    Some(&strukt.name),
                    format!(
                        "field_type struct={} expected={} name={}",
                        strukt.name, field.type_name, field.name
                    ),
                );
                ledger.record(
                    fixture,
                    &strukt.name,
                    "field_type",
                    &field.type_name,
                    format!("struct={} name={}", strukt.name, field.name),
                    field_scope,
                );
            }
            policy.trace_oracle_only(
                fixture,
                &strukt.name,
                "field_type",
                &field.type_name,
                field_scope,
            );
            field_scope.add_expected(&mut score.field_types, field_type_recovered);
            let facts = add_type_shape_expectations(
                score,
                &field.type_name,
                Some(&field.name),
                field_type_recovered,
                composite_names,
                field_scope,
            );
            trace_type_shape_miss(
                trace,
                ledger,
                fixture,
                &strukt.name,
                "field",
                &field.type_name,
                Some(&field.name),
                facts,
                field_type_recovered,
                field_scope,
            );
        }
    }
}

fn function_identity(function: &FunctionDebugInfo) -> String {
    function
        .linkage_name
        .clone()
        .unwrap_or_else(|| function.name.clone())
}

fn function_scope_names(function: &FunctionDebugInfo) -> Vec<String> {
    let mut names = Vec::new();
    if let Some(linkage) = function.linkage_name.as_deref()
        && !linkage.is_empty()
    {
        names.push(linkage.to_string());
    }
    names.push(function.name.clone());
    names.push(function_base_name(&function.name));
    names.sort();
    names.dedup();
    names
}

fn function_base_name(name: &str) -> String {
    let before_params = name.split_once('(').map_or(name, |(head, _)| head).trim();
    before_params
        .split_whitespace()
        .last()
        .unwrap_or(before_params)
        .trim()
        .to_string()
}

fn is_cpp_source(path: &str) -> bool {
    matches!(
        Path::new(path).extension().and_then(|e| e.to_str()),
        Some("cc" | "cpp" | "cxx" | "C")
    )
}

fn is_cpp_function(function: &FunctionDebugInfo) -> bool {
    let name = &function.name;
    name.contains("::")
        || name.contains('<')
        || name.contains('>')
        || name.contains("operator")
        || function.linkage_name.as_deref().is_some_and(|name| {
            name.starts_with("_Z") || name.starts_with("__source_cpp::") || name.contains("::")
        })
}

fn regex_escape(value: &str) -> String {
    let mut out = String::new();
    for ch in value.chars() {
        if matches!(
            ch,
            '\\' | '.' | '+' | '*' | '?' | '(' | ')' | '|' | '[' | ']' | '{' | '}' | '^' | '$'
        ) {
            out.push('\\');
        }
        out.push(ch);
    }
    out
}

fn sanitize_filename_stem(name: &str, addr: u64) -> String {
    let sanitized: String = name
        .chars()
        .map(|c| {
            if c.is_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();
    if sanitized.is_empty() {
        format!("func_{addr:x}")
    } else {
        sanitized
    }
}

fn read_output_files(output_dir: &Path) -> BTreeMap<String, String> {
    let mut out = BTreeMap::new();
    let Ok(entries) = std::fs::read_dir(output_dir) else {
        return out;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.extension().and_then(|e| e.to_str()) != Some("c") {
            continue;
        }
        let Some(stem) = path.file_stem().and_then(|s| s.to_str()) else {
            continue;
        };
        let text = std::fs::read_to_string(&path).unwrap_or_default();
        out.insert(stem.to_string(), text);
    }
    out
}

fn rendered_text_for_function(
    function: &FunctionDebugInfo,
    output_files: &BTreeMap<String, String>,
) -> (Option<String>, String) {
    for name in function_scope_names(function) {
        let stem = sanitize_filename_stem(&name, function.low_pc);
        if let Some(text) = output_files.get(&stem) {
            return (Some(stem), text.clone());
        }
    }

    let candidates = function_signature_candidates(function);
    output_files
        .iter()
        .find(|(_stem, text)| {
            signature_line_for_candidates(text, &candidates).is_some()
                || candidates
                    .iter()
                    .any(|candidate| function_banner_matches(text, candidate))
        })
        .map(|(stem, text)| (Some(stem.clone()), text.clone()))
        .unwrap_or_else(|| (None, String::new()))
}

fn function_banner_matches(text: &str, candidate: &str) -> bool {
    text.lines().any(|line| {
        let trimmed = line.trim();
        let Some(comment) = trimmed
            .strip_prefix("/*")
            .or_else(|| trimmed.strip_prefix("//"))
        else {
            return false;
        };
        let Some(rest) = comment.trim_start().strip_prefix("Function:") else {
            return false;
        };
        let Some((name, _metadata)) = rest.trim().split_once('|') else {
            return false;
        };
        name.trim() == candidate
    })
}

fn composite_names(dwarf: &DwarfInfo) -> BTreeSet<String> {
    let mut names = BTreeSet::new();
    for name in dwarf.structs.keys().chain(dwarf.unions.keys()) {
        names.insert(name.clone());
        if let Some((base, _)) = name.split_once('<') {
            names.insert(base.trim().to_string());
        }
    }
    names
}

fn function_signature_candidates(function: &FunctionDebugInfo) -> Vec<String> {
    let mut candidates = vec![function.name.clone(), function_base_name(&function.name)];
    if let Some(linkage) = function.linkage_name.as_deref() {
        candidates.push(linkage.to_string());
    }
    candidates.retain(|name| !name.is_empty());
    candidates.sort_by_key(|name| std::cmp::Reverse(name.len()));
    candidates.dedup();
    candidates
}

fn signature_line_for_function(text: &str, function: &FunctionDebugInfo) -> Option<String> {
    signature_line_for_candidates(text, &function_signature_candidates(function))
}

fn signature_line_for_candidates(text: &str, candidates: &[String]) -> Option<String> {
    text.lines().find_map(|line| {
        let trimmed = line.trim();
        if trimmed.starts_with("//") || trimmed.starts_with("/*") || trimmed.starts_with('*') {
            return None;
        }
        if candidates
            .iter()
            .any(|candidate| trimmed.contains(&format!("{candidate}(")))
            && trimmed.ends_with('{')
        {
            Some(trimmed.trim_end_matches('{').trim().to_string())
        } else {
            None
        }
    })
}

fn signature_return_matches(
    signature: &str,
    function: &FunctionDebugInfo,
    return_type: &str,
) -> bool {
    function_signature_candidates(function)
        .iter()
        .find_map(|name| signature.find(&format!("{name}(")))
        .is_some_and(|idx| normalize_type(&signature[..idx]) == normalize_type(return_type))
}

fn signature_param_type_matches(
    signature: &str,
    function: &FunctionDebugInfo,
    param_idx: usize,
    type_name: &str,
) -> bool {
    reported_params(signature, function)
        .get(param_idx)
        .is_some_and(|param| normalize_type(&param.ty) == normalize_type(type_name))
}

fn add_type_shape_expectations(
    score: &mut TypeScore,
    type_name: &str,
    name: Option<&str>,
    recovered: bool,
    composite_names: &BTreeSet<String>,
    scope: FactScope,
) -> TypeFacts {
    let facts = classify_type_facts(type_name, composite_names);
    if facts.pointer {
        scope.add_expected(&mut score.pointer_types, recovered);
    }
    if facts.array {
        scope.add_expected(&mut score.array_types, recovered);
    }
    if facts.struct_ref {
        let struct_recovered = name
            .map(|name| recovered && !name.is_empty())
            .unwrap_or(recovered);
        scope.add_expected(&mut score.struct_ref_types, struct_recovered);
    }
    facts
}

#[allow(clippy::too_many_arguments)]
fn trace_type_shape_miss(
    trace: &TypeTrace,
    ledger: &MissingLedger,
    fixture: &str,
    function: &str,
    role: &str,
    type_name: &str,
    name: Option<&str>,
    facts: TypeFacts,
    recovered: bool,
    scope: FactScope,
) {
    if recovered {
        return;
    }
    if facts.pointer {
        trace.miss(
            Some(fixture),
            Some(function),
            format!("pointer_type role={role} expected={type_name} name={name:?}"),
        );
        ledger.record(
            fixture,
            function,
            "pointer_type",
            type_name,
            format!("role={role} name={name:?}"),
            scope,
        );
    }
    if facts.array {
        trace.miss(
            Some(fixture),
            Some(function),
            format!("array_type role={role} expected={type_name} name={name:?}"),
        );
        ledger.record(
            fixture,
            function,
            "array_type",
            type_name,
            format!("role={role} name={name:?}"),
            scope,
        );
    }
    if facts.struct_ref {
        trace.miss(
            Some(fixture),
            Some(function),
            format!("struct_ref role={role} expected={type_name} name={name:?}"),
        );
        ledger.record(
            fixture,
            function,
            "struct_ref",
            type_name,
            format!("role={role} name={name:?}"),
            scope,
        );
    }
}

fn add_reported_type_shapes(
    score: &mut TypeScore,
    type_name: &str,
    composite_names: &BTreeSet<String>,
) {
    add_reported_type_shapes_scoped(score, type_name, composite_names, FactScope::Recoverable);
}

fn add_reported_type_shapes_scoped(
    score: &mut TypeScore,
    type_name: &str,
    composite_names: &BTreeSet<String>,
    scope: FactScope,
) {
    let facts = classify_type_facts(type_name, composite_names);
    if facts.pointer {
        scope.add_reported(&mut score.pointer_types);
    }
    if facts.array {
        scope.add_reported(&mut score.array_types);
    }
    if facts.struct_ref {
        scope.add_reported(&mut score.struct_ref_types);
    }
}

#[derive(Default, Clone, Copy, Debug)]
struct TypeFacts {
    pointer: bool,
    array: bool,
    struct_ref: bool,
}

fn classify_type_facts(type_name: &str, composite_names: &BTreeSet<String>) -> TypeFacts {
    let normalized = normalize_type(type_name);
    let mut facts = TypeFacts {
        pointer: normalized.contains('*'),
        array: normalized.contains('[')
            || normalized.contains("Array<")
            || normalized.contains("array<"),
        struct_ref: false,
    };

    let stripped = normalized.replace(['*', '&', '[', ']', ',', '<', '>'], " ");
    for name in composite_names {
        if word_contains(&stripped, name) {
            facts.struct_ref = true;
            break;
        }
    }
    facts
}

#[allow(clippy::too_many_arguments)]
fn add_reported_function_facts(
    fixture: &str,
    function: &FunctionDebugInfo,
    text: &str,
    signature: Option<&str>,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
    policy: &ScoringPolicy<'_>,
    trace: &TypeTrace,
) {
    if let Some(signature) = signature {
        score.return_types.add_reported(1);
        if let Some(return_type) = reported_return_type(signature, function) {
            add_reported_type_shapes(score, &return_type, composite_names);
        }
        for (idx, param) in reported_params(signature, function).into_iter().enumerate() {
            if function.params.get(idx).is_none() {
                score.record_abi_param_carrier();
                trace.line(
                    Some(fixture),
                    Some(&function.name),
                    format!("abi_param_carrier_skipped index={idx} type={}", param.ty),
                );
                continue;
            }
            score.param_types.add_reported(1);
            add_reported_type_shapes(score, &param.ty, composite_names);
            if let Some(name) = &param.name {
                // Exact param names are source-oracle-only in optimized no-debug
                // builds; route the emission into the same scope recall uses.
                policy
                    .exact_param_name_scope(function, name)
                    .add_reported(&mut score.param_names);
            }
        }
    }

    let name_scope = policy.local_name_scope();
    let type_scope = policy.local_type_scope();
    let mut reported_source_names = BTreeSet::new();
    let mut reported_source_types = BTreeSet::new();
    for decl in reported_local_decls(text, signature) {
        // Output-cleanliness debt axis (leaked_temp_decls) is unchanged: every
        // generic `vN`/`cN`/`aN` that is not a pure register temp stays counted
        // and traced, so the producer debt these carriers represent is never
        // hidden by the precision-scope decision below.
        if is_generic_reported_lvar_name(&decl.name) && !decl.is_synthetic_register_temp() {
            score.record_leaked_temp(fixture, &function.name, &decl.ty, &decl.name);
            trace.line(
                Some(fixture),
                Some(&function.name),
                format!("leaked_temp_decl type={} name={}", decl.ty, decl.name),
            );
        }
        if decl.is_non_source_carrier() {
            trace.line(
                Some(fixture),
                Some(&function.name),
                format!(
                    "non_source_carrier_skipped type={} name={} comment={}",
                    decl.ty,
                    decl.name,
                    decl.comment.as_deref().unwrap_or("")
                ),
            );
            continue;
        }
        let matched_local = function.locals.iter().find(|l| l.name == decl.name);
        let matched_dwarf = matched_local.is_some();
        if matched_local.is_none() && decl.is_stack_offset_carrier() {
            score.record_stack_carrier();
            trace.line(
                Some(fixture),
                Some(&function.name),
                format!("stack_carrier_skipped type={} name={}", decl.ty, decl.name),
            );
            continue;
        }
        let source_name_first_seen = !matched_dwarf
            || reported_source_names.insert((function.name.clone(), decl.name.clone()));
        let source_type_matches =
            matched_local.is_some_and(|local| local_type_matches(local, &decl.ty));
        let source_type_first_seen = !source_type_matches
            || reported_source_types.insert((function.name.clone(), decl.name.clone()));
        if source_name_first_seen {
            name_scope.add_reported(&mut score.local_names);
        } else {
            score.record_duplicate_source_local();
            trace.line(
                Some(fixture),
                Some(&function.name),
                format!("duplicate_source_local_name_skipped name={}", decl.name),
            );
        }
        if source_type_first_seen {
            type_scope.add_reported(&mut score.local_types);
            add_reported_type_shapes_scoped(score, &decl.ty, composite_names, type_scope);
        } else {
            trace.line(
                Some(fixture),
                Some(&function.name),
                format!(
                    "duplicate_source_local_type_skipped name={} type={}",
                    decl.name, decl.ty
                ),
            );
        }
        score.reported_local_sites.push(ReportedLocalSite {
            fixture: fixture.to_string(),
            function: function.name.clone(),
            ty: decl.ty.clone(),
            name: decl.name.clone(),
            comment: decl.comment.clone(),
            matched_dwarf,
        });
    }
}

struct ReportedParam {
    ty: String,
    name: Option<String>,
}

struct ReportedDecl {
    ty: String,
    name: String,
    comment: Option<String>,
}

fn reported_return_type(signature: &str, function: &FunctionDebugInfo) -> Option<String> {
    let idx = function_signature_candidates(function)
        .iter()
        .find_map(|name| signature.find(&format!("{name}(")))?;
    Some(signature[..idx].trim().to_string())
}

fn reported_params(signature: &str, function: &FunctionDebugInfo) -> Vec<ReportedParam> {
    let Some(open) = function_signature_candidates(function)
        .iter()
        .find_map(|name| {
            signature
                .find(&format!("{name}("))
                .map(|idx| idx + name.len())
        })
    else {
        return Vec::new();
    };
    let Some(close) = find_matching_paren(signature, open) else {
        return Vec::new();
    };
    split_top_level_commas(&signature[open + 1..close])
        .into_iter()
        .filter_map(|param| parse_param_decl(param.trim()))
        .collect()
}

fn parse_param_decl(param: &str) -> Option<ReportedParam> {
    let param = param.trim();
    if param.is_empty() || param == "void" {
        return None;
    }
    let (ty, name) = split_type_and_name(param);
    Some(ReportedParam { ty, name })
}

fn reported_local_decls(text: &str, signature: Option<&str>) -> Vec<ReportedDecl> {
    let Some(signature) = signature else {
        return Vec::new();
    };
    let mut in_function = false;
    let mut decls = Vec::new();
    for line in text.lines() {
        let trimmed = line.trim();
        if !in_function {
            if trimmed.trim_end_matches('{').trim() == signature {
                in_function = true;
            }
            continue;
        }
        if trimmed == "}" {
            break;
        }
        if trimmed.is_empty() {
            continue;
        }
        if let Some(comment_decl) = trimmed.strip_prefix("//") {
            if let Some(decl) = parse_local_decl(comment_decl.trim()) {
                decls.push(decl);
            }
            continue;
        }
        let Some(decl) = parse_local_decl(trimmed) else {
            if !trimmed.starts_with("/*") {
                break;
            }
            continue;
        };
        decls.push(decl);
    }
    decls
}

fn parse_local_decl(line: &str) -> Option<ReportedDecl> {
    let (line, comment) = line
        .split_once("//")
        .map_or((line, None), |(head, comment)| {
            (head, Some(comment.trim().to_string()))
        });
    let line = line.trim();
    let line = line.strip_suffix(';')?.trim();
    if line.is_empty()
        || line.contains('=')
        || line.starts_with("return ")
        || line.starts_with("if ")
        || line.starts_with("for ")
        || line.starts_with("while ")
        || line.starts_with("goto ")
    {
        return None;
    }
    let (ty, name) = split_type_and_name(line);
    name.map(|name| ReportedDecl { ty, name, comment })
}

impl ReportedDecl {
    fn is_synthetic_register_temp(&self) -> bool {
        is_generic_reported_lvar_name(&self.name)
            && self
                .comment
                .as_deref()
                .is_some_and(is_register_location_comment)
    }

    /// True when the decl is a synthetic carrier (raw machine location / printer
    /// temporary) rather than a recovered source-variable claim, so it does not
    /// belong in the source-recovery precision denominator. The printer's own
    /// annotation is the signal:
    ///
    /// - `// temp` is emitted only for `SpaceId::Unique` temporaries and `cond`/
    ///   `vN` scaffolding — never for a DWARF/stack source local — so it marks a
    ///   synthetic temporary regardless of name.
    /// - a register (`// rax`) or CPU-flag (`// ZF`) location hint on a
    ///   *synthetic* name (`vN`/`cN`/`aN`, `saved_<reg>`, `result`, `cond`).
    ///
    /// A real recovered local that carries a register hint (`counter // rax`)
    /// is NOT a carrier — the synthetic-name requirement preserves it. Carriers
    /// stay fully visible in the leaked-temp ledger; they are only removed from
    /// the precision denominator.
    fn is_non_source_carrier(&self) -> bool {
        let comment = self.comment.as_deref().map(str::trim);
        // `// temp` is universally a synthetic temporary marker.
        if comment == Some("temp") {
            return true;
        }
        let synthetic_name = is_synthetic_local_name(&self.name);
        match comment {
            Some(c) if is_cpu_flag_comment(c) => synthetic_name,
            Some(c) => {
                let reg = c.trim_end_matches(|ch: char| ch == '_' || ch.is_ascii_digit());
                synthetic_name
                    && (is_register_location_comment(c) || is_register_location_comment(reg))
            }
            None => false,
        }
    }

    fn is_stack_offset_carrier(&self) -> bool {
        if self
            .comment
            .as_deref()
            .is_some_and(|comment| !comment.trim().is_empty())
        {
            return false;
        }
        self.name
            .strip_prefix("v_")
            .or_else(|| self.name.strip_prefix("a_"))
            .is_some_and(|rest| !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit()))
    }
}

fn local_type_matches(local: &LocalVariable, reported_ty: &str) -> bool {
    local
        .type_name
        .as_deref()
        .is_some_and(|expected| normalize_type(expected) == normalize_type(reported_ty))
}

fn is_cpu_flag_comment(comment: &str) -> bool {
    matches!(
        comment.trim().to_ascii_uppercase().as_str(),
        "ZF" | "SF" | "CF" | "OF" | "PF" | "AF" | "DF" | "TF" | "IF"
    )
}

/// Names the printer generates for non-source entities: generic SSA temps
/// (`vN`/`cN`/`aN`), callee-saved spill slots (`saved_<reg>`), and the
/// return-value/condition placeholders (`result`, `result_N`, `cond`,
/// `cond_N`). None of these appear as source local names in the corpus, so a
/// register/flag hint on them denotes a raw machine carrier, not a recovery.
fn is_synthetic_local_name(name: &str) -> bool {
    if is_generic_reported_lvar_name(name) || name.starts_with("saved_") {
        return true;
    }
    let base = name.trim_end_matches(|ch: char| ch == '_' || ch.is_ascii_digit());
    matches!(base, "result" | "cond")
}

/// A printer-synthesized composite (`struct __anon0`, `__unnamed3`): an
/// offset-named aggregate the decompiler inferred from stack/memory layout when
/// it could not attribute the bytes to a named source type. Like register/temp
/// carriers, it is not a source-type *recovery claim*, so its members do not
/// belong in the field-recovery precision denominator (real DWARF/source structs
/// — `Cat`, `_IO_FILE` — keep their real names and still count).
fn is_synthetic_composite_name(name: &str) -> bool {
    name.starts_with("__anon") || name.starts_with("__unnamed")
}

/// A printer-synthesized field placeholder (`field_0`, `field_24`): the
/// offset-based name for a member the decompiler could not recover a source
/// field name for. Not a source-field claim.
fn is_synthetic_field_name(name: &str) -> bool {
    name.strip_prefix("field_")
        .is_some_and(|rest| !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit()))
}

fn is_register_location_comment(comment: &str) -> bool {
    let reg = comment.trim().trim_start_matches('$').to_ascii_lowercase();
    if matches!(
        reg.as_str(),
        "ah" | "al"
            | "ax"
            | "bh"
            | "bl"
            | "bp"
            | "bpl"
            | "bx"
            | "ch"
            | "cl"
            | "cs"
            | "cx"
            | "dh"
            | "di"
            | "dil"
            | "dl"
            | "ds"
            | "dx"
            | "eax"
            | "ebp"
            | "ebx"
            | "ecx"
            | "edi"
            | "edx"
            | "eip"
            | "esi"
            | "esp"
            | "es"
            | "fs"
            | "gs"
            | "ip"
            | "pc"
            | "rax"
            | "rbp"
            | "rbx"
            | "rcx"
            | "rdi"
            | "rdx"
            | "rip"
            | "rsi"
            | "rsp"
            | "si"
            | "sil"
            | "sp"
            | "spl"
            | "ss"
            | "lr"
            | "ctr"
            | "xer"
            | "ca"
            | "xzr"
            | "wzr"
    ) {
        return true;
    }
    is_numbered_register(&reg)
}

fn is_numbered_register(reg: &str) -> bool {
    for prefix in [
        "xmm", "ymm", "zmm", "mm", "st", "cr", "dr", "r", "x", "w", "v", "q", "d", "s", "h", "b",
        "f", "fr", "vr",
    ] {
        let Some(number) = reg.strip_prefix(prefix) else {
            continue;
        };
        if !number.is_empty() && number.bytes().all(|b| b.is_ascii_digit()) {
            return true;
        }
        if prefix == "r" {
            for suffix in ["b", "w", "d"] {
                let Some(number) = number.strip_suffix(suffix) else {
                    continue;
                };
                if !number.is_empty() && number.bytes().all(|b| b.is_ascii_digit()) {
                    return true;
                }
            }
        }
    }
    false
}

fn is_generic_reported_lvar_name(name: &str) -> bool {
    name.strip_prefix('v')
        .or_else(|| name.strip_prefix('c'))
        .or_else(|| name.strip_prefix('a'))
        .is_some_and(|rest| !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit()))
}

fn split_type_and_name(decl: &str) -> (String, Option<String>) {
    let decl = decl.trim();
    if let Some(idx) = decl.rfind(' ') {
        let mut ty = decl[..idx].trim().to_string();
        let raw_name = decl[idx + 1..].trim();
        if raw_name.starts_with('*') {
            ty.push_str(" *");
        } else if raw_name.starts_with('&') {
            ty.push_str(" &");
        }
        if let Some(brackets) = raw_name.find('[').map(|pos| &raw_name[pos..]) {
            ty.push_str(brackets);
        }
        let name = raw_name
            .trim_start_matches('*')
            .trim_start_matches('&')
            .split('[')
            .next()
            .unwrap_or("")
            .trim();
        if is_c_identifier(name) {
            return (ty, Some(name.to_string()));
        }
    }
    (decl.to_string(), None)
}

fn find_matching_paren(text: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (idx, ch) in text.char_indices().skip_while(|(idx, _)| *idx < open) {
        match ch {
            '(' => depth += 1,
            ')' => {
                depth = depth.saturating_sub(1);
                if depth == 0 {
                    return Some(idx);
                }
            }
            _ => {}
        }
    }
    None
}

fn split_top_level_commas(text: &str) -> Vec<&str> {
    let mut parts = Vec::new();
    let mut start = 0usize;
    let mut angle = 0usize;
    let mut paren = 0usize;
    let mut bracket = 0usize;
    let mut brace = 0usize;
    for (idx, ch) in text.char_indices() {
        match ch {
            '<' => angle += 1,
            '>' => angle = angle.saturating_sub(1),
            '(' => paren += 1,
            ')' => paren = paren.saturating_sub(1),
            '[' => bracket += 1,
            ']' => bracket = bracket.saturating_sub(1),
            '{' => brace += 1,
            '}' => brace = brace.saturating_sub(1),
            ',' if angle == 0 && paren == 0 && bracket == 0 && brace == 0 => {
                parts.push(&text[start..idx]);
                start = idx + 1;
            }
            _ => {}
        }
    }
    parts.push(&text[start..]);
    parts
}

fn add_reported_struct_facts(
    output: &str,
    composite_names: &BTreeSet<String>,
    score: &mut TypeScore,
) {
    let mut seen_structs = BTreeSet::new();
    let mut seen_fields = BTreeSet::new();
    let mut current_struct: Option<String> = None;

    for line in output.lines() {
        let trimmed = line.trim();
        if let Some(name) = trimmed
            .strip_prefix("struct ")
            .and_then(|rest| rest.strip_suffix('{').map(str::trim))
        {
            // Synthetic offset-named aggregates (`__anon0`) are not source-type
            // recovery claims — exclude them and their members from the
            // precision denominator, parallel to register/temp local carriers.
            if is_synthetic_composite_name(name) {
                current_struct = None;
                continue;
            }
            if seen_structs.insert(name.to_string()) {
                score.struct_names.add_reported(1);
            }
            current_struct = Some(name.to_string());
            continue;
        }
        if trimmed == "};" {
            current_struct = None;
            continue;
        }
        let Some(struct_name) = current_struct.as_deref() else {
            continue;
        };
        let Some(decl) = parse_local_decl(trimmed) else {
            continue;
        };
        let field_name = trimmed
            .trim_end_matches(';')
            .split_whitespace()
            .last()
            .unwrap_or("")
            .trim_start_matches('*')
            .split('[')
            .next()
            .unwrap_or("");
        // A `field_N` placeholder is the printer's offset-based name for an
        // unrecovered member — not a source-field claim.
        if is_synthetic_field_name(field_name) {
            continue;
        }
        if seen_fields.insert((struct_name.to_string(), field_name.to_string())) {
            score.field_names.add_reported(1);
            score.field_types.add_reported(1);
            add_reported_type_shapes(score, &decl.ty, composite_names);
        }
    }
}

fn type_and_name_appear(text: &str, type_name: &str, name: Option<&str>) -> bool {
    let normalized_text = normalize_type(text);
    let normalized_type = normalize_type(type_name);
    if normalized_text.contains(&normalized_type)
        && name.is_none_or(|name| word_contains(text, name))
    {
        return true;
    }
    if let Some(name) = name
        && let Some(array_decl) = array_decl_pattern(type_name, name)
    {
        return normalized_text.contains(&normalize_type(&array_decl));
    }
    false
}

fn array_decl_pattern(type_name: &str, name: &str) -> Option<String> {
    let (base_end, suffix) = split_type_array_suffix(type_name);
    if suffix.is_empty() {
        return None;
    }
    let base = type_name.get(..base_end)?.trim();
    Some(format!("{base} {name}{suffix}"))
}

fn field_name_appears(output: &str, field: &StructField) -> bool {
    output.contains(&format!(".{}", field.name))
        || output.contains(&format!("->{}", field.name))
        || word_contains(output, &field.name)
}

fn normalize_type(value: &str) -> String {
    let mut normalized = value
        .replace("__int64", "long")
        .replace("_QWORD", "unsigned long")
        .replace("_DWORD", "unsigned")
        .replace("_WORD", "unsigned short")
        .replace("_BYTE", "unsigned char")
        .replace("_BOOL", "bool")
        .replace("uint64_t", "unsigned long")
        .replace("int64_t", "long")
        .replace("uint32_t", "unsigned")
        .replace("int32_t", "int")
        .replace("uint16_t", "unsigned short")
        .replace("int16_t", "short")
        .replace("uint8_t", "unsigned char")
        .replace("int8_t", "char")
        .replace("size_t", "unsigned long")
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("typedef ", "")
        .replace("_Noreturn ", "")
        .replace("__noreturn ", "")
        .replace("__aapcs ", "")
        .replace("__thiscall ", "")
        .replace("__cdecl ", "")
        .replace("__fastcall ", "")
        .replace("__stdcall ", "")
        .replace("__usercall ", "")
        .replace("__userpurge ", "")
        .replace("signed int", "int")
        .replace("long int", "long")
        .replace("unsigned int", "unsigned")
        .replace("struct ", "")
        .replace(" *", "*")
        .replace("* ", "*");
    normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    normalized.trim().to_string()
}

fn split_type_array_suffix(type_name: &str) -> (usize, String) {
    let trimmed_end = type_name.trim_end().len();
    let mut end = trimmed_end;
    let mut suffixes = Vec::new();
    loop {
        let head = &type_name[..end];
        let Some(close_rel) = head.rfind(']') else {
            break;
        };
        if close_rel + 1 != end {
            break;
        }
        let Some(open_rel) = head[..close_rel].rfind('[') else {
            break;
        };
        suffixes.push(type_name[open_rel..=close_rel].to_string());
        end = type_name[..open_rel].trim_end().len();
    }
    suffixes.reverse();
    (end, suffixes.join(""))
}

fn word_contains(haystack: &str, needle: &str) -> bool {
    if needle.is_empty() {
        return false;
    }
    let mut search_from = 0usize;
    while let Some(pos) = haystack[search_from..].find(needle) {
        let start = search_from + pos;
        let end = start + needle.len();
        let before = haystack[..start].chars().next_back();
        let after = haystack[end..].chars().next();
        if before.is_none_or(|c| !is_ident_char(c)) && after.is_none_or(|c| !is_ident_char(c)) {
            return true;
        }
        search_from = end;
    }
    false
}

fn is_ident_char(ch: char) -> bool {
    ch == '_' || ch.is_ascii_alphanumeric()
}

fn is_c_identifier(name: &str) -> bool {
    let mut chars = name.chars();
    let Some(first) = chars.next() else {
        return false;
    };
    (first == '_' || first.is_ascii_alphabetic()) && chars.all(is_ident_char)
}

fn optimization_level(flags: &str) -> &str {
    if flags.contains("-O0") {
        "-O0"
    } else if flags.contains("-O1") {
        "-O1"
    } else if flags.contains("-O2") {
        "-O2"
    } else if flags.contains("-O3") {
        "-O3"
    } else {
        "unknown"
    }
}

fn println_score(label: &str, score: &TypeScore) {
    println!(
        "[type-recovery] SCORE {} fixtures={} functions={} c_functions={} cpp_functions={} recovered={} expected={} reported={} recall={:.1}% precision={:.1}% leaked_temp_decls={} source_oracle_only={}/{} raw={}/{} raw_recall={:.1}% returns={}/{} param_names={}/{} param_types={}/{} local_names={}/{} local_types={}/{} structs={}/{} field_names={}/{} field_types={}/{} pointer_types={}/{} array_types={}/{} struct_refs={}/{}",
        label,
        score.fixtures,
        score.functions,
        score.c_functions,
        score.cpp_functions,
        score.recovered(),
        score.expected(),
        score.reported(),
        score.percent(),
        score.precision(),
        score.leaked_temp_decls,
        score.source_oracle_only_recovered(),
        score.source_oracle_only_expected(),
        score.raw_recovered(),
        score.raw_expected(),
        score.raw_percent(),
        score.return_types.recovered,
        score.return_types.expected,
        score.param_names.recovered,
        score.param_names.expected,
        score.param_types.recovered,
        score.param_types.expected,
        score.local_names.recovered,
        score.local_names.expected,
        score.local_types.recovered,
        score.local_types.expected,
        score.struct_names.recovered,
        score.struct_names.expected,
        score.field_names.recovered,
        score.field_names.expected,
        score.field_types.recovered,
        score.field_types.expected,
        score.pointer_types.recovered,
        score.pointer_types.expected,
        score.array_types.recovered,
        score.array_types.expected,
        score.struct_ref_types.recovered,
        score.struct_ref_types.expected,
    );
    let excess: Vec<String> = score
        .categories()
        .iter()
        .filter_map(|(name, counter)| {
            let rep = counter.precision_denominator();
            let over = rep.saturating_sub(counter.recovered);
            (over > 0).then(|| format!("{name}=+{over}(rec={},rep={rep})", counter.recovered))
        })
        .collect();
    if !excess.is_empty() {
        println!("[type-recovery] EXCESS {label} {}", excess.join(" "));
    }
}

/// Per-category precision-excess ledger. Precision = recovered / reported, and
/// recall is ~100%, so the entire precision gap is `reported - recovered`
/// summed across categories. This pins which fact category dominates the gap so
/// cleanup targets real causes instead of guessing.
fn print_precision_ledger(score: &TypeScore) {
    println!();
    println!("type-recovery-report: precision excess ledger (reported - recovered, sorted)");
    let mut cats: Vec<(&str, usize, usize, usize)> = score
        .categories()
        .iter()
        .map(|(name, counter)| {
            let rep = counter.precision_denominator();
            (
                *name,
                counter.recovered,
                rep,
                rep.saturating_sub(counter.recovered),
            )
        })
        .collect();
    cats.sort_by(|a, b| b.3.cmp(&a.3).then_with(|| a.0.cmp(b.0)));
    let total_excess: usize = cats.iter().map(|(_, _, _, e)| e).sum();
    for (name, rec, rep, excess) in &cats {
        if *rep == 0 {
            continue;
        }
        println!("  {excess:>5} excess  {name:<16} recovered={rec} reported={rep}");
    }
    println!("  {total_excess:>5} excess  TOTAL");
}

fn print_output_debt_ledger(score: &TypeScore) {
    println!();
    println!("type-recovery-report: output-local debt ledger (not source precision)");
    println!("  {:>5}  leaked temp declarations", score.leaked_temp_decls);
    println!(
        "  {:>5}  stack/ABI local carriers excluded from source precision",
        score.stack_carrier_decls
    );
    println!(
        "  {:>5}  ABI parameter carriers excluded from source precision",
        score.abi_param_carriers
    );
    println!(
        "  {:>5}  duplicate DWARF/source local declarations deduplicated",
        score.duplicate_source_local_decls
    );
}

/// Classifies every counted local decl by (name pattern × printer comment tag)
/// so the local-decl precision excess (~76% of the gap) is split into concrete,
/// actionable buckets: synthetic carriers the printer marks (`// temp`,
/// `// <flag>`), stack-offset slots (`v_NN`), and genuinely-named locals.
fn print_reported_local_ledger(score: &TypeScore) {
    println!();
    println!("type-recovery-report: reported local-decl classes (precision denominator)");
    // (count, samples, matched_dwarf_count) per (name_class, comment_class).
    let mut by_class: BTreeMap<(&str, &str), (usize, Vec<String>, usize)> = BTreeMap::new();
    let mut total_matched = 0usize;
    for site in &score.reported_local_sites {
        let entry = by_class
            .entry((site.name_class(), site.comment_class()))
            .or_default();
        entry.0 += 1;
        if entry.1.len() < 6 {
            entry
                .1
                .push(format!("{}::{}={}", site.fixture, site.function, site.name));
        }
        if site.matched_dwarf {
            entry.2 += 1;
            total_matched += 1;
        }
    }
    let mut rows: Vec<_> = by_class.into_iter().collect();
    rows.sort_by_key(|row| std::cmp::Reverse(row.1.0));
    for ((name_class, comment_class), (count, samples, matched)) in &rows {
        let excess = count - matched;
        println!(
            "  {count:>5}  name={name_class:<18} comment={comment_class:<14} matched-dwarf={matched:<4} excess={excess}"
        );
        println!("         e.g. {}", samples.join(", "));
    }
    let total = score.reported_local_sites.len();
    println!(
        "  {total:>5}  TOTAL counted local decls (matched-dwarf={total_matched} excess={})",
        total - total_matched
    );
    // Rank-0 headline: the matched-vs-excess split decides the next lever —
    // matched-dwarf decls are correct recoveries inflating the denominator
    // (rank-1 metric-scoping), excess decls are genuine leaks (rank-2 coalescing).
    println!(
        "  rank-0 split: {} of {} counted local decls are CORRECT DWARF recoveries (metric-scoping candidates); {} are genuine excess (coalescing candidates)",
        total_matched,
        total,
        total - total_matched
    );
}

fn ranked_leaked_temp_sites(score: &TypeScore) -> Vec<(&TempLeakSite, usize)> {
    let mut sites: Vec<(&TempLeakSite, usize)> = score
        .leaked_temp_sites
        .iter()
        .map(|(site, count)| (site, *count))
        .collect();
    sites.sort_by(|(a_site, a_count), (b_site, b_count)| {
        b_count
            .cmp(a_count)
            .then_with(|| a_site.fixture.cmp(&b_site.fixture))
            .then_with(|| a_site.function.cmp(&b_site.function))
            .then_with(|| a_site.name.cmp(&b_site.name))
            .then_with(|| a_site.ty.cmp(&b_site.ty))
    });
    sites
}

fn print_leaked_temp_summary(score: &TypeScore, limit: usize) {
    println!();
    println!("type-recovery-report: leaked-temp declaration hot spots");
    if score.leaked_temp_sites.is_empty() {
        println!("  (none)");
        return;
    }
    println!("  -- by function --");
    for (fixture, function, count) in ranked_leaked_temp_functions(score).into_iter().take(limit) {
        println!("  {count:>4} {fixture}::{function}");
    }
    println!("  -- by declaration --");
    for (site, count) in ranked_leaked_temp_sites(score).into_iter().take(limit) {
        println!(
            "  {:>4} {}::{} type={} name={}",
            count, site.fixture, site.function, site.ty, site.name
        );
    }
}

fn ranked_leaked_temp_functions(score: &TypeScore) -> Vec<(&str, &str, usize)> {
    let mut counts: BTreeMap<(&str, &str), usize> = BTreeMap::new();
    for (site, count) in &score.leaked_temp_sites {
        *counts
            .entry((site.fixture.as_str(), site.function.as_str()))
            .or_default() += count;
    }
    let mut out: Vec<(&str, &str, usize)> = counts
        .into_iter()
        .map(|((fixture, function), count)| (fixture, function, count))
        .collect();
    out.sort_by(
        |(a_fixture, a_function, a_count), (b_fixture, b_function, b_count)| {
            b_count
                .cmp(a_count)
                .then_with(|| a_fixture.cmp(b_fixture))
                .then_with(|| a_function.cmp(b_function))
        },
    );
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn synthetic_register_temps_require_generic_name_and_register_comment() {
        assert!(
            ReportedDecl {
                ty: "__int64".to_string(),
                name: "v50".to_string(),
                comment: Some("rax".to_string()),
            }
            .is_synthetic_register_temp()
        );
        assert!(
            ReportedDecl {
                ty: "int".to_string(),
                name: "c3".to_string(),
                comment: Some("r8d".to_string()),
            }
            .is_synthetic_register_temp()
        );
        assert!(
            !ReportedDecl {
                ty: "int".to_string(),
                name: "v9".to_string(),
                comment: Some("temp".to_string()),
            }
            .is_synthetic_register_temp()
        );
        assert!(
            !ReportedDecl {
                ty: "int".to_string(),
                name: "counter".to_string(),
                comment: Some("rax".to_string()),
            }
            .is_synthetic_register_temp()
        );
    }

    fn decl(ty: &str, name: &str, comment: Option<&str>) -> ReportedDecl {
        ReportedDecl {
            ty: ty.to_string(),
            name: name.to_string(),
            comment: comment.map(str::to_string),
        }
    }

    #[test]
    fn synthetic_composites_and_fields_are_classified() {
        // Printer-synthesized aggregates / offset-named members are excluded.
        assert!(is_synthetic_composite_name("__anon0"));
        assert!(is_synthetic_composite_name("__unnamed3"));
        assert!(is_synthetic_field_name("field_0"));
        assert!(is_synthetic_field_name("field_24"));
        // Real DWARF/source structs and named fields still count.
        assert!(!is_synthetic_composite_name("Cat"));
        assert!(!is_synthetic_composite_name("_IO_FILE"));
        assert!(!is_synthetic_field_name("count"));
        assert!(!is_synthetic_field_name("field_")); // no digits → not synthetic
        assert!(!is_synthetic_field_name("fieldwork"));
    }

    #[test]
    fn non_source_carriers_cover_register_flag_temp_and_saved_slots() {
        // Register/flag hints on synthetic names are carriers.
        assert!(decl("__int64", "v50", Some("rax")).is_non_source_carrier());
        assert!(decl("char", "c8", Some("ZF")).is_non_source_carrier());
        assert!(decl("char", "c6", Some("CF")).is_non_source_carrier());
        // `// temp` is synthetic regardless of name (no source local is so named).
        assert!(decl("int", "v9", Some("temp")).is_non_source_carrier());
        assert!(decl("__int64", "result", Some("temp")).is_non_source_carrier());
        assert!(decl("int", "cond_6", Some("temp")).is_non_source_carrier());
        // Callee-saved spill slots and the synthetic return-value placeholder.
        assert!(decl("__int64", "saved_rbx", Some("rbx")).is_non_source_carrier());
        assert!(decl("__int64", "saved_rbx_1", Some("rbx")).is_non_source_carrier());
        assert!(decl("__int64", "result", Some("rax")).is_non_source_carrier());
    }

    #[test]
    fn non_source_carriers_preserve_real_recovered_locals() {
        // A real recovered local with a register hint must still count.
        assert!(!decl("int", "counter", Some("rax")).is_non_source_carrier());
        assert!(!decl("int", "steps", None).is_non_source_carrier());
        assert!(!decl("__int64", "v_84", None).is_non_source_carrier());
        assert!(decl("__int64", "v_84", None).is_stack_offset_carrier());
        // An unknown comment is not a synthetic marker.
        assert!(!decl("int", "buf", Some("array")).is_non_source_carrier());
    }

    #[test]
    fn reported_source_locals_are_deduped_and_stack_carriers_are_separate() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "f".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: None,
            decl: None,
            locals: vec![LocalVariable {
                name: "steps".to_string(),
                type_name: Some("int".to_string()),
                frame_offset: Some(-4),
                locations: Vec::new(),
                locations_dwarf_v5: Vec::new(),
            }],
            cfa_to_rbp_delta: None,
        };
        let trace = TypeTrace::disabled();
        let policy = ScoringPolicy::for_test(TruthKind::Dwarf, &trace);
        let mut score = TypeScore::default();
        let text = "void f() {\n    int steps;\n    int steps;\n    __int64 v_8;\n}\n";

        add_reported_function_facts(
            "fx",
            &function,
            text,
            Some("void f()"),
            &BTreeSet::new(),
            &mut score,
            &policy,
            &trace,
        );

        assert_eq!(score.local_names.reported, 1);
        assert_eq!(score.local_types.reported, 1);
        assert_eq!(score.duplicate_source_local_decls, 1);
        assert_eq!(score.stack_carrier_decls, 1);
    }

    #[test]
    fn reported_abi_params_without_ground_truth_are_separate() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "f".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: None,
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };
        let trace = TypeTrace::disabled();
        let policy = ScoringPolicy::for_test(TruthKind::Dwarf, &trace);
        let mut score = TypeScore::default();

        add_reported_function_facts(
            "fx",
            &function,
            "int f(int a1) {\n}\n",
            Some("int f(int a1)"),
            &BTreeSet::new(),
            &mut score,
            &policy,
            &trace,
        );

        assert_eq!(score.param_types.reported, 0);
        assert_eq!(score.abi_param_carriers, 1);
    }

    #[test]
    fn reported_facts_route_source_oracle_only_out_of_recoverable_precision() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "f".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: None,
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };
        let composite = BTreeSet::new();
        let trace = TypeTrace::disabled();
        let text = "void f() {\n    __int64 v_8;\n    __int64 v50; // rax\n    char c8; // ZF\n}\n";

        let dwarf = ScoringPolicy::for_test(TruthKind::Dwarf, &trace);
        let mut dwarf_score = TypeScore::default();
        add_reported_function_facts(
            "fx",
            &function,
            text,
            Some("void f()"),
            &composite,
            &mut dwarf_score,
            &dwarf,
            &trace,
        );
        assert_eq!(
            dwarf_score.local_names.reported, 0,
            "v_8 is output-local debt, not a source fact"
        );
        assert_eq!(dwarf_score.stack_carrier_decls, 1);
        assert_eq!(dwarf_score.local_names.source_oracle_only_reported, 0);

        let parsed = ScoringPolicy::for_test(TruthKind::ParsedSource, &trace);
        let mut parsed_score = TypeScore::default();
        add_reported_function_facts(
            "fx",
            &function,
            text,
            Some("void f()"),
            &composite,
            &mut parsed_score,
            &parsed,
            &trace,
        );
        assert_eq!(parsed_score.local_names.reported, 0, "source-oracle-only");
        assert_eq!(parsed_score.local_names.source_oracle_only_reported, 0);
        assert_eq!(parsed_score.stack_carrier_decls, 1);
    }

    #[test]
    fn c_identifier_filter_rejects_demangled_cpp_names() {
        assert!(is_c_identifier("main"));
        assert!(is_c_identifier("_start"));
        assert!(!is_c_identifier("make_box(int)"));
        assert!(!is_c_identifier("Dog::speak"));
    }

    #[test]
    fn signature_return_matching_ignores_noreturn_annotations() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "main".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: Some("int".to_string()),
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };
        assert!(signature_return_matches(
            "int __noreturn main(void)",
            &function,
            "int"
        ));
        assert!(signature_return_matches(
            "_Noreturn int main(void)",
            &function,
            "int"
        ));
    }

    #[test]
    fn cpp_signature_candidates_match_demangled_template_names() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "addT<int>(int, int)".to_string(),
            linkage_name: Some("_Z4addTIiET_S0_S0_".to_string()),
            low_pc: 0x401240,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: Some("int".to_string()),
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };
        let text = "int addT<int>(int a, int b) {";
        assert_eq!(
            signature_line_for_function(text, &function).as_deref(),
            Some("int addT<int>(int a, int b)")
        );
    }

    #[test]
    fn signature_param_type_matching_uses_parameter_position() {
        let function = FunctionDebugInfo {
            variadic: false,
            name: "sum".to_string(),
            linkage_name: None,
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: vec![
                ParameterInfo {
                    name: Some("len".to_string()),
                    type_name: Some("int".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
                ParameterInfo {
                    name: Some("values".to_string()),
                    type_name: Some("long *".to_string()),
                    pointee_size: None,
                    frame_offset: None,
                },
            ],
            return_type: Some("int".to_string()),
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };

        let signature = "int sum(int a1, __int64 *a2)";
        assert!(signature_param_type_matches(signature, &function, 0, "int"));
        assert!(signature_param_type_matches(
            signature, &function, 1, "long *"
        ));
    }

    #[test]
    fn type_fact_classifier_tracks_pointer_array_and_struct_refs() {
        let mut composites = BTreeSet::new();
        composites.insert("Pair".to_string());
        let facts = classify_type_facts("const Pair *[3]", &composites);
        assert!(facts.pointer);
        assert!(facts.array);
        assert!(facts.struct_ref);
    }

    #[test]
    fn leaked_temp_sites_merge_and_rank_by_count() {
        let mut left = TypeScore::default();
        left.record_leaked_temp("medium", "main", "int", "v1");
        left.record_leaked_temp("medium", "main", "int", "v1");

        let mut right = TypeScore::default();
        right.record_leaked_temp("debug_medium", "helper", "__int64", "v2");
        right.record_leaked_temp("debug_medium", "helper", "__int64", "v2");
        right.record_leaked_temp("debug_medium", "helper", "__int64", "v2");

        left.merge(&right);

        let ranked = ranked_leaked_temp_sites(&left);
        assert_eq!(left.leaked_temp_decls, 5);
        assert_eq!(ranked[0].0.fixture, "debug_medium");
        assert_eq!(ranked[0].0.function, "helper");
        assert_eq!(ranked[0].0.name, "v2");
        assert_eq!(ranked[0].1, 3);
        assert_eq!(ranked[1].0.fixture, "medium");
        assert_eq!(ranked[1].1, 2);

        let functions = ranked_leaked_temp_functions(&left);
        assert_eq!(functions[0], ("debug_medium", "helper", 3));
        assert_eq!(functions[1], ("medium", "main", 2));
    }

    #[test]
    fn array_type_matching_accepts_c_declarator_suffix_form() {
        assert!(type_and_name_appear(
            "    //   int values[3];",
            "int[3]",
            Some("values")
        ));
        assert!(type_and_name_appear(
            "    __int64 data[4];",
            "long int[4]",
            Some("data")
        ));
    }

    #[test]
    fn reported_local_decl_preserves_name_for_leaked_temp_counting() {
        let decl = parse_local_decl("__int64 v12;").expect("local decl");
        assert_eq!(decl.ty, "__int64");
        assert_eq!(decl.name, "v12");
        assert!(is_generic_reported_lvar_name(&decl.name));
        assert!(!is_generic_reported_lvar_name("value12"));
    }

    #[test]
    fn source_oracle_only_facts_do_not_reduce_recoverable_recall() {
        let mut score = TypeScore::default();
        FactScope::Recoverable.add_expected(&mut score.return_types, true);
        FactScope::SourceOracleOnly("source-only").add_expected(&mut score.local_names, false);

        assert_eq!(score.recovered(), 1);
        assert_eq!(score.expected(), 1);
        assert_eq!(score.source_oracle_only_recovered(), 0);
        assert_eq!(score.source_oracle_only_expected(), 1);
        assert_eq!(score.raw_recovered(), 1);
        assert_eq!(score.raw_expected(), 2);
    }

    #[test]
    fn parsed_source_policy_keeps_this_but_excludes_exact_source_names() {
        let trace = TypeTrace {
            enabled: false,
            verbose: false,
            filter: None,
            fixture_filter: None,
        };
        let policy = ScoringPolicy {
            truth_kind: TruthKind::ParsedSource,
            binary_evidence: BinaryEvidence {
                text: "_Z8use_baseP4Base".to_string(),
            },
            trace: &trace,
        };
        let method = FunctionDebugInfo {
            variadic: false,
            name: "Base_value".to_string(),
            linkage_name: Some("Base::value".to_string()),
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: None,
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };
        let free_function = FunctionDebugInfo {
            variadic: false,
            name: "use_base".to_string(),
            linkage_name: Some("_Z8use_baseP4Base".to_string()),
            low_pc: 0,
            high_pc: None,
            ranges: Vec::new(),
            params: Vec::new(),
            return_type: None,
            decl: None,
            locals: Vec::new(),
            cfa_to_rbp_delta: None,
        };

        assert_eq!(
            policy.exact_param_name_scope(&method, "this"),
            FactScope::Recoverable
        );
        assert!(matches!(
            policy.exact_param_name_scope(&free_function, "b"),
            FactScope::SourceOracleOnly(_)
        ));
        assert_eq!(policy.struct_name_scope("Base"), FactScope::Recoverable);
        assert!(matches!(
            policy.struct_name_scope("Derived"),
            FactScope::SourceOracleOnly(_)
        ));
    }

    #[test]
    fn function_banner_matching_requires_exact_function_name() {
        let text = "/* Function:   sub_1080 | Address: 0x1080 */\nvoid sub_1080(void) {}";
        assert!(function_banner_matches(text, "sub_1080"));
        assert!(!function_banner_matches(text, "sub"));

        let text = "/* Function:   f_rec_power_constprop_0 | Address: 0x1190 */";
        assert!(function_banner_matches(text, "f_rec_power_constprop_0"));
        assert!(!function_banner_matches(text, "f_rec_power"));
    }

    #[test]
    fn parsed_c_source_extracts_functions_locals_and_structs() {
        let truth = parse_c_like_source_truth(
            r#"
            #include <stdint.h>
            struct Pair { int left; int right; };
            static int32_t score(struct Pair *p, int bias) {
                int32_t sum = p->left + p->right;
                int values[3] = {1, 2, 3};
                return sum - bias + values[0];
            }
            "#,
            false,
        );
        assert!(truth.structs.contains_key("Pair"));
        let function = truth
            .functions
            .values()
            .find(|function| function.name == "score")
            .expect("score function");
        assert_eq!(function.return_type.as_deref(), Some("int32_t"));
        assert_eq!(function.params.len(), 2);
        assert!(
            function
                .locals
                .iter()
                .any(|local| local.name == "values" && local.type_name.as_deref() == Some("int[3]")),
            "{:?}",
            function.locals
        );
    }

    #[test]
    fn parsed_non_host_sources_extract_function_signatures() {
        let asm = ".global _start\n.global mul_test\n_start:\n  ret\nmul_test:\n  ret\n";
        let truth = parse_assembly_source_truth(asm);
        assert_eq!(truth.functions.len(), 2);
        assert!(
            truth
                .functions
                .values()
                .all(|function| function.return_type.as_deref() == Some("void"))
        );

        let py = "functions = {\n    \"_start\": (0, 4),\n    \"logic_test\": (4, 8),\n}\n";
        let truth = parse_python_generated_source_truth(py);
        assert!(truth.functions.values().any(|f| f.name == "logic_test"));
    }

    #[test]
    fn parsed_cpp_source_extracts_inline_methods() {
        let truth = parse_c_like_source_truth(
            r#"
            struct Dog {
                const char* speak() override { return "woof"; }
            };
            "#,
            true,
        );
        let method = truth
            .functions
            .values()
            .find(|function| function.name == "Dog_speak")
            .expect("Dog_speak method");
        assert_eq!(method.linkage_name.as_deref(), Some("Dog::speak"));
        assert_eq!(method.params[0].name.as_deref(), Some("this"));
        assert!(is_cpp_function(method));
    }

    #[test]
    fn word_contains_uses_identifier_boundaries() {
        assert!(word_contains("int value = 1;", "value"));
        assert!(!word_contains("int my_value = 1;", "value"));
    }
}
