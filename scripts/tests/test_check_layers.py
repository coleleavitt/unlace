from pathlib import Path
import tempfile
import unittest

from scripts.check_layers import ALLOWLIST, SRC, check


class CheckLayersTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="layers-test-")
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.write("p9_emit/printc.rs", "pub fn emit() {}\n")
        self.write("p4_calls/fspec.rs", "pub struct FuncProto;\n")
        self.allow()

    def write(self, relative, text):
        path = self.root / SRC / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text)

    def allow(self, *edges):
        path = self.root / ALLOWLIST
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("# header\n" + "".join(f"{edge}\n" for edge in edges))

    def test_downward_edges_pass(self):
        self.write("p9_emit/printc.rs", "use crate::fspec::FuncProto;\nuse crate::{p4_calls::fspec};\n")
        self.assertEqual(check(self.root), [])

    def test_new_upward_edge_fails_in_any_path_form(self):
        for code in ("use crate::printc::emit;", "use crate::p9_emit::printc;", "use crate::{x, printc::{emit}};"):
            with self.subTest(code=code):
                self.write("substrate/funcdata.rs", code + "\n")
                self.assertEqual(len(check(self.root)), 1)
                self.assertIn("funcdata -> printc", check(self.root)[0])

    def test_allowlisted_edge_passes_and_a_stale_entry_fails(self):
        self.write("substrate/funcdata/child.rs", "fn f() { crate::printc::emit() }\n")
        self.allow("funcdata -> printc")
        self.assertEqual(check(self.root), [])
        self.write("substrate/funcdata/child.rs", "fn f() {}\n")
        self.assertIn("is gone", check(self.root)[0])

    def test_comments_and_test_code_are_not_edges(self):
        self.write("substrate/funcdata.rs", "/// See [`crate::printc::emit`].\n"
                   "#[cfg(test)]\nmod tests {\n    use crate::printc::emit;\n}\n")
        self.write("substrate/funcdata/tests.rs", "use crate::printc::emit;\n")
        self.write("substrate/funcdata/merge_tests.rs", "use crate::printc::emit;\n")
        self.assertEqual(check(self.root), [])


if __name__ == "__main__":
    unittest.main()
