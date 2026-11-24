#!/bin/sh
# Regenerate the GFX12 (RDNA 4) AMDGPU spec, its includes and the wave64 spec from the GFX11 spec
# and LLVM's disassembler (llvm-objdump/llvm-mc 22 on PATH). Run from the repository root.
set -e
L=specs/Ghidra/Processors/AMDGPU/data/languages
T=$(mktemp -d)
python3 -I tools/amdgpu_gfx12_probe.py map > "$T/map.txt"
python3 -I tools/amdgpu_gfx12_probe.py mem > "$T/mem.txt"
python3 -I tools/amdgpu_gfx12_probe.py image > "$T/image.txt"
python3 -I tools/amdgpu_gfx12_probe.py wmma > "$T/wmma.txt"
python3 -I tools/gen_amdgpu_gfx12.py $L/amdgcn_gfx11.slaspec "$T/map.txt" > $L/amdgcn_gfx12.slaspec
python3 -I tools/amdgpu_gfx11_probe.py vop3 $L/amdgcn_gfx12.slaspec gfx1200 > "$T/vop3.txt"
python3 -I tools/amdgpu_gfx11_probe.py e32 gfx1200 > "$T/e32.txt"
python3 -I tools/gen_amdgpu_gfx11_valu.py "$T/vop3.txt" "$T/e32.txt" $L/amdgcn_gfx12.slaspec > $L/amdgcn_gfx12_valu.sinc
python3 -I tools/gen_amdgpu_gfx11_vop3p.py --gfx12 "$T/wmma.txt" $L/amdgcn_gfx12.slaspec $L/amdgcn_gfx12_valu.sinc > $L/amdgcn_gfx12_vop3p.sinc
python3 -I tools/gen_amdgpu_gfx12_mem.py "$T/mem.txt" "$T/image.txt" $L/amdgcn_gfx12.slaspec $L/amdgcn_gfx12_valu.sinc $L/amdgcn_gfx12_vop3p.sinc > $L/amdgcn_gfx12_mem.sinc
python3 -I tools/gen_amdgpu_wave64.py $L/amdgcn_gfx12.slaspec > $L/amdgcn_gfx12_w64.slaspec
rm -r "$T"
