// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x544F0
// Name:           sub_544F0
// Function size:  231 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x544F0 push    rbp; int
//   0x544F1 mov     rbp, rdi
//   0x544F4 push    rbx; int
//   0x544F5 mov     rbx, rsi
//   0x544F8 sub     rsp, 8
//   0x544FC mov     rdi, [rsi]; int
//   0x544FF call    sub_7DFA0
//   0x54504 test    eax, eax
//   0x54506 jz      loc_545A0
//   0x5450C cmp     eax, 0FFFFFFFFh
//   0x5450F jz      loc_545D0
//   0x54515 mov     rax, [rbx]
//   0x54518 lea     rsi, src
//   0x5451F cmp     qword ptr [rax+20h], 0
//   0x54524 jnz     loc_545C0
//   0x5452A xor     eax, eax
//   0x5452C lea     rdi, aPdbFoundPdbFil; "PDB: found PDB file '%s' in COFF, conti"...
//   0x54533 call    sub_244A0
//   0x54538 mov     rax, [rbx]
//   0x5453B lea     rdx, src
//   0x54542 mov     qword ptr [rax+80h], 0
//   0x5454D mov     rax, [rbx]
//   0x54550 and     dword ptr [rax+88h], 0FFFFFFF7h
//   0x54557 mov     rax, [rbx]
//   0x5455A or      dword ptr [rax+88h], 2
//   0x54561 mov     rax, [rbx]
//   0x54564 and     dword ptr [rax+88h], 0FFFFFFEFh
//   0x5456B mov     rax, [rbx]
//   0x5456E cmp     qword ptr [rax+20h], 0
//   0x54573 jnz     short loc_545B0
//   0x54575 xor     eax, eax
//   0x54577 lea     rsi, aAutohideRegist_0; "AUTOHIDE REGISTRY\nHIDECANCEL\nThe inpu"...
//   0x5457E mov     edi, 1
//   0x54583 call    sub_29C90
//   0x54588 cmp     eax, 1
//   0x5458B jnz     short loc_545D0
//   0x5458D mov     rsi, rbx
//   0x54590 mov     rdi, rbp
//   0x54593 call    sub_54430
//   0x54598 test    eax, eax
//   0x5459A setnz   al
//   0x5459D movzx   eax, al
//   0x545A0 add     rsp, 8
//   0x545A4 pop     rbx
//   0x545A5 pop     rbp
//   0x545A6 retn
//   0x545A7 align 10h
//   0x545B0 mov     rdx, [rax+18h]
//   0x545B4 jmp     short loc_54575
//   0x545B6 align 20h
//   0x545C0 mov     rsi, [rax+18h]
//   0x545C4 jmp     loc_5452A
//   0x545C9 align 10h
//   0x545D0 mov     eax, 80004005h
//   0x545D5 jmp     short loc_545A0
// ============================================================

void sub_544F0(/* signature unknown */)
{
    // see disassembly above
}

