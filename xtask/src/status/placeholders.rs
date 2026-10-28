//! Placeholder and dead-code counts: the honest to-do list for lifters.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use super::source::{Crate, Token};

/// Placeholder kinds a lifter emits instead of real semantics.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Placeholder {
    /// `IrOp::Unimplemented`
    Unimplemented,
    /// `LiftError::Unsupported`
    Unsupported,
    /// `IrOp::Callother` (an opaque intrinsic, not lifted semantics)
    Callother,
}

impl Placeholder {
    pub const ALL: [Placeholder; 3] = [
        Placeholder::Unimplemented,
        Placeholder::Unsupported,
        Placeholder::Callother,
    ];

    pub const fn label(self) -> &'static str {
        match self {
            Placeholder::Unimplemented => "IrOp::Unimplemented",
            Placeholder::Unsupported => "LiftError::Unsupported",
            Placeholder::Callother => "IrOp::Callother",
        }
    }

    fn path(self) -> (&'static str, &'static str) {
        match self {
            Placeholder::Unimplemented => ("IrOp", "Unimplemented"),
            Placeholder::Unsupported => ("LiftError", "Unsupported"),
            Placeholder::Callother => ("IrOp", "Callother"),
        }
    }
}

/// Placeholder counts of one crate's non-test code, per file.
#[derive(Debug, Default)]
pub struct PlaceholderCounts {
    pub per_file: BTreeMap<PathBuf, BTreeMap<Placeholder, usize>>,
}

impl PlaceholderCounts {
    pub fn total(&self, kind: Placeholder) -> usize {
        self.per_file.values().filter_map(|c| c.get(&kind)).sum()
    }

    /// Files ordered by total placeholder count, largest first.
    pub fn hottest_files(&self, n: usize) -> Vec<(&Path, usize)> {
        let mut files: Vec<(&Path, usize)> = self
            .per_file
            .iter()
            .map(|(path, counts)| (path.as_path(), counts.values().sum()))
            .filter(|&(_, total)| total > 0)
            .collect();
        files.sort_by(|a, b| b.1.cmp(&a.1).then_with(|| a.0.cmp(b.0)));
        files.truncate(n);
        files
    }
}

/// Count placeholders in `krate`, skipping test code and `uncompiled`
/// files no module tree declares.
pub fn placeholder_counts(krate: &Crate, uncompiled: &[PathBuf]) -> PlaceholderCounts {
    let mut counts = PlaceholderCounts::default();
    let compiled = krate
        .files
        .iter()
        .filter(|f| !is_test_file(&f.path) && !uncompiled.contains(&f.path));
    for file in compiled {
        let tokens = non_test_tokens(&file.tokens);
        let mut per_kind = BTreeMap::new();
        for kind in Placeholder::ALL {
            let (ty, variant) = kind.path();
            let n = tokens
                .windows(3)
                .filter(|w| w[0].is_ident(ty) && w[1] == Token::PathSep && w[2].is_ident(variant))
                .count();
            if n > 0 {
                per_kind.insert(kind, n);
            }
        }
        counts.per_file.insert(file.path.clone(), per_kind);
    }
    counts
}

fn is_test_file(path: &Path) -> bool {
    let stem = path
        .file_stem()
        .and_then(|s| s.to_str())
        .unwrap_or_default();
    stem == "tests"
        || stem.ends_with("_tests")
        || path.components().any(|c| c.as_os_str() == "tests")
}

/// Tokens outside `#[cfg(test)]` items.
fn non_test_tokens(tokens: &[Token]) -> Vec<Token> {
    let mut out = Vec::with_capacity(tokens.len());
    let mut i = 0;
    while i < tokens.len() {
        let is_cfg_test = matches!(
            tokens.get(i..i + 7),
            Some([
                Token::Punct('#'),
                Token::Punct('['),
                cfg,
                Token::Punct('('),
                test,
                Token::Punct(')'),
                Token::Punct(']'),
            ]) if cfg.is_ident("cfg") && test.is_ident("test")
        );
        if !is_cfg_test {
            out.push(tokens[i].clone());
            i += 1;
            continue;
        }
        i += 7;
        while i < tokens.len() && !tokens[i].is_punct('{') && !tokens[i].is_punct(';') {
            i += 1;
        }
        if tokens.get(i).is_some_and(|t| t.is_punct('{')) {
            let mut depth = 0usize;
            while i < tokens.len() {
                if tokens[i].is_punct('{') {
                    depth += 1;
                } else if tokens[i].is_punct('}') {
                    depth -= 1;
                    if depth == 0 {
                        break;
                    }
                }
                i += 1;
            }
        }
        i += 1;
    }
    out
}

/// `#[allow(.., dead_code, ..)]` / `#![allow(..)]` attributes in a crate.
pub fn dead_code_allows(krate: &Crate) -> usize {
    krate
        .files
        .iter()
        .map(|file| {
            let t = &file.tokens;
            (0..t.len())
                .filter(|&k| t[k].is_ident("allow") && k > 0 && t[k - 1].is_punct('['))
                .filter(|&k| {
                    t[k + 1..]
                        .iter()
                        .take_while(|tok| !tok.is_punct(')'))
                        .any(|tok| tok.is_ident("dead_code"))
                })
                .count()
        })
        .sum()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::status::source::{SourceFile, lex};

    #[test]
    fn counts_skip_cfg_test_items() {
        let src = "fn f() -> IrOp { IrOp::Unimplemented }\n\
                   #[allow(dead_code)]\n\
                   fn g() -> Result<(), LiftError> { Err(LiftError::Unsupported) }\n\
                   #[cfg(test)]\nmod tests { fn t() { IrOp::Unimplemented; IrOp::Callother; } }\n";
        let krate = Crate {
            name: "unlace-lift-demo".into(),
            dir: PathBuf::from("/ws/demo"),
            files: vec![SourceFile {
                path: PathBuf::from("/ws/demo/src/lib.rs"),
                lines: 5,
                tokens: lex(src),
            }],
        };
        let counts = placeholder_counts(&krate, &[]);
        assert_eq!(counts.total(Placeholder::Unimplemented), 1);
        assert_eq!(counts.total(Placeholder::Unsupported), 1);
        assert_eq!(counts.total(Placeholder::Callother), 0);
        assert_eq!(dead_code_allows(&krate), 1);
    }
}
