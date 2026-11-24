from pathlib import Path
import tempfile
import unittest

from scripts.check_layers import ALLOWLIST, SRC, check


class CheckLayersTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="layers-test-")
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.write("p9_emit/mod.rs", "pub mod printc;\npub use printc::emit;\n")
        self.write("p9_emit/printc.rs", "pub fn emit() {}\n")
        self.write("p4_calls/fspec.rs", "pub struct FuncProto;\n")
        self.write("substrate/funcdata.rs", "")
        self.allow()

    def write(self, relative, text):
        path = self.root / SRC / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text)

    def allow(self, *edges):
        path = self.root / ALLOWLIST
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("# header\n" + "".join(f"{edge}\n" for edge in edges))

    def edges_of(self, code, relative="substrate/funcdata.rs"):
        self.write(relative, code)
        return [e.split(":")[0].removeprefix("new upward edge ") for e in check(self.root)]

    def test_downward_edges_pass(self):
        self.write("p9_emit/printc.rs", "use crate::fspec::FuncProto;\nuse crate::{p4_calls::fspec};\n")
        self.assertEqual(check(self.root), [])

    def test_every_path_form_reaches_the_module(self):
        for code in ("use crate::printc::emit;", "fn f() { crate::printc::emit() }",
                     "use crate::p9_emit::printc;", "use crate::p9_emit::{printc};",
                     "use crate::{x, printc::{emit}};", "use crate::{p9_emit::{printc}};",
                     "use crate::{p9_emit::printc as p};", "use crate::p9_emit::printc::{self, emit as e};"):
            with self.subTest(code=code):
                self.assertEqual(self.edges_of(code + "\n"), ["funcdata -> printc"])

    def test_a_path_that_stops_at_a_folder_names_the_folder(self):
        for code in ("use crate::p9_emit::*;", "use crate::p9_emit::emit;", "use crate::{p9_emit};"):
            with self.subTest(code=code):
                self.assertEqual(self.edges_of(code + "\n"), ["funcdata -> p9_emit"])

    def test_super_and_self_paths_resolve_from_the_file(self):
        self.write("p4_calls/unlace_late.rs", "pub fn f() {}\n")
        self.write("p4_calls/mod.rs", "pub mod fspec;\npub mod unlace_late;\n")
        self.assertEqual(self.edges_of("use super::super::super::p9_emit::printc;\n", "substrate/funcdata/child.rs"),
                         ["funcdata -> printc"])
        self.write("substrate/funcdata/child.rs", "")
        self.assertEqual(self.edges_of("use super::unlace_late::f;\nuse self::inner::g;\n", "p4_calls/unlace_early.rs"), [])
        self.assertEqual(self.edges_of("use super::unlace_late::f;\n", "p4_calls/fspec.rs"), ["fspec -> unlace_late"])

    def test_folder_mod_rs_is_scanned_as_its_folder(self):
        self.assertEqual(self.edges_of("pub use crate::printc::emit;\n", "substrate/mod.rs"),
                         ["substrate -> printc"])

    def test_comments_and_literals_are_not_edges(self):
        code = ('fn f() { let s = "crate::printc::emit"; } // crate::printc::emit\n'
                "/* outer /* nested */ crate::printc::emit */\n"
                'const R: &str = r#"crate::printc::emit "quoted""#;\n'
                "fn g<'a>(x: &'a u8) -> char { '\"' }\n"
                "/// See [`crate::printc::emit`].\nfn h() {}\n")
        self.assertEqual(self.edges_of(code), [])

    def test_test_only_code_is_not_scanned(self):
        code = ("#[cfg(test)]\nuse crate::printc::emit;\n"
                "#[cfg(test)]\nfn helper() { crate::printc::emit() }\n"
                "#[cfg(test)]\nconst X: fn() = crate::printc::emit;\n"
                "#[cfg(test)]\n#[allow(dead_code)]\n// comment\nimpl S { fn f() { crate::printc::emit() } }\n"
                "#[cfg(test)]\nmod tests {\n    use crate::printc::emit;\n}\n")
        self.assertEqual(self.edges_of(code), [])
        for relative in ("substrate/funcdata/tests.rs", "substrate/funcdata/merge_tests.rs",
                         "substrate/funcdata/tests/case.rs"):
            with self.subTest(relative=relative):
                self.assertEqual(self.edges_of("use crate::printc::emit;\n", relative), [])
                self.write(relative, "")

    def test_test_only_fields_arms_and_inner_attributes_hide_only_themselves(self):
        code = ("struct S {\n    #[cfg(test)]\n    test: u8,\n    real: u8,\n}\n"
                "fn f() { crate::printc::emit() }\n")
        self.assertEqual(self.edges_of(code), ["funcdata -> printc"])
        code = "mod checks {\n    #![cfg(test)]\n    use crate::printc::emit;\n}\nuse crate::printc::emit;\n"
        self.assertEqual(self.edges_of(code), ["funcdata -> printc"])
        self.assertEqual(self.edges_of("//! Tests.\n#![cfg(test)]\nuse crate::printc::emit;\n"), [])

    def test_raw_identifiers_and_foreign_folder_names(self):
        self.assertEqual(self.edges_of("use crate::{r#printc};\nuse crate::{#};\n"), ["funcdata -> printc"])
        self.assertEqual(self.edges_of("use crate::p9_emit::fspec;\n"), ["funcdata -> p9_emit"])

    def test_one_line_test_module_does_not_hide_the_code_after_it(self):
        code = "#[cfg(test)]\nmod tests {}\nuse crate::printc::emit;\n"
        self.assertEqual(self.edges_of(code), ["funcdata -> printc"])

    def test_allowlisted_edge_passes_and_a_stale_entry_fails(self):
        self.write("substrate/funcdata/child.rs", "fn f() { crate::printc::emit() }\n")
        self.allow("funcdata -> printc")
        self.assertEqual(check(self.root), [])
        self.write("substrate/funcdata/child.rs", "fn f() {}\n")
        self.assertIn("is gone", check(self.root)[0])


if __name__ == "__main__":
    unittest.main()
