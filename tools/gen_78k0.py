#!/usr/bin/env python3
"""Generate the NEC 78K/0 and 78K/0S SLEIGH specs (specs/Ghidra/Processors/78K0/data/languages).

Usage: gen_78k0.py [<out-dir>]

Each row below is one line of the "Instruction code list" in NEC's 78K/0 Series Instructions
user's manual (U12326E, 4.2.2) or 78K/0S Series Instructions user's manual (U11047E): mnemonic,
operands, the operation-code bits (B1, B2, ...), and the operand bytes that follow. The generator
turns each into one constructor; the semantics come from the instruction pages of the same
manuals and are written per mnemonic below. Rows marked by a manual note ("except r = A", "only
when rp = BC, DE or HL") are expanded to the register values they allow.
"""
import re
import sys
from pathlib import Path

ROWS_78K0 = r"""
MOV    r,#byte              1 0 1 0 0 R2 R1 R0                                 | Data
MOV    saddr,#byte          0 0 0 1 0 0 0 1                                    | Saddr-offset Data
MOV    sfr,#byte            0 0 0 1 0 0 1 1                                    | Sfr-offset Data
MOV    A,r                  0 1 1 0 0 R2 R1 R0                                 | 
MOV    r,A                  0 1 1 1 0 R2 R1 R0                                 | 
MOV    A,saddr              1 1 1 1 0 0 0 0                                    | Saddr-offset
MOV    saddr,A              1 1 1 1 0 0 1 0                                    | Saddr-offset
MOV    A,sfr                1 1 1 1 0 1 0 0                                    | Sfr-offset
MOV    sfr,A                1 1 1 1 0 1 1 0                                    | Sfr-offset
MOV    A,!addr16            1 0 0 0 1 1 1 0                                    | Low addr High addr
MOV    !addr16,A            1 0 0 1 1 1 1 0                                    | Low addr High addr
MOV    PSW,#byte            0 0 0 1 0 0 0 1 0 0 0 1 1 1 1 0                    | Data
MOV    A,PSW                1 1 1 1 0 0 0 0 0 0 0 1 1 1 1 0                    | 
MOV    PSW,A                1 1 1 1 0 0 1 0 0 0 0 1 1 1 1 0                    | 
MOV    A,[DE]               1 0 0 0 0 1 0 1                                    | 
MOV    [DE],A               1 0 0 1 0 1 0 1                                    | 
MOV    A,[HL]               1 0 0 0 0 1 1 1                                    | 
MOV    [HL],A               1 0 0 1 0 1 1 1                                    | 
MOV    A,[HL+byte]          1 0 1 0 1 1 1 0                                    | Data
MOV    [HL+byte],A          1 0 1 1 1 1 1 0                                    | Data
MOV    A,[HL+B]             1 0 1 0 1 0 1 1                                    | 
MOV    [HL+B],A             1 0 1 1 1 0 1 1                                    | 
MOV    A,[HL+C]             1 0 1 0 1 0 1 0                                    | 
MOV    [HL+C],A             1 0 1 1 1 0 1 0                                    | 
XCH    A,r                  0 0 1 1 0 R2 R1 R0                                 | 
XCH    A,saddr              1 0 0 0 0 0 1 1                                    | Saddr-offset
XCH    A,sfr                1 0 0 1 0 0 1 1                                    | Sfr-offset
XCH    A,!addr16            1 1 0 0 1 1 1 0                                    | Low addr High addr
XCH    A,[DE]               0 0 0 0 0 1 0 1                                    | 
XCH    A,[HL]               0 0 0 0 0 1 1 1                                    | 
XCH    A,[HL+byte]          1 1 0 1 1 1 1 0                                    | Data
XCH    A,[HL+B]             0 0 1 1 0 0 0 1 1 0 0 0 1 0 1 1                    | 
XCH    A,[HL+C]             0 0 1 1 0 0 0 1 1 0 0 0 1 0 1 0                    | 
MOVW   rp,#word             0 0 0 1 0 P1 P0 0                                  | Low byte High byte
MOVW   saddrp,#word         1 1 1 0 1 1 1 0                                    | Saddr-offset Low byte High byte
MOVW   sfrp,#word           1 1 1 1 1 1 1 0                                    | Sfr-offset Low byte High byte
MOVW   AX,saddrp            1 0 0 0 1 0 0 1                                    | Saddr-offset
MOVW   saddrp,AX            1 0 0 1 1 0 0 1                                    | Saddr-offset
MOVW   AX,sfrp              1 0 1 0 1 0 0 1                                    | Sfr-offset
MOVW   sfrp,AX              1 0 1 1 1 0 0 1                                    | Sfr-offset
MOVW   AX,rp                1 1 0 0 0 P1 P0 0                                  | 
MOVW   rp,AX                1 1 0 1 0 P1 P0 0                                  | 
MOVW   AX,!addr16           0 0 0 0 0 0 1 0                                    | Low addr High addr
MOVW   !addr16,AX           0 0 0 0 0 0 1 1                                    | Low addr High addr
XCHW   AX,rp                1 1 1 0 0 P1 P0 0                                  | 
ADD    A,#byte              0 0 0 0 1 1 0 1                                    | Data
ADD    saddr,#byte          1 0 0 0 1 0 0 0                                    | Saddr-offset Data
ADD    A,r                  0 1 1 0 0 0 0 1 0 0 0 0 1 R2 R1 R0                 | 
ADD    r,A                  0 1 1 0 0 0 0 1 0 0 0 0 0 R2 R1 R0                 | 
ADD    A,saddr              0 0 0 0 1 1 1 0                                    | Saddr-offset
ADD    A,!addr16            0 0 0 0 1 0 0 0                                    | Low addr High addr
ADD    A,[HL]               0 0 0 0 1 1 1 1                                    | 
ADD    A,[HL+byte]          0 0 0 0 1 0 0 1                                    | Data
ADD    A,[HL+B]             0 0 1 1 0 0 0 1 0 0 0 0 1 0 1 1                    | 
ADD    A,[HL+C]             0 0 1 1 0 0 0 1 0 0 0 0 1 0 1 0                    | 
ADDC   A,#byte              0 0 1 0 1 1 0 1                                    | Data
ADDC   saddr,#byte          1 0 1 0 1 0 0 0                                    | Saddr-offset Data
ADDC   A,r                  0 1 1 0 0 0 0 1 0 0 1 0 1 R2 R1 R0                 | 
ADDC   r,A                  0 1 1 0 0 0 0 1 0 0 1 0 0 R2 R1 R0                 | 
ADDC   A,saddr              0 0 1 0 1 1 1 0                                    | Saddr-offset
ADDC   A,!addr16            0 0 1 0 1 0 0 0                                    | Low addr High addr
ADDC   A,[HL]               0 0 1 0 1 1 1 1                                    | 
ADDC   A,[HL+byte]          0 0 1 0 1 0 0 1                                    | Data
ADDC   A,[HL+B]             0 0 1 1 0 0 0 1 0 0 1 0 1 0 1 1                    | 
ADDC   A,[HL+C]             0 0 1 1 0 0 0 1 0 0 1 0 1 0 1 0                    | 
SUB    A,#byte              0 0 0 1 1 1 0 1                                    | Data
SUB    saddr,#byte          1 0 0 1 1 0 0 0                                    | Saddr-offset Data
SUB    A,r                  0 1 1 0 0 0 0 1 0 0 0 1 1 R2 R1 R0                 | 
SUB    r,A                  0 1 1 0 0 0 0 1 0 0 0 1 0 R2 R1 R0                 | 
SUB    A,saddr              0 0 0 1 1 1 1 0                                    | Saddr-offset
SUB    A,!addr16            0 0 0 1 1 0 0 0                                    | Low addr High addr
SUB    A,[HL]               0 0 0 1 1 1 1 1                                    | 
SUB    A,[HL+byte]          0 0 0 1 1 0 0 1                                    | Data
SUB    A,[HL+B]             0 0 1 1 0 0 0 1 0 0 0 1 1 0 1 1                    | 
SUB    A,[HL+C]             0 0 1 1 0 0 0 1 0 0 0 1 1 0 1 0                    | 
SUBC   A,#byte              0 0 1 1 1 1 0 1                                    | Data
SUBC   saddr,#byte          1 0 1 1 1 0 0 0                                    | Saddr-offset Data
SUBC   A,r                  0 1 1 0 0 0 0 1 0 0 1 1 1 R2 R1 R0                 | 
SUBC   r,A                  0 1 1 0 0 0 0 1 0 0 1 1 0 R2 R1 R0                 | 
SUBC   A,saddr              0 0 1 1 1 1 1 0                                    | Saddr-offset
SUBC   A,!addr16            0 0 1 1 1 0 0 0                                    | Low addr High addr
SUBC   A,[HL]               0 0 1 1 1 1 1 1                                    | 
SUBC   A,[HL+byte]          0 0 1 1 1 0 0 1                                    | Data
SUBC   A,[HL+B]             0 0 1 1 0 0 0 1 0 0 1 1 1 0 1 1                    | 
SUBC   A,[HL+C]             0 0 1 1 0 0 0 1 0 0 1 1 1 0 1 0                    | 
AND    A,#byte              0 1 0 1 1 1 0 1                                    | Data
AND    saddr,#byte          1 1 0 1 1 0 0 0                                    | Saddr-offset Data
AND    A,r                  0 1 1 0 0 0 0 1 0 1 0 1 1 R2 R1 R0                 | 
AND    r,A                  0 1 1 0 0 0 0 1 0 1 0 1 0 R2 R1 R0                 | 
AND    A,saddr              0 1 0 1 1 1 1 0                                    | Saddr-offset
AND    A,!addr16            0 1 0 1 1 0 0 0                                    | Low addr High addr
AND    A,[HL]               0 1 0 1 1 1 1 1                                    | 
AND    A,[HL+byte]          0 1 0 1 1 0 0 1                                    | Data
AND    A,[HL+B]             0 0 1 1 0 0 0 1 0 1 0 1 1 0 1 1                    | 
AND    A,[HL+C]             0 0 1 1 0 0 0 1 0 1 0 1 1 0 1 0                    | 
OR     A,#byte              0 1 1 0 1 1 0 1                                    | Data
OR     saddr,#byte          1 1 1 0 1 0 0 0                                    | Saddr-offset Data
OR     A,r                  0 1 1 0 0 0 0 1 0 1 1 0 1 R2 R1 R0                 | 
OR     r,A                  0 1 1 0 0 0 0 1 0 1 1 0 0 R2 R1 R0                 | 
OR     A,saddr              0 1 1 0 1 1 1 0                                    | Saddr-offset
OR     A,!addr16            0 1 1 0 1 0 0 0                                    | Low addr High addr
OR     A,[HL]               0 1 1 0 1 1 1 1                                    | 
OR     A,[HL+byte]          0 1 1 0 1 0 0 1                                    | Data
OR     A,[HL+B]             0 0 1 1 0 0 0 1 0 1 1 0 1 0 1 1                    | 
OR     A,[HL+C]             0 0 1 1 0 0 0 1 0 1 1 0 1 0 1 0                    | 
XOR    A,#byte              0 1 1 1 1 1 0 1                                    | Data
XOR    saddr,#byte          1 1 1 1 1 0 0 0                                    | Saddr-offset Data
XOR    A,r                  0 1 1 0 0 0 0 1 0 1 1 1 1 R2 R1 R0                 | 
XOR    r,A                  0 1 1 0 0 0 0 1 0 1 1 1 0 R2 R1 R0                 | 
XOR    A,saddr              0 1 1 1 1 1 1 0                                    | Saddr-offset
XOR    A,!addr16            0 1 1 1 1 0 0 0                                    | Low addr High addr
XOR    A,[HL]               0 1 1 1 1 1 1 1                                    | 
XOR    A,[HL+byte]          0 1 1 1 1 0 0 1                                    | Data
XOR    A,[HL+B]             0 0 1 1 0 0 0 1 0 1 1 1 1 0 1 1                    | 
XOR    A,[HL+C]             0 0 1 1 0 0 0 1 0 1 1 1 1 0 1 0                    | 
CMP    A,#byte              0 1 0 0 1 1 0 1                                    | Data
CMP    saddr,#byte          1 1 0 0 1 0 0 0                                    | Saddr-offset Data
CMP    A,r                  0 1 1 0 0 0 0 1 0 1 0 0 1 R2 R1 R0                 | 
CMP    r,A                  0 1 1 0 0 0 0 1 0 1 0 0 0 R2 R1 R0                 | 
CMP    A,saddr              0 1 0 0 1 1 1 0                                    | Saddr-offset
CMP    A,!addr16            0 1 0 0 1 0 0 0                                    | Low addr High addr
CMP    A,[HL]               0 1 0 0 1 1 1 1                                    | 
CMP    A,[HL+byte]          0 1 0 0 1 0 0 1                                    | Data
CMP    A,[HL+B]             0 0 1 1 0 0 0 1 0 1 0 0 1 0 1 1                    | 
CMP    A,[HL+C]             0 0 1 1 0 0 0 1 0 1 0 0 1 0 1 0                    | 
ADDW   AX,#word             1 1 0 0 1 0 1 0                                    | Low byte High byte
SUBW   AX,#word             1 1 0 1 1 0 1 0                                    | Low byte High byte
CMPW   AX,#word             1 1 1 0 1 0 1 0                                    | Low byte High byte
MULU   X                    0 0 1 1 0 0 0 1 1 0 0 0 1 0 0 0                    | 
DIVUW  C                    0 0 1 1 0 0 0 1 1 0 0 0 0 0 1 0                    | 
INC    r                    0 1 0 0 0 R2 R1 R0                                 | 
INC    saddr                1 0 0 0 0 0 0 1                                    | Saddr-offset
DEC    r                    0 1 0 1 0 R2 R1 R0                                 | 
DEC    saddr                1 0 0 1 0 0 0 1                                    | Saddr-offset
INCW   rp                   1 0 0 0 0 P1 P0 0                                  | 
DECW   rp                   1 0 0 1 0 P1 P0 0                                  | 
ROR    A,1                  0 0 1 0 0 1 0 0                                    | 
ROL    A,1                  0 0 1 0 0 1 1 0                                    | 
RORC   A,1                  0 0 1 0 0 1 0 1                                    | 
ROLC   A,1                  0 0 1 0 0 1 1 1                                    | 
ROR4   [HL]                 0 0 1 1 0 0 0 1 1 0 0 1 0 0 0 0                    | 
ROL4   [HL]                 0 0 1 1 0 0 0 1 1 0 0 0 0 0 0 0                    | 
ADJBA                       0 1 1 0 0 0 0 1 1 0 0 0 0 0 0 0                    | 
ADJBS                       0 1 1 0 0 0 0 1 1 0 0 1 0 0 0 0                    | 
MOV1   CY,saddr.bit         0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 0 0                 | Saddr-offset
MOV1   CY,sfr.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 1 1 0 0                 | Sfr-offset
MOV1   CY,A.bit             0 1 1 0 0 0 0 1 1 B2 B1 B0 1 1 0 0                 | 
MOV1   CY,PSW.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 0 0 0 0 0 1 1 1 1 0 | 
MOV1   CY,[HL].bit          0 1 1 1 0 0 0 1 1 B2 B1 B0 0 1 0 0                 | 
MOV1   saddr.bit,CY         0 1 1 1 0 0 0 1 0 B2 B1 B0 0 0 0 1                 | Saddr-offset
MOV1   sfr.bit,CY           0 1 1 1 0 0 0 1 0 B2 B1 B0 1 0 0 1                 | Sfr-offset
MOV1   A.bit,CY             0 1 1 0 0 0 0 1 1 B2 B1 B0 1 0 0 1                 | 
MOV1   PSW.bit,CY           0 1 1 1 0 0 0 1 0 B2 B1 B0 0 0 0 1 0 0 0 1 1 1 1 0 | 
MOV1   [HL].bit,CY          0 1 1 1 0 0 0 1 1 B2 B1 B0 0 0 0 1                 | 
AND1   CY,saddr.bit         0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 0 1                 | Saddr-offset
AND1   CY,sfr.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 1 1 0 1                 | Sfr-offset
AND1   CY,A.bit             0 1 1 0 0 0 0 1 1 B2 B1 B0 1 1 0 1                 | 
AND1   CY,PSW.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 0 1 0 0 0 1 1 1 1 0 | 
AND1   CY,[HL].bit          0 1 1 1 0 0 0 1 1 B2 B1 B0 0 1 0 1                 | 
OR1    CY,saddr.bit         0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 0                 | Saddr-offset
OR1    CY,sfr.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 1 1 1 0                 | Sfr-offset
OR1    CY,A.bit             0 1 1 0 0 0 0 1 1 B2 B1 B0 1 1 1 0                 | 
OR1    CY,PSW.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 0 0 0 0 1 1 1 1 0 | 
OR1    CY,[HL].bit          0 1 1 1 0 0 0 1 1 B2 B1 B0 0 1 1 0                 | 
XOR1   CY,saddr.bit         0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 1                 | Saddr-offset
XOR1   CY,sfr.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 1 1 1 1                 | Sfr-offset
XOR1   CY,A.bit             0 1 1 0 0 0 0 1 1 B2 B1 B0 1 1 1 1                 | 
XOR1   CY,PSW.bit           0 1 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 1 0 0 0 1 1 1 1 0 | 
XOR1   CY,[HL].bit          0 1 1 1 0 0 0 1 1 B2 B1 B0 0 1 1 1                 | 
SET1   saddr.bit            0 B2 B1 B0 1 0 1 0                                 | Saddr-offset
SET1   sfr.bit              0 1 1 1 0 0 0 1 0 B2 B1 B0 1 0 1 0                 | Sfr-offset
SET1   A.bit                0 1 1 0 0 0 0 1 1 B2 B1 B0 1 0 1 0                 | 
SET1   PSW.bit              0 B2 B1 B0 1 0 1 0 0 0 0 1 1 1 1 0                 | 
SET1   [HL].bit             0 1 1 1 0 0 0 1 1 B2 B1 B0 0 0 1 0                 | 
CLR1   saddr.bit            0 B2 B1 B0 1 0 1 1                                 | Saddr-offset
CLR1   sfr.bit              0 1 1 1 0 0 0 1 0 B2 B1 B0 1 0 1 1                 | Sfr-offset
CLR1   A.bit                0 1 1 0 0 0 0 1 1 B2 B1 B0 1 0 1 1                 | 
CLR1   PSW.bit              0 B2 B1 B0 1 0 1 1 0 0 0 1 1 1 1 0                 | 
CLR1   [HL].bit             0 1 1 1 0 0 0 1 1 B2 B1 B0 0 0 1 1                 | 
SET1   CY                   0 0 1 0 0 0 0 0                                    | 
CLR1   CY                   0 0 1 0 0 0 0 1                                    | 
NOT1   CY                   0 0 0 0 0 0 0 1                                    | 
CALL   !addr16              1 0 0 1 1 0 1 0                                    | Low addr High addr
CALLF  !addr11              0 fa10-8 1 1 0 0 fa7-0                             | 
CALLT  [addr5]              1 1 ta4-0 1                                        | 
BRK                         1 0 1 1 1 1 1 1                                    | 
RET                         1 0 1 0 1 1 1 1                                    | 
RETB                        1 0 0 1 1 1 1 1                                    | 
RETI                        1 0 0 0 1 1 1 1                                    | 
PUSH   PSW                  0 0 1 0 0 0 1 0                                    | 
PUSH   rp                   1 0 1 1 0 P1 P0 1                                  | 
POP    PSW                  0 0 1 0 0 0 1 1                                    | 
POP    rp                   1 0 1 1 0 P1 P0 0                                  | 
MOVW   SP,#word             1 1 1 0 1 1 1 0 0 0 0 1 1 1 0 0                    | Low byte High byte
MOVW   SP,AX                1 0 0 1 1 0 0 1 0 0 0 1 1 1 0 0                    | 
MOVW   AX,SP                1 0 0 0 1 0 0 1 0 0 0 1 1 1 0 0                    | 
BR     !addr16              1 0 0 1 1 0 1 1                                    | Low addr High addr
BR     $addr16              1 1 1 1 1 0 1 0                                    | jdisp
BR     AX                   0 0 1 1 0 0 0 1 1 0 0 1 1 0 0 0                    | 
BC     $addr16              1 0 0 0 1 1 0 1                                    | jdisp
BNC    $addr16              1 0 0 1 1 1 0 1                                    | jdisp
BZ     $addr16              1 0 1 0 1 1 0 1                                    | jdisp
BNZ    $addr16              1 0 1 1 1 1 0 1                                    | jdisp
BT     saddr.bit,$addr16    1 B2 B1 B0 1 1 0 0                                 | Saddr-offset jdisp
BT     sfr.bit,$addr16      0 0 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 0                 | Sfr-offset jdisp
BT     A.bit,$addr16        0 0 1 1 0 0 0 1 0 B2 B1 B0 1 1 1 0                 | jdisp
BT     PSW.bit,$addr16      1 B2 B1 B0 1 1 0 0 0 0 0 1 1 1 1 0                 | jdisp
BT     [HL].bit,$addr16     0 0 1 1 0 0 0 1 1 B2 B1 B0 0 1 1 0                 | jdisp
BF     saddr.bit,$addr16    0 0 1 1 0 0 0 1 0 B2 B1 B0 0 0 1 1                 | Saddr-offset jdisp
BF     sfr.bit,$addr16      0 0 1 1 0 0 0 1 0 B2 B1 B0 0 1 1 1                 | Sfr-offset jdisp
BF     A.bit,$addr16        0 0 1 1 0 0 0 1 0 B2 B1 B0 1 1 1 1                 | jdisp
BF     PSW.bit,$addr16      0 0 1 1 0 0 0 1 0 B2 B1 B0 0 0 1 1 0 0 0 1 1 1 1 0 | jdisp
BF     [HL].bit,$addr16     0 0 1 1 0 0 0 1 1 B2 B1 B0 0 1 1 1                 | jdisp
BTCLR  saddr.bit,$addr16    0 0 1 1 0 0 0 1 0 B2 B1 B0 0 0 0 1                 | Saddr-offset jdisp
BTCLR  sfr.bit,$addr16      0 0 1 1 0 0 0 1 0 B2 B1 B0 0 1 0 1                 | Sfr-offset jdisp
BTCLR  A.bit,$addr16        0 0 1 1 0 0 0 1 0 B2 B1 B0 1 1 0 1                 | jdisp
BTCLR  PSW.bit,$addr16      0 0 1 1 0 0 0 1 0 B2 B1 B0 0 0 0 1 0 0 0 1 1 1 1 0 | jdisp
BTCLR  [HL].bit,$addr16     0 0 1 1 0 0 0 1 1 B2 B1 B0 0 1 0 1                 | jdisp
DBNZ   B,$addr16            1 0 0 0 1 0 1 1                                    | jdisp
DBNZ   C,$addr16            1 0 0 0 1 0 1 0                                    | jdisp
DBNZ   saddr,$addr16        0 0 0 0 0 1 0 0                                    | Saddr-offset jdisp
SEL    RBn                  0 1 1 0 0 0 0 1 1 1 RB1 1 RB0 0 0 0                | 
NOP                         0 0 0 0 0 0 0 0                                    | 
EI                          0 1 1 1 1 0 1 0 0 0 0 1 1 1 1 0                    | 
DI                          0 1 1 1 1 0 1 1 0 0 0 1 1 1 1 0                    | 
HALT                        0 1 1 1 0 0 0 1 0 0 0 1 0 0 0 0                    | 
STOP                        0 1 1 1 0 0 0 1 0 0 0 0 0 0 0 0                    | 
"""

ROWS_78K0S = r"""
MOV    r,#byte              0 0 0 0 1 0 1 0 1 1 1 1 R2 R1 R0 1                 | Data
MOV    saddr,#byte          1 1 1 1 0 1 0 1                                    | Saddr-offset Data
MOV    sfr,#byte            1 1 1 1 0 1 1 1                                    | Sfr-offset Data
MOV    A,r                  0 0 0 0 1 0 1 0 0 0 1 0 R2 R1 R0 1                 | 
MOV    r,A                  0 0 0 0 1 0 1 0 1 1 1 0 R2 R1 R0 1                 | 
MOV    A,saddr              0 0 1 0 0 1 0 1                                    | Saddr-offset
MOV    saddr,A              1 1 1 0 0 1 0 1                                    | Saddr-offset
MOV    A,sfr                0 0 1 0 0 1 1 1                                    | Sfr-offset
MOV    sfr,A                1 1 1 0 0 1 1 1                                    | Sfr-offset
MOV    A,!addr16            0 0 1 0 1 0 0 1                                    | Low addr High addr
MOV    !addr16,A            1 1 1 0 1 0 0 1                                    | Low addr High addr
MOV    PSW,#byte            1 1 1 1 0 1 0 1 0 0 0 1 1 1 1 0                    | Data
MOV    A,PSW                0 0 1 0 0 1 0 1 0 0 0 1 1 1 1 0                    | 
MOV    PSW,A                1 1 1 0 0 1 0 1 0 0 0 1 1 1 1 0                    | 
MOV    A,[DE]               0 0 1 0 1 0 1 1                                    | 
MOV    [DE],A               1 1 1 0 1 0 1 1                                    | 
MOV    A,[HL]               0 0 1 0 1 1 1 1                                    | 
MOV    [HL],A               1 1 1 0 1 1 1 1                                    | 
MOV    A,[HL+byte]                0 0 1 0 1 1 0 1                                    | Data
MOV    [HL+byte],A          1 1 1 0 1 1 0 1                                    | Data
XCH    A,X                  1 1 0 0 0 0 0 0                                    | 
XCH    A,r                  0 0 0 0 1 0 1 0 0 0 0 0 R2 R1 R0 1                 | 
XCH    A,saddr              0 0 0 0 0 1 0 1                                    | Saddr-offset
XCH    A,sfr                0 0 0 0 0 1 1 1                                    | Sfr-offset
XCH    A,[DE]               0 0 0 0 1 0 1 1                                    | 
XCH    A,[HL]               0 0 0 0 1 1 1 1                                    | 
XCH    A,[HL+byte]                0 0 0 0 1 1 0 1                                    | Data
MOVW   rp,#word             1 1 1 1 P1 P0 0 0                                  | Low byte High byte
MOVW   AX,saddrp            1 1 0 1 0 1 1 0                                    | Saddr-offset
MOVW   saddrp,AX            1 1 1 0 0 1 1 0                                    | Saddr-offset
MOVW   AX,rp                1 1 0 1 P1 P0 0 0                                  | 
MOVW   rp,AX                1 1 1 0 P1 P0 0 0                                  | 
XCHW   AX,rp                1 1 0 0 P1 P0 0 0                                  | 
ADD    A,#byte              1 0 0 0 0 0 1 1                                    | Data
ADD    saddr,#byte          1 0 0 0 0 0 0 1                                    | Saddr-offset Data
ADD    A,r                  0 0 0 0 1 0 1 0 1 0 0 0 R2 R1 R0 1                 | 
ADD    A,saddr              1 0 0 0 0 1 0 1                                    | Saddr-offset
ADD    A,!addr16            1 0 0 0 1 0 0 1                                    | Low addr High addr
ADD    A,[HL]               1 0 0 0 1 1 1 1                                    | 
ADD    A,[HL+byte]                1 0 0 0 1 1 0 1                                    | Data
ADDC   A,#byte              1 0 1 0 0 0 1 1                                    | Data
ADDC   saddr,#byte          1 0 1 0 0 0 0 1                                    | Saddr-offset Data
ADDC   A,r                  0 0 0 0 1 0 1 0 1 0 1 0 R2 R1 R0 1                 | 
ADDC   A,saddr              1 0 1 0 0 1 0 1                                    | Saddr-offset
ADDC   A,!addr16            1 0 1 0 1 0 0 1                                    | Low addr High addr
ADDC   A,[HL]               1 0 1 0 1 1 1 1                                    | 
ADDC   A,[HL+byte]                1 0 1 0 1 1 0 1                                    | Data
SUB    A,#byte              1 0 0 1 0 0 1 1                                    | Data
SUB    saddr,#byte          1 0 0 1 0 0 0 1                                    | Saddr-offset Data
SUB    A,r                  0 0 0 0 1 0 1 0 1 0 0 1 R2 R1 R0 1                 | 
SUB    A,saddr              1 0 0 1 0 1 0 1                                    | Saddr-offset
SUB    A,!addr16            1 0 0 1 1 0 0 1                                    | Low addr High addr
SUB    A,[HL]               1 0 0 1 1 1 1 1                                    | 
SUB    A,[HL+byte]                1 0 0 1 1 1 0 1                                    | Data
SUBC   A,#byte              1 0 1 1 0 0 1 1                                    | Data
SUBC   saddr,#byte          1 0 1 1 0 0 0 1                                    | Saddr-offset Data
SUBC   A,r                  0 0 0 0 1 0 1 0 1 0 1 1 R2 R1 R0 1                 | 
SUBC   A,saddr              1 0 1 1 0 1 0 1                                    | Saddr-offset
SUBC   A,!addr16            1 0 1 1 1 0 0 1                                    | Low addr High addr
SUBC   A,[HL]               1 0 1 1 1 1 1 1                                    | 
SUBC   A,[HL+byte]                1 0 1 1 1 1 0 1                                    | Data
AND    A,#byte              0 1 1 0 0 0 1 1                                    | Data
AND    saddr,#byte          0 1 1 0 0 0 0 1                                    | Saddr-offset Data
AND    A,r                  0 0 0 0 1 0 1 0 0 1 1 0 R2 R1 R0 1                 | 
AND    A,saddr              0 1 1 0 0 1 0 1                                    | Saddr-offset
AND    A,!addr16            0 1 1 0 1 0 0 1                                    | Low addr High addr
AND    A,[HL]               0 1 1 0 1 1 1 1                                    | 
AND    A,[HL+byte]                0 1 1 0 1 1 0 1                                    | Data
OR     A,#byte              0 1 1 1 0 0 1 1                                    | Data
OR     saddr,#byte          0 1 1 1 0 0 0 1                                    | Saddr-offset Data
OR     A,r                  0 0 0 0 1 0 1 0 0 1 1 1 R2 R1 R0 1                 | 
OR     A,saddr              0 1 1 1 0 1 0 1                                    | Saddr-offset
OR     A,!addr16            0 1 1 1 1 0 0 1                                    | Low addr High addr
OR     A,[HL]               0 1 1 1 1 1 1 1                                    | 
OR     A,[HL+byte]                0 1 1 1 1 1 0 1                                    | Data
XOR    A,#byte              0 1 0 0 0 0 1 1                                    | Data
XOR    saddr,#byte          0 1 0 0 0 0 0 1                                    | Saddr-offset Data
XOR    A,r                  0 0 0 0 1 0 1 0 0 1 0 0 R2 R1 R0 1                 | 
XOR    A,saddr              0 1 0 0 0 1 0 1                                    | Saddr-offset
XOR    A,!addr16            0 1 0 0 1 0 0 1                                    | Low addr High addr
XOR    A,[HL]               0 1 0 0 1 1 1 1                                    | 
XOR    A,[HL+byte]                0 1 0 0 1 1 0 1                                    | Data
CMP    A,#byte              0 0 0 1 0 0 1 1                                    | Data
CMP    saddr,#byte          0 0 0 1 0 0 0 1                                    | Saddr-offset Data
CMP    A,r                  0 0 0 0 1 0 1 0 0 0 0 1 R2 R1 R0 1                 | 
CMP    A,saddr              0 0 0 1 0 1 0 1                                    | Saddr-offset
CMP    A,!addr16            0 0 0 1 1 0 0 1                                    | Low addr High addr
CMP    A,[HL]               0 0 0 1 1 1 1 1                                    | 
CMP    A,[HL+byte]                0 0 0 1 1 1 0 1                                    | Data
ADDW   AX,#word             1 1 0 1 0 0 1 0                                    | Low byte High byte
SUBW   AX,#word             1 1 0 0 0 0 1 0                                    | Low byte High byte
CMPW   AX,#word             1 1 1 0 0 0 1 0                                    | Low byte High byte
INC    r                    0 0 0 0 1 0 1 0 1 1 0 0 R2 R1 R0 1                 | 
INC    saddr                1 1 0 0 0 1 0 1                                    | Saddr-offset
DEC    r                    0 0 0 0 1 0 1 0 1 1 0 1 R2 R1 R0 1                 | 
DEC    saddr                1 1 0 1 0 1 0 1                                    | Saddr-offset
INCW   rp                   1 0 0 0 P1 P0 0 0                                  | 
DECW   rp                   1 0 0 1 P1 P0 0 0                                  | 
ROR    A,1                  0 0 0 0 0 0 0 0                                    | 
ROL    A,1                  0 0 0 1 0 0 0 0                                    | 
RORC   A,1                  0 0 0 0 0 0 1 0                                    | 
ROLC   A,1                  0 0 0 1 0 0 1 0                                    | 
SET1   saddr.bit            0 0 0 0 1 0 1 0 0 B2 B1 B0 1 0 1 0                 | Saddr-offset
SET1   sfr.bit              0 0 0 0 1 0 1 0 0 B2 B1 B0 0 1 1 0                 | Sfr-offset
SET1   A.bit                0 0 0 0 1 0 1 0 0 B2 B1 B0 0 0 1 0                 | 
SET1   PSW.bit              0 0 0 0 1 0 1 0 0 B2 B1 B0 1 0 1 0 0 0 0 1 1 1 1 0 | 
SET1   [HL].bit             0 0 0 0 1 0 1 0 0 B2 B1 B0 1 1 1 0                 | 
CLR1   saddr.bit            0 0 0 0 1 0 1 0 1 B2 B1 B0 1 0 1 0                 | Saddr-offset
CLR1   sfr.bit              0 0 0 0 1 0 1 0 1 B2 B1 B0 0 1 1 0                 | Sfr-offset
CLR1   A.bit                0 0 0 0 1 0 1 0 1 B2 B1 B0 0 0 1 0                 | 
CLR1   PSW.bit              0 0 0 0 1 0 1 0 1 B2 B1 B0 1 0 1 0 0 0 0 1 1 1 1 0 | 
CLR1   [HL].bit             0 0 0 0 1 0 1 0 1 B2 B1 B0 1 1 1 0                 | 
SET1   CY                   0 0 0 1 0 1 0 0                                    | 
CLR1   CY                   0 0 0 0 0 1 0 0                                    | 
NOT1   CY                   0 0 0 0 0 1 1 0                                    | 
CALL   !addr16              0 0 1 0 0 0 1 0                                    | Low addr High addr
CALLT  [addr5]              0 1 ta4-0 0                                        | 
RET                         0 0 1 0 0 0 0 0                                    | 
RETI                        0 0 1 0 0 1 0 0                                    | 
PUSH   PSW                  0 0 1 0 1 1 1 0                                    | 
PUSH   rp                   1 0 1 0 P1 P0 1 0                                  | 
POP    PSW                  0 0 1 0 1 1 0 0                                    | 
POP    rp                   1 0 1 0 P1 P0 0 0                                  | 
MOVW   SP,AX                1 1 1 0 0 1 1 0 0 0 0 1 1 1 0 0                    | 
MOVW   AX,SP                1 1 0 1 0 1 1 0 0 0 0 1 1 1 0 0                    | 
BR     !addr16              1 0 1 1 0 0 1 0                                    | Low addr High addr
BR     $addr16              0 0 1 1 0 0 0 0                                    | jdisp
BR     AX                   1 0 1 1 0 0 0 0                                    | 
BC     $addr16              0 0 1 1 1 0 0 0                                    | jdisp
BNC    $addr16              0 0 1 1 1 0 1 0                                    | jdisp
BZ     $addr16              0 0 1 1 1 1 0 0                                    | jdisp
BNZ    $addr16              0 0 1 1 1 1 1 0                                    | jdisp
BT     saddr.bit,$addr16    0 0 0 0 1 0 1 0 1 B2 B1 B0 1 0 0 0                 | Saddr-offset jdisp
BT     sfr.bit,$addr16      0 0 0 0 1 0 1 0 1 B2 B1 B0 0 1 0 0                 | Sfr-offset jdisp
BT     A.bit,$addr16        0 0 0 0 1 0 1 0 1 B2 B1 B0 0 0 0 0                 | jdisp
BT     PSW.bit,$addr16      0 0 0 0 1 0 1 0 1 B2 B1 B0 1 0 0 0 0 0 0 1 1 1 1 0 | jdisp
BF     saddr.bit,$addr16    0 0 0 0 1 0 1 0 0 B2 B1 B0 1 0 0 0                 | Saddr-offset jdisp
BF     sfr.bit,$addr16      0 0 0 0 1 0 1 0 0 B2 B1 B0 0 1 0 0                 | Sfr-offset jdisp
BF     A.bit,$addr16        0 0 0 0 1 0 1 0 0 B2 B1 B0 0 0 0 0                 | jdisp
BF     PSW.bit,$addr16      0 0 0 0 1 0 1 0 0 B2 B1 B0 1 0 0 0 0 0 0 1 1 1 1 0 | jdisp
DBNZ   B,$addr16            0 0 1 1 0 1 1 0                                    | jdisp
DBNZ   C,$addr16            0 0 1 1 0 1 0 0                                    | jdisp
DBNZ   saddr,$addr16        0 0 1 1 0 0 1 0                                    | Saddr-offset jdisp
NOP                         0 0 0 0 1 0 0 0                                    | 
EI                          0 0 0 0 1 0 1 0 0 1 1 1 1 0 1 0 0 0 0 1 1 1 1 0    | 
DI                          0 0 0 0 1 0 1 0 1 1 1 1 1 0 1 0 0 0 0 1 1 1 1 0    | 
HALT                        0 0 0 0 1 1 0 0                                    | 
STOP                        0 0 0 0 1 1 1 0                                    | 
"""

# Rows whose register operand excludes some values (manual notes).
EXCEPT = {
    "78K0": {("MOV", "A,r"): "A", ("MOV", "r,A"): "A", ("XCH", "A,r"): "A",
             ("MOVW", "AX,rp"): "AX", ("MOVW", "rp,AX"): "AX", ("XCHW", "AX,rp"): "AX",
             **{(m, "A,r"): "A" for m in ("ADD", "ADDC", "SUB", "SUBC", "AND", "OR", "XOR", "CMP")}},
    "78K0S": {("MOV", "A,r"): "A", ("MOV", "r,A"): "A", ("XCH", "A,r"): "AX_PAIR",
              ("MOVW", "AX,rp"): "AX", ("MOVW", "rp,AX"): "AX", ("XCHW", "AX,rp"): "AX"},
}
REGS = ["X", "A", "C", "B", "E", "D", "L", "H"]
PAIRS = ["AX", "BC", "DE", "HL"]

BIT = re.compile(r"^(?:[01]|[RPB]\d|RB\d|fa\d+(?:-\d+)?|ta\d(?:-\d)?)$")


def parse(text):
    rows = []
    for line in text.strip().splitlines():
        left, tail = line.split("|")
        toks = left.split()
        mn = toks[0]
        ops = ""
        rest = toks[1:]
        if rest and not BIT.match(rest[0]):
            ops = rest[0]
            rest = rest[1:]
        bits = []
        for t in rest:
            m = re.match(r"(fa|ta)(\d+)-(\d+)$", t)
            if m:
                hi, lo = int(m.group(2)), int(m.group(3))
                if m.group(1) == "fa" and hi == 7:
                    continue  # fa7-0 is the next byte
                bits += [f"{m.group(1)}{i}" for i in range(hi, lo - 1, -1)]
            else:
                bits.append(t)
        tail = tail.split()
        tl = []
        i = 0
        while i < len(tail):
            t = tail[i]
            if t in ("Low", "High"):
                if t == "Low":
                    tl.append("word" if tail[i + 1] == "byte" else "addr")
                i += 2
                continue
            tl.append(t)
            i += 1
        if mn == "CALLF":
            tl.append("fa_lo")
        rows.append((mn, ops, bits, tl))
    return rows


class Gen:
    def __init__(self, family):
        self.family = family
        self.fields = {}
        self.out = []

    def field(self, lo, hi):
        name = f"o{lo}_{hi}"
        self.fields[name] = (lo, hi)
        return name

    def byte_pattern(self, bits, fixed):
        """Constraint text for one opcode byte (bits MSB first); fixed maps operand bits to values."""
        assert len(bits) == 8, bits
        parts = []
        b = [fixed.get(x, x) for x in bits]
        pos = 7
        i = 0
        while i < 8:
            if b[i] in ("0", "1"):
                j = i
                while j < 8 and b[j] in ("0", "1"):
                    j += 1
                hi, lo = 7 - i, 7 - (j - 1)
                parts.append(f"{self.field(lo, hi)}=0x{int(''.join(b[i:j]), 2):x}")
                i = j
                continue
            j = i
            kind = re.match(r"[A-Za-z]+", b[i]).group(0)
            while j < 8 and b[j] not in ("0", "1") and re.match(r"[A-Za-z]+", b[j]).group(0) == kind:
                j += 1
            hi, lo = 7 - i, 7 - (j - 1)
            fname = {"R": "rr", "P": "rp", "B": "bt", "fa": "fah", "ta": "tab"}[kind] + f"{lo}"
            self.fields[fname] = (lo, hi)
            parts.append(fname)
            i = j
        return " & ".join(parts), [p for p in parts if "=" not in p]

    def emit(self, rows):
        for mn, ops, bits, tail in rows:
            exc = EXCEPT[self.family].get((mn, ops))
            if exc and ("R2" in bits or "P1" in bits):
                regs = REGS if "R2" in bits else PAIRS
                names = ["R2", "R1", "R0"] if "R2" in bits else ["P1", "P0"]
                skip = {"A": ["A"], "AX": ["AX"], "AX_PAIR": ["A", "X"]}[exc]
                for v, reg in enumerate(regs):
                    if reg in skip:
                        continue
                    fixed = {n: str((v >> (len(names) - 1 - k)) & 1) for k, n in enumerate(names)}
                    self.row(mn, ops, bits, tail, fixed, reg)
            elif mn == "SEL":
                for v in range(4):
                    self.row(mn, ops, bits, tail, {"RB1": str(v >> 1), "RB0": str(v & 1)}, f"RB{v}")
            else:
                self.row(mn, ops, bits, tail, {}, None)

    def row(self, mn, ops, bits, tail, fixed, fixreg):
        nbytes = len(bits) // 8
        pats, opfields = [], []
        for k in range(nbytes):
            p, f = self.byte_pattern(bits[8 * k:8 * k + 8], fixed)
            pats.append(p)
            opfields += f
        regf = next((f for f in opfields if f.startswith("rr")), None)
        pairf = next((f for f in opfields if f.startswith("rp")), None)
        bitf = next((f for f in opfields if f.startswith("bt")), None)
        rname = fixreg if fixreg in REGS else regf
        pname = fixreg if fixreg in PAIRS else pairf
        tails = []
        operands = ops.split(",") if ops else []
        sym = {}
        for t in tail:
            if t == "Saddr-offset":
                o = next(x for x in operands if x.startswith("saddr"))
                tails.append("saddrp" if o == "saddrp" else "saddr")
            elif t == "Sfr-offset":
                o = next(x for x in operands if x.startswith("sfr"))
                tails.append("sfrp" if o == "sfrp" else "sfr")
            elif t == "Data":
                tails.append("hlb" if "[HL+byte]" in operands else "imm8")
            elif t == "word":
                tails.append("imm16")
            elif t == "addr":
                if mn in ("CALL", "BR"):
                    tails.append("cabs")
                elif mn in ("MOVW",):
                    tails.append("abs16")
                else:
                    tails.append("abs8")
            elif t == "jdisp":
                tails.append("rel")
            elif t == "fa_lo":
                tails.append("callf")
            else:
                raise SystemExit(f"unknown tail {t} in {mn} {ops}")
        pattern = " ; ".join(pats + tails)
        # subtables appearing as tokens must also be referenced in the pattern; names used in p-code
        val = {}
        for o in operands:
            val[o] = self.operand(o, rname, pname, bitf, tails)
        disp = self.display(mn, operands, rname, pname, bitf, tails, fixreg)
        body = self.semantics(mn, operands, val, bitf)
        if body is None:
            raise SystemExit(f"no semantics for {mn} {ops}")
        if "callf" in tails and "fah4" in opfields:
            pass
        self.out.append(f":{mn}{disp} is {pattern} {{ {body} }}")

    def operand(self, o, rname, pname, bitf, tails):
        base = o.split(".")[0]
        table = {
            "A": "A", "X": "X", "B": "B", "C": "C", "AX": "AX", "SP": "SP", "CY": "CY", "PSW": "PSW",
            "r": rname, "rp": pname, "saddr": "saddr", "saddrp": "saddrp", "sfr": "sfr", "sfrp": "sfrp",
            "#byte": "imm8", "#word": "imm16", "[DE]": "ide", "[HL]": "ihl", "[HL+byte]": "hlb",
            "[HL+B]": "ihlb", "[HL+C]": "ihlc", "$addr16": "rel", "!addr11": "callf", "[addr5]": "callt",
            "1": "1", "RBn": "RBn",
        }
        if base == "!addr16":
            return next(t for t in tails if t in ("abs8", "abs16", "cabs"))
        return table[base]

    def display(self, mn, operands, rname, pname, bitf, tails, fixreg):
        out = []
        for o in operands:
            base, _, bit = o.partition(".")
            if base == "r":
                s = rname if rname in REGS else rname
            elif base == "rp":
                s = pname
            elif base == "RBn":
                s = '"' + fixreg + '"'
            elif base in ("[DE]", "[HL]", "[HL+B]", "[HL+C]"):
                s = '"' + base + '"'
            elif base == "[HL+byte]":
                s = "hlb"
            elif base == "!addr16":
                s = next(t for t in tails if t in ("abs8", "abs16", "cabs"))
            elif base == "$addr16":
                s = "rel"
            elif base == "!addr11":
                s = "callf"
            elif base == "[addr5]":
                s = "callt"
            elif base in ("#byte",):
                s = '"#"^imm8'
            elif base in ("#word",):
                s = '"#"^imm16'
            else:
                s = {"saddr": "saddr", "saddrp": "saddrp", "sfr": "sfr", "sfrp": "sfrp"}.get(base, '"' + base + '"')
            if s in REGS or s in PAIRS:
                s = '"' + s + '"'
            if bit:
                s += f'^"."^{bitf}'
            out.append(s)
        return (" " + ", ".join(out)) if out else ""

    def semantics(self, mn, ops, v, bitf):
        d = v[ops[0]] if ops else None
        s = v[ops[1]] if len(ops) > 1 else None
        o0 = ops[0] if ops else ""
        o1 = ops[1] if len(ops) > 1 else ""
        def loc(o):
            """(read expr, write template) for a bit operand's byte."""
            base = o.split(".")[0]
            return v[o]
        if mn == "MOV":
            if o0 == "PSW":
                return f"setpsw({s});"
            if o1 == "PSW":
                return f"local p:1 = 0; getpsw(p); {d} = p;"
            return f"{d} = {s};"
        if mn == "XCH":
            return f"local t:1 = A; A = {s}; {s} = t;"
        if mn == "MOVW":
            if o0 in ("AX", "SP") or o1 in ("AX", "SP") or o0 == "rp":
                return f"{d} = {s};"
            return f"{d} = {s};"
        if mn == "XCHW":
            return f"local t:2 = AX; AX = {s}; {s} = t;"
        if mn in ("ADD", "ADDC", "SUB", "SUBC", "AND", "OR", "XOR", "CMP"):
            return f"{mn.lower()}8({d}, {s});"
        if mn in ("ADDW", "SUBW", "CMPW"):
            return f"{mn.lower()}({d}, {s});"
        if mn == "MULU":
            return "AX = zext(A) * zext(X);"
        if mn == "DIVUW":
            return "local dv:2 = zext(C); local q:2 = AX / dv; local rm:2 = AX % dv; AX = q; C = rm:1;"
        if mn in ("INC", "DEC"):
            op = "+" if mn == "INC" else "-"
            return f"local o:1 = {d}; {d} = o {op} 1; Z = {d} == 0; AC = (o & 0xf) {'== 0xf' if mn == 'INC' else '== 0'};"
        if mn in ("INCW", "DECW"):
            return f"{d} = {d} {'+' if mn == 'INCW' else '-'} 1;"
        if mn == "ROR":
            return "CY = A & 1; A = (A >> 1) | (A << 7);"
        if mn == "ROL":
            return "CY = A >> 7; A = (A << 1) | (A >> 7);"
        if mn == "RORC":
            return "local c:1 = CY; CY = A & 1; A = (A >> 1) | (c << 7);"
        if mn == "ROLC":
            return "local c:1 = CY; CY = A >> 7; A = (A << 1) | c;"
        if mn == "ROR4":
            return "local m:1 = ihl; local a:1 = A; A = (a & 0xf0) | (m & 0xf); ihl = (a << 4) | (m >> 4);"
        if mn == "ROL4":
            return "local m:1 = ihl; local a:1 = A; A = (a & 0xf0) | (m >> 4); ihl = (m << 4) | (a & 0xf);"
        if mn == "ADJBA":
            return "A = decimal_adjust_add(A, AC, CY);"
        if mn == "ADJBS":
            return "A = decimal_adjust_sub(A, AC, CY);"
        bitops = ("MOV1", "AND1", "OR1", "XOR1", "SET1", "CLR1", "NOT1", "BT", "BF", "BTCLR")
        if mn in bitops:
            def get(o):
                base = o.split(".")[0]
                if base == "PSW":
                    return f"local p:1 = 0; getpsw(p); local bv:1 = (p >> {bitf}) & 1;"
                return f"local bv:1 = ({v[o]} >> {bitf}) & 1;"
            def put(o, expr):
                base = o.split(".")[0]
                if base == "PSW":
                    return f"local q:1 = 0; getpsw(q); q = (q & ~(1 << {bitf})) | (({expr}) << {bitf}); setpsw(q);"
                return f"{v[o]} = ({v[o]} & ~(1 << {bitf})) | (({expr}) << {bitf});"
            if mn == "NOT1":
                return "CY = CY ^ 1;"
            if mn in ("SET1", "CLR1"):
                if o0 == "CY":
                    return f"CY = {1 if mn == 'SET1' else 0};"
                return put(o0, "1" if mn == "SET1" else "0")
            if mn == "MOV1":
                if o0 == "CY":
                    return get(o1) + " CY = bv;"
                return put(o0, "CY")
            if mn in ("AND1", "OR1", "XOR1"):
                op = {"AND1": "&", "OR1": "|", "XOR1": "^"}[mn]
                return get(o1) + f" CY = CY {op} bv;"
            if mn == "BT":
                return get(o0) + " if (bv != 0) goto rel;"
            if mn == "BF":
                return get(o0) + " if (bv == 0) goto rel;"
            if mn == "BTCLR":
                return get(o0) + " if (bv == 0) goto inst_next; " + put(o0, "0") + " goto rel;"
        if mn == "CALL":
            return "push16(inst_next); call cabs;"
        if mn == "CALLF":
            return "push16(inst_next); call callf;"
        if mn == "CALLT":
            return "local t:2 = callt; push16(inst_next); call [t];"
        if mn == "BRK":
            return "local p:1 = 0; getpsw(p); push8(p); push16(inst_next); IE = 0; local t:2 = *[ram]:2 0x3e:2; call [t];"
        if mn == "RET":
            return "local t:2 = 0; pop16(t); return [t];"
        if mn in ("RETI", "RETB"):
            return "local t:2 = 0; pop16(t); local p:1 = 0; pop8(p); setpsw(p); return [t];"
        if mn == "PUSH":
            if o0 == "PSW":
                return "local p:1 = 0; getpsw(p); push8(p);"
            return f"push16({d});"
        if mn == "POP":
            if o0 == "PSW":
                return "local p:1 = 0; pop8(p); setpsw(p);"
            return f"pop16({d});"
        if mn == "BR":
            if o0 == "AX":
                return "goto [AX];"
            return f"goto {d};"
        if mn in ("BC", "BNC", "BZ", "BNZ"):
            cond = {"BC": "CY != 0", "BNC": "CY == 0", "BZ": "Z != 0", "BNZ": "Z == 0"}[mn]
            return f"if ({cond}) goto rel;"
        if mn == "DBNZ":
            return f"{d} = {d} - 1; if ({d} != 0) goto rel;"
        if mn == "SEL":
            return "PSWO = (PSWO & ~0x28) | sel_rbs;"
        if mn == "NOP":
            return ""
        if mn == "EI":
            return "IE = 1;"
        if mn == "DI":
            return "IE = 0;"
        if mn == "HALT":
            return "halt();"
        if mn == "STOP":
            return "stop();"
        return None


HEADER = r"""# NEC 78K/0@@S@@ (generated by tools/gen_78k0.py from the "Instruction code list" of NEC's
# @@MANUAL@@; do not edit).
#
# R0-R7 (X A C B E D L H) and the pairs AX BC DE HL live in register space, as the bank that SEL
# RBn selects: the bank's alias in internal RAM (FEE0H-FEFFH) is not modelled. PSW is IE, Z, AC
# and CY plus PSWO (RBS1, RBS0, ISP); MOV/PUSH/POP of PSW and PSW.bit pack and unpack it.

define endian=little;
define alignment=1;

define space ram type=ram_space size=2 default;
define space register type=register_space size=2;

define register offset=0x00 size=1 [ X A C B E D L H ];
define register offset=0x00 size=2 [ AX BC DE HL ];
define register offset=0x10 size=2 [ PC SP ];
define register offset=0x20 size=1 [ CY Z AC IE PSWO PSW ];

define pcodeop decimal_adjust_add;
define pcodeop decimal_adjust_sub;
define pcodeop halt;
define pcodeop stop;

define token opbyte(8)
@@FIELDS@@
;
define token tsaddr(8) sa = (0,7) sa_hi = (5,7);
define token tsfr(8) sf = (0,7);
define token tdata(8) d8 = (0,7);
define token tjd(8) jd = (0,7) signed;
define token tfa(8) fal = (0,7);
define token tword(16) w16 = (0,15);
define token taddr(16) a16 = (0,15);

attach variables [ @@RRF@@ ] [ X A C B E D L H ];
attach variables [ @@RPF@@ ] [ AX BC DE HL ];

saddr: addr is sa_hi=0 & sa [ addr = 0xff00 + sa; ] { export *[ram]:1 addr; }
saddr: addr is sa [ addr = 0xfe00 + sa; ] { export *[ram]:1 addr; }
saddrp: addr is sa_hi=0 & sa [ addr = 0xff00 + sa; ] { export *[ram]:2 addr; }
saddrp: addr is sa [ addr = 0xfe00 + sa; ] { export *[ram]:2 addr; }
sfr: addr is sf [ addr = 0xff00 + sf; ] { export *[ram]:1 addr; }
sfrp: addr is sf [ addr = 0xff00 + sf; ] { export *[ram]:2 addr; }
imm8: d8 is d8 { export *[const]:1 d8; }
imm16: w16 is w16 { export *[const]:2 w16; }
abs8: "!"^a16 is a16 { export *[ram]:1 a16; }
abs16: "!"^a16 is a16 { export *[ram]:2 a16; }
cabs: "!"^a16 is a16 { export *[ram]:1 a16; }
rel: "$"^dest is jd [ dest = inst_next + jd; ] { export *[ram]:1 dest; }
hlb: "[HL+"^d8^"]" is d8 { local a:2 = HL + d8; export *[ram]:1 a; }
ide: is epsilon { export *[ram]:1 DE; }
ihl: is epsilon { export *[ram]:1 HL; }
ihlb: is epsilon { local a:2 = HL + zext(B); export *[ram]:1 a; }
ihlc: is epsilon { local a:2 = HL + zext(C); export *[ram]:1 a; }
@@CALLF@@
@@CALLT@@
@@SEL@@

macro getpsw(p) {
	p = (IE << 7) | (Z << 6) | (AC << 4) | (PSWO & 0x2e) | CY;
}
macro setpsw(p) {
	IE = (p >> 7) & 1;
	Z = (p >> 6) & 1;
	AC = (p >> 4) & 1;
	CY = p & 1;
	PSWO = p & 0x2e;
}
macro push8(v) { SP = SP - 1; *[ram]:1 SP = v; }
macro pop8(v) { v = *[ram]:1 SP; SP = SP + 1; }
macro push16(v) { SP = SP - 2; *[ram]:2 SP = v; }
macro pop16(v) { v = *[ram]:2 SP; SP = SP + 2; }
macro add8(d, s) {
	local a:1 = d; local b:1 = s;
	CY = carry(a, b); AC = ((a & 0xf) + (b & 0xf)) > 0xf;
	d = a + b; Z = d == 0;
}
macro addc8(d, s) {
	local a:1 = d; local b:1 = s; local c:1 = CY;
	local r:2 = zext(a) + zext(b) + zext(c);
	AC = ((a & 0xf) + (b & 0xf) + c) > 0xf; CY = r > 0xff;
	d = r:1; Z = d == 0;
}
macro sub8(d, s) {
	local a:1 = d; local b:1 = s;
	CY = a < b; AC = (a & 0xf) < (b & 0xf);
	d = a - b; Z = d == 0;
}
macro subc8(d, s) {
	local a:1 = d; local b:1 = s; local c:1 = CY;
	local r:2 = zext(a) - zext(b) - zext(c);
	AC = (a & 0xf) < (b & 0xf) + c; CY = r > 0xff;
	d = r:1; Z = d == 0;
}
macro cmp8(d, s) {
	local a:1 = d; local b:1 = s;
	CY = a < b; AC = (a & 0xf) < (b & 0xf);
	Z = a == b;
}
macro and8(d, s) { d = d & s; Z = d == 0; }
macro or8(d, s) { d = d | s; Z = d == 0; }
macro xor8(d, s) { d = d ^ s; Z = d == 0; }
macro addw(d, s) { local a:2 = d; local b:2 = s; CY = carry(a, b); d = a + b; Z = d == 0; AC = ((a & 0xf) + (b & 0xf)) > 0xf; }
macro subw(d, s) { local a:2 = d; local b:2 = s; CY = a < b; d = a - b; Z = d == 0; AC = (a & 0xf) < (b & 0xf); }
macro cmpw(d, s) { local a:2 = d; local b:2 = s; CY = a < b; Z = a == b; AC = (a & 0xf) < (b & 0xf); }

"""


def build(family, rows_text, manual, callt_base):
    g = Gen(family)
    g.emit(parse(rows_text))
    fields = "\n".join(f"\t{n} = ({lo},{hi})" for n, (lo, hi) in sorted(g.fields.items(), key=lambda x: (x[1], x[0])))
    rr = " ".join(sorted(n for n in g.fields if n.startswith("rr")))
    rp = " ".join(sorted(n for n in g.fields if n.startswith("rp")))
    fah = next((n for n in g.fields if n.startswith("fah")), None)
    tab = next((n for n in g.fields if n.startswith("tab")), None)
    text = HEADER.replace("@@S@@", "S" if family == "78K0S" else "").replace("@@MANUAL@@", manual)
    text = text.replace("@@FIELDS@@", fields).replace("@@RRF@@", rr).replace("@@RPF@@", rp)
    text = text.replace("@@CALLF@@", f'callf: "!"^addr is {fah} ; fal [ addr = 0x800 + ({fah} << 8) + fal; ] {{ export *[ram]:1 addr; }}' if fah else "")
    text = text.replace("@@CALLT@@", f'callt: "["^addr^"]" is {tab} [ addr = {callt_base:#x} + {tab} * 2; ] {{ export *[ram]:2 addr; }}' if tab else "")
    sel = "SEL" in rows_text
    text = text.replace("@@SEL@@", "")
    body = "\n".join(g.out)
    if sel:
        out = []
        for line in body.split("\n"):
            m = re.match(r':SEL "RB(\d)"', line)
            if m:
                v = int(m.group(1))
                line = line.replace("sel_rbs", f"0x{((v >> 1) << 5) | ((v & 1) << 3):02x}")
            out.append(line)
        body = "\n".join(out)
    return text + body + "\n"


def main():
    out = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(__file__).resolve().parents[1] / "specs/Ghidra/Processors/78K0/data/languages"
    (out / "78k0.slaspec").write_text(build("78K0", ROWS_78K0, "78K/0 Series Instructions user's manual (U12326E)", 0x40))
    (out / "78k0s.slaspec").write_text(build("78K0S", ROWS_78K0S, "78K/0S Series Instructions user's manual (U11047E)", 0x40))


if __name__ == "__main__":
    main()
