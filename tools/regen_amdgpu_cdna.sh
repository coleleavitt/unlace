#!/bin/sh
# Regenerate the CDNA AMDGPU specs (gfx90a, gfx942) and their includes from the GFX9 spec and
# LLVM's disassembler (llvm-objdump 22 on PATH). Run from the repository root.
set -e
L=specs/Ghidra/Processors/AMDGPU/data/languages
T=$(mktemp -d)
python3 -I tools/amdgpu_cdna_probe.py mimg9 gfx90a > "$T/mimg9.txt"
python3 -I tools/amdgpu_cdna_probe.py mtbuf9 gfx90a > "$T/mtbuf9.txt"
python3 -I tools/gen_amdgpu_gfx9_mem.py --cdna "$T/mimg9.txt" "$T/mtbuf9.txt" $L/amdgcn_gfx9.slaspec $L/amdgcn_gfx9_valu.sinc $L/amdgcn_gfx9_vop3p.sinc $L/amdgcn_gfx9_dpp.sinc > $L/amdgcn_cdna_mem.sinc
for c in gfx90a gfx942; do
  python3 -I tools/amdgpu_cdna_probe.py map $c > "$T/map_$c.txt"
  python3 -I tools/amdgpu_cdna_probe.py mfma $c > "$T/mfma_$c.txt"
  python3 -I tools/gen_amdgpu_cdna.py $L/amdgcn_gfx9.slaspec "$T/map_$c.txt" "$T/mfma_$c.txt" $c $L/amdgcn_${c}_cdna.sinc > $L/amdgcn_$c.slaspec
done
rm -r "$T"
