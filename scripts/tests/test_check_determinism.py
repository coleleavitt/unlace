from pathlib import Path
import os
import stat
import tempfile
import unittest

from scripts.check_determinism import ALLOWLIST, check, findings, run


def names(code):
    return [name for _, name in findings(Path("x.rs"), code)]


class LintTests(unittest.TestCase):
    def test_loop_over_a_local_hashmap_is_a_finding(self):
        code = "fn f() {\n    let mut m = HashMap::new();\n    for (k, v) in &m {\n        out(k, v);\n    }\n}\n"
        self.assertEqual(findings(Path("x.rs"), code), [(3, "m")])

    def test_typed_bindings_fields_and_parameters(self):
        self.assertEqual(names("fn f(s: &HashSet<u64>) { for x in s.iter() { g(x); } }"), ["s"])
        self.assertEqual(names("struct S { m: HashMap<u64, u64> }\nimpl S { fn f(&self) -> Vec<u64> { self.m.keys().copied().collect() } }"), ["m"])
        self.assertEqual(names("fn f() { let v: std::collections::HashSet<u8> = g(); v.into_iter().for_each(h); }"), ["v"])

    def test_order_insensitive_uses_pass(self):
        for code in (
            "fn f(m: HashMap<u8, u8>) -> bool { m.values().any(|v| *v == 0) }",
            "fn f(m: HashMap<u8, u8>) -> usize { m.iter().filter(|(k, _)| **k > 1).count() }",
            "fn f(m: HashMap<u8, u8>) { let s: BTreeSet<u8> = m.keys().copied().collect(); }",
            "fn f(m: HashMap<u8, u8>) { let s = m.keys().copied().collect::<HashSet<_>>(); }",
            "fn f(m: HashMap<u8, u8>) {\n    let mut v: Vec<u8> = m.into_keys().collect();\n    v.sort_unstable();\n}",
        ):
            self.assertEqual(names(code), [], code)

    def test_ordered_and_fixed_hasher_maps_pass(self):
        for code in (
            "fn f(m: BTreeMap<u8, u8>) { for k in m.keys() { g(k); } }",
            "fn f(m: FxHashMap<u8, u8>) { for k in m.keys() { g(k); } }",
            "fn f(m: HashMap<u8, u8, FxBuildHasher>) { for k in m.keys() { g(k); } }",
        ):
            self.assertEqual(names(code), [], code)

    def test_allow_mark_test_code_and_literals_are_skipped(self):
        self.assertEqual(names("fn f(m: HashMap<u8, u8>) {\n    // determinism:allow: sums only\n    for v in m.values() { t += v; }\n}"), [])
        self.assertEqual(names("#[cfg(test)]\nmod tests {\n    fn f(m: HashMap<u8, u8>) { for v in m.values() { g(v); } }\n}\n"), [])
        self.assertEqual(names('fn f() { let s = "for x in m.iter() {"; }'), [])

    def test_line_numbers_survive_comments_and_strings(self):
        code = "/* one\ntwo\nthree */\nconst S: &str = \"a\nb\";\nfn f(m: HashMap<u8, u8>) {\n    for k in m.keys() { g(k); }\n}\n"
        self.assertEqual(findings(Path("x.rs"), code), [(7, "m")])


class RatchetTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="determinism-test-")
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        src = self.root / "crates/unlace-emit/src"
        src.mkdir(parents=True)
        (src / "a.rs").write_text("fn f(m: HashMap<u8, u8>) { for k in m.keys() { g(k); } }\n")
        (self.root / "scripts").mkdir()

    def allow(self, *lines):
        (self.root / ALLOWLIST).write_text("# header\n" + "".join(f"{line}\n" for line in lines))

    def test_a_new_finding_fails(self):
        self.allow()
        problems = check(self.root)
        self.assertEqual(len(problems), 1)
        self.assertIn("crates/unlace-emit/src/a.rs:1", problems[0])

    def test_a_listed_finding_passes_and_a_stale_entry_fails(self):
        self.allow("crates/unlace-emit/src/a.rs m 1")
        self.assertEqual(check(self.root), [])
        self.allow("crates/unlace-emit/src/a.rs m 2")
        self.assertIn("lower or delete", check(self.root)[0])

    def test_the_tree_is_clean(self):
        self.assertEqual(check(Path(__file__).resolve().parents[2]), [])


class RunTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="determinism-run-")
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        (self.root / "bin.elf").write_bytes(b"\x7fELF")

    def fake(self, body):
        path = self.root / "unlace"
        path.write_text("#!/bin/sh\n" + body + "\n")
        path.chmod(path.stat().st_mode | stat.S_IXUSR)
        return str(path)

    def test_identical_runs_pass(self):
        self.assertEqual(run(self.root, self.fake('echo "{}"'), ["bin.elf"]), [])

    def test_differing_runs_fail(self):
        problems = run(self.root, self.fake('echo "{\"pid\": $$}"'), ["bin.elf"])
        self.assertTrue(problems and "differ" in problems[0], problems)

    def test_a_missing_binary_or_a_failed_run_is_reported(self):
        self.assertIn("missing", run(self.root, self.fake("echo"), ["nope"])[0])
        self.assertIn("exited 3", run(self.root, self.fake("exit 3"), ["bin.elf"])[0])


if __name__ == "__main__":
    unittest.main()
