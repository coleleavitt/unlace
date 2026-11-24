# Xtensa

The base Xtensa module (`Xtensa:LE:32:default`, `Xtensa:BE:32:default`) is the vendored Ghidra
one. unlace adds the ESP32-S3 variant for #98.

## ESP32-S3 PIE (`Xtensa:LE:32:esp32s3`)

The Xtensa LX7 core of the Espressif ESP32-S3 with its Processor Instruction Extensions (the
`EE.*` vector, accumulator and FFT instructions). No prior SLEIGH description of them existed.

Sources: Espressif's LLVM description of the ESP32-S3 DSP instructions,
`llvm/lib/Target/Xtensa/XtensaS3DSPInstrInfo.td` (Apache-2.0 with LLVM exception, branch
`release/esp_23.x`) for the encodings and operand fields, its `XtensaOperands.td` for the
immediate ranges and scales, and its disassembler for the length rule (24-bit TIE words have
op0 bit 3 clear, 32-bit ones set); the ESP32-S3 Technical Reference Manual (chapter
"Processor Instruction Extensions") for the register file and the operations.
`xtensa_esp32s3_pie.sinc` and `xtensa_esp32s3_pie_defs.sinc` were generated from the
TableGen file: one constructor per instruction (213: 124 24-bit, 89 32-bit) and one operand
table per field layout.

Modelled:
- `q0`..`q7` (128-bit), `ACCX`, `QACC_H`, `QACC_L`, `UA_STATE`, `SAR_BYTE`, `FFT_BIT_WIDTH`.
- Exact: `EE.ANDQ`, `EE.ORQ`, `EE.XORQ`, `EE.NOTQ`, `EE.ZERO.Q`/`.ACCX`/`.QACC`,
  `EE.MOVI.32.A`/`.Q`, `EE.VLD.128`, `EE.VST.128`, `EE.VLD.H/L.64`, `EE.VST.H/L.64`,
  `EE.LDF.64/128`, `EE.STF.64/128` (addresses rounded down to the access size), and every
  address-register update: `.IP` adds the scaled immediate, `.XP` adds `ad`, `.INCP` adds 16,
  `.DECP` subtracts 16; the load and store halves of the fused `.LD.*`/`.ST.*` forms.
- The vector arithmetic, compares, multiply-accumulates, shifts, zips, FFT butterflies and the
  accumulator/state loads and stores are named p-code operations (`ee_vadds_s8`, ...) over their
  register operands, writing each output register (and the accumulator they update).

Gaps:
- Saturation and lane semantics of the named operations are not expanded into p-code.
- The PIE state registers are separate from the `user` registers RUR/WUR name.
- The variant drops the generic `cust0`/`cust1` and FLIX placeholders, whose encodings PIE
  occupies.
- Cadence HiFi 2/3/4/5 audio-DSP instructions are not covered: their encodings are per-core
  generated TIE/FLIX tables with no public description.

Checked: every one of the 213 encodings, with random operand values over five passes,
disassembles to its own mnemonic and length; the CLI test images (base instructions from
`llvm-mc`, EE words encoded from the TableGen fields) decompile to the expected loop.
