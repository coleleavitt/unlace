#!/bin/sh
# Regenerate the GFX9 spec's generated includes (the VOP3/VOPC/VOP1/VOP2 forms its constructors
# lack, VOP3P, and the SDWA/DPP forms) from LLVM's disassembler (llvm-objdump 22 on PATH); then run
# tools/regen_amdgpu_cdna.sh, whose specs are derived from GFX9. Run from the repository root.
set -e
L=specs/Ghidra/Processors/AMDGPU/data/languages
T=$(mktemp -d)
python3 -I tools/amdgpu_cdna_probe.py vop3 $L/amdgcn_gfx9.slaspec gfx900 > "$T/vop3.txt"
python3 -I tools/amdgpu_cdna_probe.py e32 $L/amdgcn_gfx9.slaspec gfx900 > "$T/e32.txt"
python3 -I tools/gen_amdgpu_gfx11_valu.py --gfx9 "$T/vop3.txt" "$T/e32.txt" $L/amdgcn_gfx9.slaspec > $L/amdgcn_gfx9_valu.sinc
python3 -I tools/gen_amdgpu_gfx11_vop3p.py --gfx9 $L/amdgcn_gfx9.slaspec $L/amdgcn_gfx9_valu.sinc > $L/amdgcn_gfx9_vop3p.sinc
python3 -I tools/gen_amdgpu_gfx9_dpp.py $L/amdgcn_gfx9.slaspec $L/amdgcn_gfx9_valu.sinc $L/amdgcn_gfx9_vop3p.sinc > $L/amdgcn_gfx9_dpp.sinc
rm -r "$T"
