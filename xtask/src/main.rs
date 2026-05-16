use std::env;
use std::path::{Path, PathBuf};
use std::process::{self, Command};

mod compare_corpus;
mod compare_golden;
mod validate_corpus;

fn main() {
    let args: Vec<String> = env::args().skip(1).collect();
    match args.first().map(String::as_str) {
        Some("scaffold") => println!("xtask scaffold: not yet implemented"),
        Some("lint-determinism") => lint_determinism(),
        Some("regen-goldens") => regen_goldens(),
        Some("measure-parity") => measure_parity(&args[1..]),
        Some("compare-golden") => {
            let root = workspace_root();
            compare_golden::run(&root);
        }
        Some("compare-corpus") => {
            let root = workspace_root();
            compare_corpus::run(&root);
        }
        Some("validate-corpus-toml") => {
            let root = workspace_root();
            validate_corpus::run(&root);
        }
        Some(cmd) => {
            eprintln!("unknown xtask command: {cmd}");
            process::exit(1);
        }
        None => {
            eprintln!("usage: cargo xtask <command>");
            eprintln!(
                "available commands: scaffold, lint-determinism, regen-goldens, measure-parity, compare-golden, compare-corpus, validate-corpus-toml"
            );
            process::exit(1);
        }
    }
}

fn workspace_root() -> PathBuf {
    if let Ok(dir) = env::var("CARGO_MANIFEST_DIR") {
        if let Some(parent) = Path::new(&dir).parent() {
            return parent.to_path_buf();
        }
    }

    let mut dir = env::current_dir().expect("cannot determine cwd");
    loop {
        let candidate = dir.join("Cargo.toml");
        if candidate.exists() {
            if let Ok(contents) = std::fs::read_to_string(&candidate) {
                if contents.contains("[workspace]") {
                    return dir;
                }
            }
        }
        if !dir.pop() {
            eprintln!("error: could not find workspace root");
            process::exit(1);
        }
    }
}

fn regen_goldens() {
    let root = workspace_root();
    let script = root.join("scripts/select_goldens.py");

    if !script.exists() {
        eprintln!("error: {script:?} not found");
        process::exit(1);
    }

    let status = Command::new("python3")
        .arg(&script)
        .current_dir(&root)
        .status()
        .expect("failed to run python3");

    if !status.success() {
        eprintln!("regen-goldens failed with {status}");
        process::exit(status.code().unwrap_or(1));
    }
}

fn measure_parity(extra_args: &[String]) {
    let root = workspace_root();
    let script = root.join("scripts/measure_parity.py");

    if !script.exists() {
        eprintln!("error: {script:?} not found");
        process::exit(1);
    }

    let mut cmd = Command::new("python3");
    cmd.arg(&script).current_dir(&root);
    for arg in extra_args {
        cmd.arg(arg);
    }

    let status = cmd.status().expect("failed to run python3");

    if !status.success() {
        eprintln!("measure-parity failed with {status}");
        process::exit(status.code().unwrap_or(1));
    }
}

const ENFORCED_CRATES: &[&str] = &[
    "unlace-ir",
    "unlace-passes",
    "unlace-struct",
    "unlace-output",
];

fn is_violation(line: &str) -> bool {
    if line.contains("determinism:allow") {
        return false;
    }

    let trimmed = line.trim();
    if trimmed.starts_with("//") || trimmed.starts_with("/*") || trimmed.starts_with('*') {
        return false;
    }

    contains_word(line, "HashMap") || contains_word(line, "HashSet")
}

/// Word-boundary match for `word` in `line`, ignoring occurrences inside string literals.
fn contains_word(line: &str, word: &str) -> bool {
    let mut search_from = 0;
    while let Some(pos) = line[search_from..].find(word) {
        let abs_pos = search_from + pos;

        let before_ok = abs_pos == 0 || {
            let ch = line.as_bytes()[abs_pos - 1];
            !ch.is_ascii_alphanumeric() && ch != b'_'
        };

        let end = abs_pos + word.len();
        let after_ok = end >= line.len() || {
            let ch = line.as_bytes()[end];
            !ch.is_ascii_alphanumeric() && ch != b'_'
        };

        if before_ok && after_ok {
            // Odd quote-count before match ⇒ inside a string literal.
            let quote_count = line[..abs_pos].chars().filter(|&c| c == '"').count();
            if quote_count % 2 == 0 {
                return true;
            }
        }

        search_from = abs_pos + word.len();
    }
    false
}

fn lint_determinism() {
    let root = workspace_root();
    let mut violations: Vec<String> = Vec::new();

    for krate in ENFORCED_CRATES {
        let src_dir = root.join("crates").join(krate).join("src");
        if !src_dir.exists() {
            eprintln!("warning: {src_dir:?} does not exist, skipping");
            continue;
        }
        walk_rs_files(&src_dir, &mut violations);
    }

    if violations.is_empty() {
        println!("lint-determinism: OK — no HashMap/HashSet in enforced crates");
    } else {
        eprintln!(
            "lint-determinism: FAIL — found {} violation(s):",
            violations.len()
        );
        for v in &violations {
            eprintln!("  {v}");
        }
        eprintln!();
        eprintln!("See docs/determinism.md for the determinism charter.");
        eprintln!("Use `// determinism:allow` on a line to suppress if justified.");
        process::exit(1);
    }
}

fn walk_rs_files(dir: &Path, violations: &mut Vec<String>) {
    let entries = match std::fs::read_dir(dir) {
        Ok(e) => e,
        Err(err) => {
            eprintln!("warning: cannot read {dir:?}: {err}");
            return;
        }
    };

    for entry in entries.flatten() {
        let path = entry.path();
        if path.is_dir() {
            walk_rs_files(&path, violations);
        } else if path.extension().is_some_and(|ext| ext == "rs") {
            check_file(&path, violations);
        }
    }
}

fn check_file(path: &Path, violations: &mut Vec<String>) {
    let contents = match std::fs::read_to_string(path) {
        Ok(c) => c,
        Err(err) => {
            eprintln!("warning: cannot read {path:?}: {err}");
            return;
        }
    };

    for (line_num, line) in contents.lines().enumerate() {
        if is_violation(line) {
            violations.push(format!(
                "{}:{}: {}",
                path.display(),
                line_num + 1,
                line.trim()
            ));
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn detects_hashmap_use() {
        assert!(is_violation("use std::collections::HashMap;"));
        assert!(is_violation("let m: HashMap<u32, u32> = HashMap::new();"));
        assert!(is_violation("fn foo() -> HashSet<u32> {"));
    }

    #[test]
    fn skips_comments() {
        assert!(!is_violation("// This uses HashMap internally"));
        assert!(!is_violation("/* HashMap is bad */"));
        assert!(!is_violation("/// See HashMap docs"));
        assert!(!is_violation("* HashMap mention in block comment"));
    }

    #[test]
    fn skips_escape_hatch() {
        assert!(!is_violation(
            "use std::collections::HashMap; // determinism:allow — lookup only"
        ));
    }

    #[test]
    fn skips_string_literals() {
        assert!(!is_violation(r#"let s = "HashMap is not allowed";"#));
        assert!(!is_violation(r#"panic!("found HashMap in code");"#));
    }

    #[test]
    fn word_boundary_check() {
        assert!(!is_violation("let x = MyHashMapper::new();"));
        assert!(!is_violation("fn hash_map_like() {}"));
        assert!(is_violation("type Map = HashMap<K, V>;"));
    }
}
