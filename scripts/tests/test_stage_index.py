import tempfile
import unittest
from pathlib import Path

from scripts import stage_index

TOML = """# Wide-slice reduction, always on. The witness is clang -O3
# x86-64.
#
# More detail that is not the description.

[image]
arch = 'x86:LE:64:default:gcc'

[script]
commands = [
    'option wideslice on',
    { com = 'option nosuch on', expect_error = true },
    'decompile',
]

[[match]]
name = 'WS #1: the sum'
count = 1
literal = 'x'

[[match]]
name = 'WS #2: the tail'
count = 1
literal = 'y'
"""

BARE = """[image]
arch = 'ARM:LE:32:v8:default'

[[match]]
name = 'B #1: a guard'
count = 1
literal = 'if'
"""

XML = """<?xml version="1.0"?>
<!--
  GH-1: an XML test
  that wraps.

  Detail.
-->
<decompilertest><binaryimage arch="x86:LE:32:default:gcc"></binaryimage>
<script><com>option foo on</com></script>
<stringmatch name="X #1" min="1" max="1">a</stringmatch>
</decompilertest>
"""


class StageIndexTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory(prefix="unlace-stage-index-test-")
        self.addCleanup(temporary.cleanup)
        self.dir = Path(temporary.name)
        (self.dir / "wideslice.toml").write_text(TOML)
        (self.dir / "bare.toml").write_text(BARE)
        (self.dir / "gh1.xml").write_text(XML)
        (self.dir / "README.md").write_text("not a test")

    def test_each_file_describes_itself(self):
        rows = {r["file"]: r for r in stage_index.inventory(self.dir)}
        self.assertEqual(sorted(rows), ["bare.toml", "gh1.xml", "wideslice.toml"])
        ws = rows["wideslice.toml"]
        self.assertEqual(ws["description"], "Wide-slice reduction, always on. The witness is clang -O3 x86-64.")
        self.assertTrue(ws["commented"])
        self.assertEqual(ws["assertions"], 2)
        self.assertEqual(ws["options"], ["wideslice", "nosuch"])
        self.assertEqual(ws["arch"], "x86:LE:64:default:gcc")
        xml = rows["gh1.xml"]
        self.assertEqual(xml["description"], "GH-1: an XML test that wraps.")
        self.assertEqual((xml["arch"], xml["assertions"], xml["options"]), ("x86:LE:32:default:gcc", 1, ["foo"]))

    def test_an_uncommented_file_falls_back_to_its_first_assertion(self):
        bare = stage_index.inventory(self.dir, ["bare"])[0]
        self.assertEqual(bare["description"], "B #1: a guard")
        self.assertFalse(bare["commented"])

    def test_the_markdown_table_has_one_row_per_file(self):
        table = stage_index.markdown(stage_index.inventory(self.dir))
        self.assertEqual(len(table.splitlines()), 2 + 3)
        self.assertIn("| `wideslice.toml` |", table)


if __name__ == "__main__":
    unittest.main()
