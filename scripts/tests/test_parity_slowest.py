import contextlib
import io
from pathlib import Path
import tempfile
import unittest

from scripts.parity_slowest import load_rows, main, ranked

SAMPLE = """
[[file]]
corpus = "tests/datatests"
file = "a.xml"
ms = 1500
outcome = "pass"

[[file]]
corpus = "tests/stages"
file = "b.toml"
ms = 500
outcome = "fail"

[[file]]
corpus = "tests/stages"
file = "c.toml"
ms = 3000
outcome = "pass"
"""


class ParitySlowestTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="unlace-parity-slowest-")
        self.addCleanup(temporary.cleanup)
        self.path = Path(temporary.name) / "parity-times.toml"
        self.path.write_text(SAMPLE)

    def test_ranks_slowest_first_with_share_of_total(self):
        count, total, entries = ranked(load_rows(self.path))
        self.assertEqual((count, total), (3, 5000))
        self.assertEqual([e["file"] for e in entries], ["c.toml", "a.xml", "b.toml"])
        self.assertEqual([round(e["share"], 1) for e in entries], [60.0, 30.0, 10.0])

    def test_top_limits_rows_but_shares_stay_on_the_whole_selection(self):
        count, total, entries = ranked(load_rows(self.path), top=1)
        self.assertEqual((count, total, len(entries)), (3, 5000, 1))
        self.assertEqual(round(entries[0]["share"], 1), 60.0)

    def test_corpus_filter_selects_by_substring(self):
        count, total, entries = ranked(load_rows(self.path), corpus="stages", top=0)
        self.assertEqual((count, total), (2, 3500))
        self.assertEqual([e["file"] for e in entries], ["c.toml", "b.toml"])

    def test_main_prints_the_table(self):
        out = io.StringIO()
        with contextlib.redirect_stdout(out):
            self.assertEqual(main([str(self.path), "--top", "2"]), 0)
        text = out.getvalue()
        self.assertIn("3 files, 5.0 s total wall time", text)
        self.assertIn("60.0%", text)
        self.assertIn("tests/stages: c.toml", text)
        self.assertNotIn("b.toml", text)

    def test_missing_file_is_an_error_with_a_hint(self):
        err = io.StringIO()
        with contextlib.redirect_stderr(err):
            self.assertEqual(main([str(self.path.with_name("absent.toml"))]), 1)
        self.assertIn("run \`cargo test -p unlace-harness --test parity\` first", err.getvalue())

    def test_malformed_row_is_an_error(self):
        self.path.write_text('[[file]]\ncorpus = "tests/stages"\nfile = "x.toml"\n')
        err = io.StringIO()
        with contextlib.redirect_stderr(err):
            self.assertEqual(main([str(self.path)]), 1)
        self.assertIn("malformed [[file]] row", err.getvalue())


if __name__ == "__main__":
    unittest.main()
