"""The repository's own layout checks, so one unittest run is the whole Python tooling gate:
every integration-test file registered exactly once (scripts/check_test_layout.py) and no new
upward module edge in unlace-decomp (scripts/check_layers.py)."""
import unittest
from pathlib import Path

from scripts import check_layers, check_test_layout

ROOT = Path(__file__).resolve().parents[2]


class RepoChecks(unittest.TestCase):
    def test_integration_test_layout(self):
        self.assertEqual(check_test_layout.check(ROOT), [])

    def test_module_layering(self):
        self.assertEqual(check_layers.check(ROOT), [])
