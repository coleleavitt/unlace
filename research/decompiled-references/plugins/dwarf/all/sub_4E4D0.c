// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4E4D0
// Name:           sub_4E4D0
// Function size:  106 bytes (33 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4E4D0 push    r12
//   0x4E4D2 mov     r12, rdx
//   0x4E4D5 push    rbp
//   0x4E4D6 mov     rbp, rdi
//   0x4E4D9 push    rbx
//   0x4E4DA mov     rbx, rsi
//   0x4E4DD mov     rsi, [rdi+8]
//   0x4E4E1 mov     rdx, rbx
//   0x4E4E4 lea     rcx, [rbx+8]
//   0x4E4E8 mov     rdi, [rsi]
//   0x4E4EB call    sub_4DC70
//   0x4E4F0 mov     rax, [rbx+188h]
//   0x4E4F7 xor     edx, edx
//   0x4E4F9 test    rax, rax
//   0x4E4FC jz      short loc_4E533
//   0x4E4FE lea     rdx, [rax+rax*2]
//   0x4E502 mov     esi, 1
//   0x4E507 lea     rdx, [rax+rdx*4]
//   0x4E50B mov     rax, [rbx+180h]
//   0x4E512 lea     rbx, [rax+rdx*8-68h]
//   0x4E517 mov     rax, [rbp+8]
//   0x4E51B lea     rdi, [rbx+30h]
//   0x4E51F mov     rdx, [rax]
//   0x4E522 call    sub_5E020
//   0x4E527 cdqe
//   0x4E529 add     rax, [rbx+28h]
//   0x4E52D cmp     rax, r12
//   0x4E530 setb    dl
//   0x4E533 pop     rbx
//   0x4E534 mov     eax, edx
//   0x4E536 pop     rbp
//   0x4E537 pop     r12
//   0x4E539 retn
// ============================================================

void sub_4E4D0(/* signature unknown */)
{
    // see disassembly above
}

