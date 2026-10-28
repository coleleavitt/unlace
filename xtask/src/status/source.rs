//! Token-level view of the workspace's Rust sources.
//!
//! The status checks only need identifiers, path separators, braces and
//! string contents with comments removed, so this is a small lexer rather
//! than a full parser.

use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Token {
    Ident(String),
    Str(String),
    PathSep,
    Punct(char),
}

impl Token {
    pub fn is_ident(&self, name: &str) -> bool {
        matches!(self, Token::Ident(ident) if ident == name)
    }

    pub fn is_punct(&self, c: char) -> bool {
        matches!(self, Token::Punct(p) if *p == c)
    }
}

/// Lex Rust source into [`Token`]s, dropping comments, whitespace,
/// numbers, char literals and lifetimes.
pub fn lex(src: &str) -> Vec<Token> {
    let chars: Vec<char> = src.chars().collect();
    let mut tokens = Vec::new();
    let mut i = 0;
    while i < chars.len() {
        let c = chars[i];
        let next = chars.get(i + 1).copied();
        if c.is_whitespace() {
            i += 1;
        } else if c == '/' && next == Some('/') {
            while i < chars.len() && chars[i] != '\n' {
                i += 1;
            }
        } else if c == '/' && next == Some('*') {
            i = skip_block_comment(&chars, i);
        } else if c == '"' {
            let (text, end) = lex_str(&chars, i + 1);
            tokens.push(Token::Str(text));
            i = end;
        } else if let Some((text, end)) = lex_raw_str(&chars, i) {
            tokens.push(Token::Str(text));
            i = end;
        } else if c == 'b' && next == Some('"') {
            let (text, end) = lex_str(&chars, i + 2);
            tokens.push(Token::Str(text));
            i = end;
        } else if c == '\'' {
            i = skip_char_or_lifetime(&chars, i);
        } else if c.is_alphabetic() || c == '_' {
            let start = i;
            while i < chars.len() && (chars[i].is_alphanumeric() || chars[i] == '_') {
                i += 1;
            }
            let ident: String = chars[start..i].iter().collect();
            if ident == "r" && chars.get(i) == Some(&'#') {
                i += 1;
                continue;
            }
            tokens.push(Token::Ident(ident));
        } else if c.is_ascii_digit() {
            while i < chars.len() && (chars[i].is_alphanumeric() || chars[i] == '_') {
                i += 1;
            }
        } else if c == ':' && next == Some(':') {
            tokens.push(Token::PathSep);
            i += 2;
        } else {
            tokens.push(Token::Punct(c));
            i += 1;
        }
    }
    tokens
}

fn skip_block_comment(chars: &[char], mut i: usize) -> usize {
    let mut depth = 0usize;
    while i < chars.len() {
        if chars[i] == '/' && chars.get(i + 1) == Some(&'*') {
            depth += 1;
            i += 2;
        } else if chars[i] == '*' && chars.get(i + 1) == Some(&'/') {
            depth -= 1;
            i += 2;
            if depth == 0 {
                break;
            }
        } else {
            i += 1;
        }
    }
    i
}

fn lex_str(chars: &[char], mut i: usize) -> (String, usize) {
    let mut text = String::new();
    while i < chars.len() && chars[i] != '"' {
        if chars[i] == '\\' {
            i += 1;
        }
        if let Some(&c) = chars.get(i) {
            text.push(c);
        }
        i += 1;
    }
    (text, i + 1)
}

/// `r"..."`, `r#"..."#`, `br#"..."#`.
fn lex_raw_str(chars: &[char], i: usize) -> Option<(String, usize)> {
    let mut j = i;
    if chars.get(j) == Some(&'b') {
        j += 1;
    }
    if chars.get(j) != Some(&'r') {
        return None;
    }
    j += 1;
    let hashes = chars[j..].iter().take_while(|&&c| c == '#').count();
    j += hashes;
    if chars.get(j) != Some(&'"') {
        return None;
    }
    j += 1;
    let start = j;
    while j < chars.len() {
        if chars[j] == '"'
            && chars[j + 1..]
                .iter()
                .take(hashes)
                .filter(|&&c| c == '#')
                .count()
                == hashes
        {
            let text = chars[start..j].iter().collect();
            return Some((text, j + 1 + hashes));
        }
        j += 1;
    }
    Some((chars[start..].iter().collect(), chars.len()))
}

fn skip_char_or_lifetime(chars: &[char], i: usize) -> usize {
    if chars.get(i + 1) == Some(&'\\') {
        let mut j = i + 2;
        while j < chars.len() && chars[j] != '\'' {
            j += 1;
        }
        return j + 1;
    }
    if chars.get(i + 2) == Some(&'\'') {
        return i + 3;
    }
    let mut j = i + 1;
    while j < chars.len() && (chars[j].is_alphanumeric() || chars[j] == '_') {
        j += 1;
    }
    j
}

/// One lexed `.rs` file.
#[derive(Debug)]
pub struct SourceFile {
    pub path: PathBuf,
    pub lines: usize,
    pub tokens: Vec<Token>,
}

impl SourceFile {
    pub fn read(path: &Path) -> Option<Self> {
        let text = std::fs::read_to_string(path).ok()?;
        Some(Self {
            path: path.to_path_buf(),
            lines: text.lines().count(),
            tokens: lex(&text),
        })
    }

    pub fn mentions(&self, ident: &str) -> bool {
        self.tokens.iter().any(|t| t.is_ident(ident))
    }
}

/// A workspace member and its non-test source files under `src/`.
#[derive(Debug)]
pub struct Crate {
    pub name: String,
    pub dir: PathBuf,
    pub files: Vec<SourceFile>,
}

impl Crate {
    /// The crate name as written in Rust paths.
    pub fn ident(&self) -> String {
        self.name.replace('-', "_")
    }

    pub fn src_dir(&self) -> PathBuf {
        self.dir.join("src")
    }

    pub fn lib(&self) -> Option<&SourceFile> {
        let lib = self.src_dir().join("lib.rs");
        self.files.iter().find(|f| f.path == lib)
    }

    /// Files that make up top-level module `name`: `src/name.rs` and
    /// everything under `src/name/`.
    pub fn module_files(&self, name: &str) -> BTreeSet<PathBuf> {
        let src = self.src_dir();
        let file = src.join(format!("{name}.rs"));
        let dir = src.join(name);
        self.files
            .iter()
            .filter(|f| f.path == file || f.path.starts_with(&dir))
            .map(|f| f.path.clone())
            .collect()
    }
}

/// Load every workspace member under `crates/` plus `xtask`.
pub fn load_workspace(root: &Path) -> Vec<Crate> {
    let mut dirs: Vec<PathBuf> = std::fs::read_dir(root.join("crates"))
        .map(|entries| entries.flatten().map(|e| e.path()).collect())
        .unwrap_or_default();
    dirs.push(root.join("xtask"));
    dirs.sort();
    dirs.into_iter()
        .filter_map(|dir| {
            let manifest = std::fs::read_to_string(dir.join("Cargo.toml")).ok()?;
            let name = manifest
                .parse::<toml::Table>()
                .ok()?
                .get("package")?
                .get("name")?
                .as_str()?
                .to_string();
            let mut paths = Vec::new();
            collect_rs_files(&dir.join("src"), &mut paths);
            paths.sort();
            let files = paths.iter().filter_map(|p| SourceFile::read(p)).collect();
            Some(Crate { name, dir, files })
        })
        .collect()
}

fn collect_rs_files(dir: &Path, out: &mut Vec<PathBuf>) {
    let Ok(entries) = std::fs::read_dir(dir) else {
        return;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.is_dir() {
            collect_rs_files(&path, out);
        } else if path.extension().is_some_and(|ext| ext == "rs") {
            out.push(path);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn idents(src: &str) -> Vec<String> {
        lex(src)
            .into_iter()
            .filter_map(|t| match t {
                Token::Ident(i) => Some(i),
                _ => None,
            })
            .collect()
    }

    #[test]
    fn comments_strings_and_lifetimes_are_not_identifiers() {
        let src = r##"
            // foo::bar
            /* outer /* nested */ baz */
            fn f<'a>(x: &'a str) -> char { let _ = "qux"; let _ = r#"quux"#; 'c' }
        "##;
        assert_eq!(
            idents(src),
            ["fn", "f", "x", "str", "char", "let", "_", "let", "_"]
        );
    }

    #[test]
    fn string_contents_are_kept() {
        let tokens = lex(r#"#[cfg(feature = "unwired")] pub mod m;"#);
        assert!(tokens.contains(&Token::Str("unwired".into())));
        assert!(!tokens.contains(&Token::PathSep));
    }
}
