// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x592C0
// Name:           sub_592C0
// Function size:  207 bytes (61 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x592C0 cmp     di, 79h ; 'y'
//   0x592C4 ja      short loc_59300
//   0x592C6 cmp     di, 53h ; 'S'
//   0x592CA jbe     short loc_5930E
//   0x592CC lea     ecx, [rdi-54h]
//   0x592CF mov     eax, 1
//   0x592D4 mov     rdx, 3C43C001FFh
//   0x592DE shl     rax, cl
//   0x592E1 test    rax, rdx
//   0x592E4 jnz     short loc_5930B
//   0x592E6 mov     rdx, 1A01E0000h
//   0x592F0 test    rax, rdx
//   0x592F3 jz      short loc_5930E
//   0x592F5 mov     eax, 1
//   0x592FA retn
//   0x592FB align 20h
//   0x59300 sub     di, 2A2h
//   0x59305 cmp     di, 1
//   0x59309 ja      short loc_5930E
//   0x5930B xor     eax, eax
//   0x5930D retn
//   0x5930E mov     rax, cs:under_debugger_ptr
//   0x59315 cmp     byte ptr [rax], 0
//   0x59318 jnz     loc_22EB2
//   0x5931E push    rax
//   0x5931F mov     edi, 28E7h
//   0x59324 call    _interr
//   0x59329 nop     dword ptr [rax+00000000h]
//   0x59330 cmp     edx, 1
//   0x59333 jnz     short loc_59340
//   0x59335 mov     eax, 1
//   0x5933A retn
//   0x5933B align 20h
//   0x59340 push    rbx
//   0x59341 mov     rdi, [rdi+8]
//   0x59345 mov     ebx, edx
//   0x59347 call    sub_4E2D0
//   0x5934C cmp     eax, 4
//   0x5934F jz      short loc_59388
//   0x59351 ja      short loc_59370
//   0x59353 cmp     eax, 3
//   0x59356 mov     edx, 1Eh
//   0x5935B mov     eax, 0FFFFFFFFh
//   0x59360 cmovz   eax, edx
//   0x59363 cmp     ebx, eax
//   0x59365 pop     rbx
//   0x59366 setz    al
//   0x59369 retn
//   0x5936A align 10h
//   0x59370 sub     eax, 8
//   0x59373 cmp     eax, 2
//   0x59376 sbb     eax, eax
//   0x59378 and     eax, 3
//   0x5937B sub     eax, 1
//   0x5937E cmp     ebx, eax
//   0x59380 pop     rbx
//   0x59381 setz    al
//   0x59384 retn
//   0x59385 align 8
//   0x59388 mov     eax, 2
//   0x5938D jmp     short loc_59363
// ============================================================

void sub_592C0(/* signature unknown */)
{
    // see disassembly above
}

