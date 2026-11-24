#!/bin/sh
# Regenerate the CDNA AMDGPU specs (gfx90a, gfx942) and their includes from the GFX9 spec and
# LLVM's disassembler (llvm-objdump 22 on PATH). Run from the repository root.
set -e
L=specs/Ghidra/Processors/AMDGPU/data/languages
T=$(mktemp -d)
for c in gfx90a gfx942; do
  python3 -I tools/amdgpu_cdna_probe.py map $c > "$T/map_$c.txt"
  python3 -I tools/amdgpu_cdna_probe.py mfma $c > "$T/mfma_$c.txt"
  python3 -I tools/gen_amdgpu_cdna.py $L/amdgcn_gfx9.slaspec "$T/map_$c.txt" "$T/mfma_$c.txt" $c $L/amdgcn_${c}_cdna.sinc > $L/amdgcn_$c.slaspec
done
rm -r "$T"
