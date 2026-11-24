import tempfile
import unittest
from pathlib import Path

from scripts.check_test_tiers import check

REPO = Path(__file__).resolve().parents[2]
DROPPED = "| (binary_id(unlace-cli::decompile_all_cli) & test(=jobs_names_synthesized_structs_as_the_serial_run_does))"


class TestNextestTiers(unittest.TestCase):
    def test_repository_lists_agree(self):
        self.assertEqual(check(REPO), [])

    def test_a_missing_nightly_test_is_reported(self):
        text = (REPO / ".config/nextest.toml").read_text()
        self.assertIn(DROPPED, text)
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / ".config").mkdir()
            head, nightly = text.split("[profile.nightly]", 1)
            (root / ".config/nextest.toml").write_text(head + "[profile.nightly]" + nightly.replace(DROPPED, ""))
            errors = check(root)
        self.assertEqual(len(errors), 1)
        self.assertIn("jobs_names_synthesized_structs_as_the_serial_run_does", errors[0])


if __name__ == "__main__":
    unittest.main()
