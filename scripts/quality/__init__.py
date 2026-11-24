"""The real-binary quality harness (issue #32; docs/quality-harness.md).

Compile a corpus with DWARF kept as ground truth (`corpus`), score unlace's
`decompile-all --json` per function against it (`runner`, `metrics`), store
one SQLite row per (run, function, metric) (`db`) and read summaries, A/B
deltas and worst-function rankings back (`report`). Entry point:
`python3 -m scripts.quality <command>` from the repo root.
"""
