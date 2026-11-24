# NVIDIA GPU SASS

Vendored from aleph-void/Ghidra-Rare (https://github.com/aleph-void/Ghidra-Rare),
module `SASS`, commit 87cc554e33eb02b95dad6fe8fd945606d10bc301, MIT License (`LICENSE` is the repository's).
`data/languages` hold the upstream files unchanged; the module's Java
loaders, generators and test harnesses are not vendored (see the upstream module README for
how its decode and semantics were checked).

Languages: `SASS:LE:64:SM35`, `SASS:LE:64:SM52`, `SASS:LE:64:SM60`, `SASS:LE:64:SM70`, `SASS:LE:64:SM75`, `SASS:LE:64:SM80`, `SASS:LE:64:SM86`, `SASS:LE:64:SM89`, `SASS:LE:64:SM90`, `SASS:LE:64:SM100`, `SASS:LE:64:SM120`.

## Local changes

- `CALL.ABS` with an immediate target lifts as a call: it sets `RETPC` to the next
  instruction and calls the immediate address. Before this change it was the opaque
  `sass_CALL()` op, so a ptxas device-function call (`CALL.ABS.NOINC`) lost its arguments,
  return value and target.
  - This covers the immediate forms in SM70 to SM120.
  - The register and constant-bank forms stay `sass_CALL()`.
  - SM35 to SM60 have no immediate `CALL.ABS` form.
  - Checked against a ptxas 13 `sm_80` cubin of the real-code sweep corpus
    (`notes/real-code-sweep.md`): `caller` now shows both of its calls with their arguments and
    results. The targets read 0 because the loader does not apply the cubin's CUDA relocations.
