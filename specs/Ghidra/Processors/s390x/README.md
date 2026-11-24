# IBM z/Architecture (s390x)

SLEIGH processor module for 64-bit Linux on IBM Z. Language id
`s390x:BE:64:default`, selected for an `EM_S390` ELF of the 64-bit class.

## What is modelled

- The general instructions of the z/Architecture through the z15 facilities:
  RR, RRE, RRF, RX, RXY, RS, RSY, RI, RIL, RIE, RIS, RRS, SI, SIY, SIL and SS
  formats, including the high-word facility, the z14 multiply-with-CC and z15
  logical-with-complement instructions, compare double and swap and the
  quadword pair loads and stores.
- Binary floating point on `f0`-`f15`: short and long, and extended values in
  the register pairs `fN`:`fN+2`, including `TEST DATA CLASS`.

The encodings of the high-word, z14/z15, pair and test-data-class rows were
taken from the binutils `s390-opc.txt` table (opcode and format only), and
`tools/difffuzz --arch s390x --oracle qemu` checks the p-code against
`qemu-s390x -cpu max`.
- The s390x ELF ABI in `s390x.cspec`.

- The vector facility (opcodes `E7` and `E6`, through vector-enhancements 3 and the
  vector packed-decimal facilities), written by `gen_vector.py` into `s390x_vector.sinc`
  (below).

- Hexadecimal floating point, packed decimal, decimal floating point and the remaining
  translate and storage-to-storage instructions, written by `gen_hfpdec.py` into
  `s390x_hfpdec.sinc` (below).

Every instruction of LLVM's SystemZ target decodes (a survey of three encodings per record
against `llvm-objdump --mcpu=z16`); the privileged, system, transactional-execution, crypto
and guarded-storage instructions are user operations.

## How the files are produced

`gen_sinc.py` holds the opcode tables and writes the four `s390x_*.sinc`
files, which are committed:

```sh
python3 gen_sinc.py data/languages
slacomp data/languages/s390x.slaspec
```

## The vector facility

`vector_insts.json` lists every non-pseudo `E6`/`E7` instruction of LLVM's SystemZ target
(mnemonic, operands, and the 48 encoding bits), extracted from the TableGen records of LLVM
release/22.x (Apache-2.0 with LLVM exceptions) with
`llvm-tblgen -dump-json -I llvm/include -I llvm/lib/Target/SystemZ SystemZ.td` and
`python3 gen_vector.py --extract dump.json`. `gen_vector.py data/languages` writes
`s390x_vector.sinc` and `vector_fields.txt` (the token fields it uses), which
`gen_sinc.py` adds to the 48-bit token, so run it first. `v0`-`v31` are the vector
registers; `f0`-`f31` and `f0s`-`f31s` name the leftmost doubleword and word, which the
scalar (W) forms read and write. A register field is four bits plus its RXB bit.

Exact p-code: moves, inserts and extracts (`vlr`, `vlvg*`, `vlgv*`, `vlvgp`, `vgbm`,
`vzero`/`vone`, `vrep*`, `vgm*`, `vmrh*`/`vmrl*`, `vpdi`, `vsel`, `vpk*`, `vup*`), the
logical operations, lane add/subtract/multiply-low/min/max/complement/positive, the element
compares with their condition code, the element and whole-register shifts and rotates, the
loads and stores (`vl`, `vst`, `vlrep*`, `vle*`, `vste*`, `vlei*`, `vllez*`, and the
z15 element-reversed and byte-reversed forms), and binary floating point: add, subtract,
multiply, divide, square root, multiply-and-add (rounded twice), sign operations,
compares (`wfc`/`wfk` set the condition code), `vftci`/`wftci`, lengthening and
rounding conversions, the integer conversions, and `vfi`/`wfi` for rounding modes 1, 5,
6 and 7 (6 and 7 only for the vector forms). An integer-to-float conversion rounds to
nearest whatever its mode; a float-to-integer conversion is exact for modes 1, 5, 6 and 7
and a user operation otherwise. Every other instruction (string search, Galois-field and
multiply-high forms, checksums, packed decimal, NNPA, `vfmax`/`vfmin`, gathers and
scatters, `vlm`/`vstm`, ...) is a user operation `vec_<mnemonic>` over its operands, with
`vec_<mnemonic>_cc` for its condition code.

## The condition code

The 2-bit condition code is one-hot in `CC0`..`CC3`: `CCn` is set exactly when
the condition code is `n`. `CCA` ("2 or 3") and `CCB` ("1 or 3") repeat that
state for the two-code masks; every instruction that sets the condition code
sets all six. A branch mask is a boolean over the flags, chosen so the branch
after a compare, a test or a logical add is one relation.

## Approximations

- `MVC`/`CLC`/`NC`/`OC`/`XC` of 1, 2, 4 or 8 bytes are one access of that
  width. An overlapping `MVC` of those lengths (the byte-propagation idiom) is
  therefore read as a plain copy. Other lengths are the user operations `mvc`,
  `clc`, `storage_and`, `storage_or` and `storage_xor`.
- `SRST`, `CLST` and `MVST` are the user operations `search_string`,
  `compare_string` and `move_string` and always complete; `CLST` does not
  advance its two address registers.
- `EX` and `EXRL` are the user operation `execute(register, target)`.
- A floating-point to fixed conversion sets the condition code from its
  operand; condition code 3 is set for a NaN but not for a value out of range,
  and an out-of-range value is not saturated.
- Multiply-and-add and multiply-and-subtract (`MADBR`, `MAEBR`, ...) are a
  multiply followed by an add, so the intermediate product is rounded.
- `POPCNT` without the z15 mask is the user operation `popcount_bytes`.

## HFP, decimal and the remaining storage instructions

`hfpdec_insts.json` lists the LLVM SystemZ records (release/22.x) whose mnemonic is in
`gen_hfpdec.py`'s `WANT` set, extracted with `python3 gen_hfpdec.py --extract dump.json`
from the same TableGen dump as the vector facility; `mxr` and `mxd` (absent from LLVM) are
added in the generator. `gen_hfpdec.py data/languages` writes `s390x_hfpdec.sinc` and
`hfpdec_fields.txt` (the token fields it uses, read by `gen_sinc.py`), so run it before
`gen_sinc.py`. Operands follow the LLVM records: `D(X,B)`, `D(L,B)` (the displayed length is
the byte count), `D(R,B)` and 20-bit `DH:DL` displacements; an extended operand is the pair
`fN`:`fN+2`, a 128-bit general operand the pair `rN`:`rN+1`.

Exact p-code: the HFP sign operations `lpdr`, `lper`, `lndr`, `lner`, `lcdr`, `lcer`,
`ltdr`, `lter` (CC 0 for a zero fraction, 1 negative, 2 positive); `ts`; `mdebr`/`mdeb`;
`madb`, `maeb`, `msdb`, `mseb` (rounded twice); `mxdb`; `bsm`/`bassm` in the 64-bit
addressing mode. Everything else (HFP arithmetic, rounding, conversions and halving; the
packed-decimal and DFP instructions; translate, edit, `plo`, `mvcle`, `cmpsc`, the Unicode
conversions) is the user operation `hd_<mnemonic>`, plus `hd_<mnemonic>_cc` for the
condition code. QEMU 10 implements neither HFP nor `bsm`/`bassm`, so only `ts` and the BFP
rows were checked with `tools/difffuzz --oracle qemu` (no mismatch beyond the rounded-twice
`maeb`).

### Crypto, system and condition-mask instructions

The same generator covers the CPACF instructions (`km`, `kmc`, `kmctr`, `kma`, `kmo`, `kmf`,
`kimd`, `klmd`, `kmac`, `kdsa`, `pcc`, `prno`, `pckmo`, `cksm`, `dfltcc`, `sortl`, `nnpa`), the
privileged and system instructions (`lctl`/`lctlg`/`stctl`/`stctg` on `c0`-`c15`, `lpsw`/`lpswe`,
`ssm`, `stnsm`/`stosm`, `sigp`, the channel-subsystem, clock, storage-key, DAT and
interrupt-handling instructions, `diag`, `sie`), transactional execution, guarded storage,
access-register moves (`lam`, `stam`, `ear`-family), `mvcl`/`clcl` and the Unicode
conversions. Their user operations take the register operands and the implicit registers of
the LLVM record (CPACF reads `r0l` and `r1`) and write every output register, so the pairs a
CPACF instruction advances (address and length) are redefined. Exact: `lpsw`/`lpswe`/`lpswey`
return to the new PSW's address (the PSW switch itself is `hd_lpsw*`), `lzrg`, `lzrf`,
`llzrgf`, `lpd`, `lpdg` (condition code 0), `lfpc`, `stfpc`, `srnm`, `srnmb`, `srnmt`.

`MASKED` lists the condition-mask records whose masks the hand-written rows leave out:
masks 0 and 15 of `loc`/`locg`/`locr`/`locgr`/`locfhr`/`lochi`/`locghi`/`lochhi`/`stoc`/
`stocg` and the selects, masks 0, 1, 14 and 15 of the compare-and-trap instructions (whose
rows test only the three high mask bits), every mask of `locfh`, `stocfh`, `clt` and `clgt`,
and `bic` with mask 0. Each mask is its own constructor with the extended mnemonic `objdump`
prints, and exact p-code (mask 0: no effect; mask 15: unconditional).
