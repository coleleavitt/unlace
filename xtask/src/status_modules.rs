//! Which top-level modules are wired into production code, which are gated
//! behind a cargo feature, and which source files no module tree declares.
//!
//! "Wired" is a heuristic over tokens: a `pub mod m` in `lib.rs` counts as
//! referenced when some non-test file outside `m` (and outside every gated or
//! unreferenced module) names it through a path (`crate::m`, `super::m`,
//! `my_crate::m`, a `use crate::{.., m, ..}` group, `m::` inside `lib.rs`),
//! or uses a name `lib.rs` imports from it. Unreferenced modules are found to
//! a fixpoint, so a module only used by unwired code is unwired too.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};

use super::source::{Crate, SourceFile, Token};

/// A top-level `pub mod` declared in a crate's `lib.rs`.
#[derive(Debug, Clone)]
pub struct ModDecl {
    pub name: String,
    /// The cargo feature in the declaration's `#[cfg(feature = ..)]`.
    pub feature: Option<String>,
}

/// A top-level module together with the files and lines it owns.
#[derive(Debug, Clone)]
pub struct ModuleId {
    pub krate: String,
    pub name: String,
    pub lines: usize,
}

/// Top-level `pub mod` declarations of `lib.rs` (excluding `#[cfg(test)]`).
pub fn top_level_mods(lib: &SourceFile) -> Vec<ModDecl> {
    let tokens = &lib.tokens;
    let mut decls = Vec::new();
    let mut attrs: Vec<&[Token]> = Vec::new();
    let mut depth = 0usize;
    let mut i = 0;
    while i < tokens.len() {
        let token = &tokens[i];
        if token.is_punct('{') {
            depth += 1;
        } else if token.is_punct('}') {
            depth = depth.saturating_sub(1);
        }
        if depth > 0 {
            i += 1;
            continue;
        }
        if token.is_punct('#') {
            let open = if tokens.get(i + 1).is_some_and(|t| t.is_punct('!')) {
                i + 2
            } else {
                i + 1
            };
            if tokens.get(open).is_some_and(|t| t.is_punct('[')) {
                let close = matching(tokens, open, '[', ']');
                attrs.push(&tokens[open + 1..close]);
                i = close + 1;
                continue;
            }
        }
        if token.is_ident("pub") {
            let mut j = i + 1;
            if tokens.get(j).is_some_and(|t| t.is_punct('(')) {
                j = matching(tokens, j, '(', ')') + 1;
            }
            if let (Some(kw), Some(Token::Ident(name)), Some(semi)) =
                (tokens.get(j), tokens.get(j + 1), tokens.get(j + 2))
                && kw.is_ident("mod")
                && semi.is_punct(';')
            {
                if !attrs.iter().any(|a| is_cfg_test(a)) {
                    decls.push(ModDecl {
                        name: name.clone(),
                        feature: attrs.iter().find_map(|a| cfg_feature(a)),
                    });
                }
                attrs.clear();
                i = j + 3;
                continue;
            }
        }
        if token.is_punct(';') || token.is_punct('{') {
            attrs.clear();
        }
        i += 1;
    }
    decls
}

fn matching(tokens: &[Token], open: usize, o: char, c: char) -> usize {
    let mut depth = 0usize;
    for (k, t) in tokens.iter().enumerate().skip(open) {
        if t.is_punct(o) {
            depth += 1;
        } else if t.is_punct(c) {
            depth -= 1;
            if depth == 0 {
                return k;
            }
        }
    }
    tokens.len().saturating_sub(1)
}

fn is_cfg_test(attr: &[Token]) -> bool {
    attr.first().is_some_and(|t| t.is_ident("cfg"))
        && attr.get(2).is_some_and(|t| t.is_ident("test"))
        && attr.len() == 4
}

fn cfg_feature(attr: &[Token]) -> Option<String> {
    if !attr.first().is_some_and(|t| t.is_ident("cfg")) {
        return None;
    }
    attr.windows(3).find_map(|w| match w {
        [Token::Ident(f), Token::Punct('='), Token::Str(feature)] if f == "feature" => {
            Some(feature.clone())
        }
        _ => None,
    })
}

/// `use` statements in `lib.rs` rooted at module `m` (`use m::..`,
/// `pub use crate::m::..`): the token range of each statement and the
/// names it brings into scope. `None` names means a glob import.
fn imports_from(lib: &SourceFile, m: &str) -> (Vec<(usize, usize)>, Option<BTreeSet<String>>) {
    let tokens = &lib.code;
    let mut ranges = Vec::new();
    let mut names = BTreeSet::new();
    let mut glob = false;
    for (i, t) in tokens.iter().enumerate() {
        if !t.is_ident("use") {
            continue;
        }
        let mut j = i + 1;
        if tokens
            .get(j)
            .is_some_and(|t| t.is_ident("crate") || t.is_ident("self"))
            && tokens.get(j + 1) == Some(&Token::PathSep)
        {
            j += 2;
        }
        if !(tokens.get(j).is_some_and(|t| t.is_ident(m))
            && tokens.get(j + 1) == Some(&Token::PathSep))
        {
            continue;
        }
        let end = tokens[j..]
            .iter()
            .position(|t| t.is_punct(';'))
            .map_or(tokens.len(), |p| j + p);
        for k in j..end {
            match &tokens[k] {
                Token::Punct('*') => glob = true,
                Token::Ident(name) if name != "self" && name != "as" => {
                    let next = tokens.get(k + 1);
                    if next.is_none_or(|n| n.is_punct(',') || n.is_punct('}') || n.is_punct(';')) {
                        names.insert(name.clone());
                    }
                }
                _ => {}
            }
        }
        ranges.push((i, end));
    }
    (ranges, (!glob).then_some(names))
}

/// Wiring state of every top-level module in the workspace.
#[derive(Debug, Default)]
pub struct Wiring {
    /// Modules declared behind `#[cfg(feature = ..)]`, keyed by feature.
    pub gated: BTreeMap<String, Vec<ModuleId>>,
    /// Ungated modules no production code reaches.
    pub unreferenced: Vec<ModuleId>,
}

pub fn wiring(crates: &[Crate]) -> Wiring {
    let mut result = Wiring::default();
    let mut excluded: BTreeSet<PathBuf> = BTreeSet::new();
    let mut candidates: Vec<(&Crate, ModDecl)> = Vec::new();
    for krate in crates {
        let Some(lib) = krate.lib() else { continue };
        for decl in top_level_mods(lib) {
            let files = krate.module_files(&decl.name);
            match &decl.feature {
                Some(feature) => {
                    result
                        .gated
                        .entry(feature.clone())
                        .or_default()
                        .push(module_id(krate, &decl.name));
                    excluded.extend(files);
                }
                None => candidates.push((krate, decl)),
            }
        }
    }
    loop {
        let newly: Vec<usize> = candidates
            .iter()
            .enumerate()
            .filter(|(_, (krate, decl))| !is_referenced(crates, krate, &decl.name, &excluded))
            .map(|(idx, _)| idx)
            .collect();
        if newly.is_empty() {
            break;
        }
        for idx in newly.into_iter().rev() {
            let (krate, decl) = candidates.remove(idx);
            excluded.extend(krate.module_files(&decl.name));
            result.unreferenced.push(module_id(krate, &decl.name));
        }
    }
    result
        .unreferenced
        .sort_by(|a, b| (&a.krate, &a.name).cmp(&(&b.krate, &b.name)));
    result
}

fn module_id(krate: &Crate, name: &str) -> ModuleId {
    let files = krate.module_files(name);
    ModuleId {
        krate: krate.name.clone(),
        name: name.to_string(),
        lines: krate
            .files
            .iter()
            .filter(|f| files.contains(&f.path))
            .map(|f| f.lines)
            .sum(),
    }
}

fn is_referenced(crates: &[Crate], owner: &Crate, m: &str, excluded: &BTreeSet<PathBuf>) -> bool {
    let own = owner.module_files(m);
    let owner_ident = owner.ident();
    let lib = owner.lib().expect("candidates come from lib.rs");
    let (use_ranges, imported) = imports_from(lib, m);
    let Some(imported) = imported else {
        return true;
    };
    for krate in crates {
        let same_crate = krate.name == owner.name;
        for file in &krate.files {
            if own.contains(&file.path) || excluded.contains(&file.path) {
                continue;
            }
            if !same_crate && !file.mentions(&owner_ident) {
                continue;
            }
            let is_lib = same_crate && file.path == lib.path;
            let tokens = &file.code;
            let in_use_stmt =
                |k: usize| is_lib && use_ranges.iter().any(|&(s, e)| (s..=e).contains(&k));
            for (k, t) in tokens.iter().enumerate() {
                if in_use_stmt(k) {
                    continue;
                }
                let Token::Ident(ident) = t else { continue };
                if imported.contains(ident) {
                    return true;
                }
                if ident == m && names_module(tokens, k, same_crate, is_lib, &owner_ident) {
                    return true;
                }
            }
            if has_group_reference(tokens, m, same_crate, &owner_ident) {
                return true;
            }
        }
    }
    false
}

/// `tokens[k]` is the module name; is it used as a path to the module?
fn names_module(tokens: &[Token], k: usize, same_crate: bool, is_lib: bool, owner: &str) -> bool {
    let prev = k.checked_sub(1).map(|p| &tokens[p]);
    if prev == Some(&Token::PathSep) {
        let Some(Token::Ident(root)) = k.checked_sub(2).map(|p| &tokens[p]) else {
            return false;
        };
        return root == owner || same_crate && matches!(root.as_str(), "crate" | "super" | "self");
    }
    is_lib && tokens.get(k + 1) == Some(&Token::PathSep)
}

/// `crate::{a, m::X}` / `owner::{m, ..}` groups.
fn has_group_reference(tokens: &[Token], m: &str, same_crate: bool, owner: &str) -> bool {
    tokens.windows(3).enumerate().any(|(k, w)| {
        let [Token::Ident(root), Token::PathSep, open] = w else {
            return false;
        };
        let root_ok =
            root == owner || same_crate && matches!(root.as_str(), "crate" | "super" | "self");
        if !root_ok || !open.is_punct('{') {
            return false;
        }
        let close = matching(tokens, k + 2, '{', '}');
        tokens[k + 2..close].iter().any(|t| t.is_ident(m))
    })
}

/// `.rs` files under a crate's `src/` that no module tree reaches from
/// `lib.rs`, `main.rs` or `src/bin/`.
pub fn orphan_files(krate: &Crate) -> Vec<PathBuf> {
    let src = krate.src_dir();
    let by_path: BTreeMap<&Path, &SourceFile> =
        krate.files.iter().map(|f| (f.path.as_path(), f)).collect();
    let mut roots: Vec<PathBuf> = [src.join("lib.rs"), src.join("main.rs")]
        .into_iter()
        .collect();
    roots.extend(
        krate
            .files
            .iter()
            .filter(|f| f.path.parent() == Some(&src.join("bin")) || f.path.ends_with("main.rs"))
            .map(|f| f.path.clone()),
    );
    let mut reached: BTreeSet<PathBuf> = BTreeSet::new();
    let mut stack: Vec<(PathBuf, bool)> = roots.into_iter().map(|r| (r, true)).collect();
    while let Some((path, is_root)) = stack.pop() {
        let Some(file) = by_path.get(path.as_path()) else {
            continue;
        };
        if !reached.insert(path.clone()) {
            continue;
        }
        let parent = path.parent().unwrap_or(&src).to_path_buf();
        let stem = path
            .file_stem()
            .and_then(|s| s.to_str())
            .unwrap_or_default();
        let child_dir = if is_root || stem == "mod" {
            parent.clone()
        } else {
            parent.join(stem)
        };
        for (name, explicit) in mod_decls(&file.tokens) {
            match explicit {
                Some(rel) => stack.push((parent.join(rel), false)),
                None => {
                    stack.push((child_dir.join(format!("{name}.rs")), false));
                    stack.push((child_dir.join(&name).join("mod.rs"), false));
                }
            }
        }
    }
    krate
        .files
        .iter()
        .filter(|f| !reached.contains(&f.path))
        .map(|f| f.path.clone())
        .collect()
}

/// `mod name;` declarations anywhere in a file, with their `#[path]`.
fn mod_decls(tokens: &[Token]) -> Vec<(String, Option<String>)> {
    let mut out = Vec::new();
    for (k, w) in tokens.windows(3).enumerate() {
        let [kw, Token::Ident(name), semi] = w else {
            continue;
        };
        if !kw.is_ident("mod") || !semi.is_punct(';') {
            continue;
        }
        let path_attr = tokens[..k]
            .iter()
            .rev()
            .take(8)
            .collect::<Vec<_>>()
            .windows(3)
            .find_map(|w| match w {
                [Token::Str(p), Token::Punct('='), Token::Ident(attr)] if attr == "path" => {
                    Some(p.clone())
                }
                _ => None,
            });
        out.push((name.clone(), path_attr));
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn file(path: &str, src: &str) -> SourceFile {
        SourceFile::new(PathBuf::from(path), src)
    }

    fn krate(name: &str, files: Vec<SourceFile>) -> Crate {
        Crate {
            name: name.to_string(),
            dir: PathBuf::from(format!("/ws/{name}")),
            files,
        }
    }

    #[test]
    fn gated_and_test_modules_are_classified() {
        let lib = file(
            "/ws/a/src/lib.rs",
            "pub mod used;\n#[cfg(feature = \"unwired\")]\npub mod off;\n#[cfg(test)]\npub mod t;\n",
        );
        let decls = top_level_mods(&lib);
        let names: Vec<_> = decls
            .iter()
            .map(|d| (d.name.as_str(), d.feature.as_deref()))
            .collect();
        assert_eq!(names, [("used", None), ("off", Some("unwired"))]);
    }

    #[test]
    fn references_follow_paths_reexports_and_fixpoint() {
        let a = krate(
            "a",
            vec![
                file(
                    "/ws/a/src/lib.rs",
                    "pub mod by_path;\npub mod by_reexport;\npub mod by_group;\npub mod dead;\npub mod dead_dep;\npub use by_reexport::Thing;\n",
                ),
                file("/ws/a/src/by_path.rs", "pub fn f() {}"),
                file("/ws/a/src/by_reexport.rs", "pub struct Thing;"),
                file("/ws/a/src/by_group.rs", "pub fn g() {}"),
                file(
                    "/ws/a/src/dead.rs",
                    "use crate::dead_dep::h; pub fn d() { h() }",
                ),
                file("/ws/a/src/dead_dep.rs", "pub fn h() {}"),
            ],
        );
        let b = krate(
            "b",
            vec![file(
                "/ws/b/src/main.rs",
                "use a::{by_group::g, Thing};\nfn main() { a::by_path::f(); g(); let _ = Thing; }\n",
            )],
        );
        let wiring = wiring(&[a, b]);
        let dead: Vec<_> = wiring
            .unreferenced
            .iter()
            .map(|m| m.name.as_str())
            .collect();
        assert_eq!(dead, ["dead", "dead_dep"]);
    }

    #[test]
    fn undeclared_files_are_orphans() {
        let a = krate(
            "a",
            vec![
                file(
                    "/ws/a/src/lib.rs",
                    "mod x;\n#[path = \"other.rs\"]\nmod y;\n",
                ),
                file("/ws/a/src/x.rs", "mod inner;"),
                file("/ws/a/src/x/inner.rs", ""),
                file("/ws/a/src/other.rs", ""),
                file("/ws/a/src/lost.rs", ""),
            ],
        );
        assert_eq!(orphan_files(&a), [PathBuf::from("/ws/a/src/lost.rs")]);
    }
}
