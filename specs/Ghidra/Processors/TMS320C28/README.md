# TMS320C28x (C2000)

Vendored from mwdmwd/ghidra-c28x (https://github.com/mwdmwd/ghidra-c28x),
commit 7fee54864fc6e6498266ef228eff9aa9df770308, Apache License 2.0 (`LICENSE.txt`, copied from upstream;
`data/languages/NOTICE` is upstream's, crediting the corrections taken from
outlandnish/ghidra-tms320c28x, also Apache-2.0). `data/languages` holds the
upstream SLEIGH, processor, compiler and ELF opinion files unchanged; upstream's
test programs, validation assembly and Ghidra scripts are not vendored.

`tms320c28:LE:32:default` covers the C28x CPU and the FPU32 extension
(`tms320c28_fpu.sinc`). RAM is word-addressed (16-bit words); the ELF opinion
maps e_machine 141 (EM_TI_C2000). Several decode-context bits (`switch_canonical`,
`ffc_return`, `subcul_div32`, ...) are set by upstream's Ghidra analyzers, which
are not part of this port; they default to 0, the conservative reading.
