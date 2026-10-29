// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x58EB0
// Name:           sub_58EB0
// Function size:  226 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x58EB0 lea     rax, dword_959F0
//   0x58EB7 push    rbx
//   0x58EB8 mov     rbx, rdi
//   0x58EBB mov     edi, [rax]
//   0x58EBD call    _get_module_data
//   0x58EC2 mov     rsi, [rbx]
//   0x58EC5 mov     rdx, rax
//   0x58EC8 mov     rax, [rbx+10h]
//   0x58ECC mov     rdx, [rdx+18h]
//   0x58ED0 cmp     word ptr [rdx+4], 1
//   0x58ED5 jz      short loc_58F20
//   0x58ED7 cmp     rax, 9
//   0x58EDB jbe     short loc_58F00
//   0x58EDD mov     rax, 261684073252001h
//   0x58EE7 mov     qword ptr [rbx+8], 0Ah
//   0x58EEF mov     [rsi], rax
//   0x58EF2 mov     byte ptr [rsi+8], 20h ; ' '
//   0x58EF6 mov     rax, [rbx]
//   0x58EF9 mov     byte ptr [rax+9], 0
//   0x58EFD pop     rbx
//   0x58EFE retn
//   0x58EFF align 20h
//   0x58F00 mov     ecx, 1
//   0x58F05 mov     edx, 0Ah
//   0x58F0A mov     rdi, rbx
//   0x58F0D call    _qvector_reserve
//   0x58F12 mov     [rbx], rax
//   0x58F15 mov     rsi, rax
//   0x58F18 jmp     short loc_58EDD
//   0x58F1A align 20h
//   0x58F20 cmp     rax, 46h ; 'F'
//   0x58F24 jbe     short loc_58F78
//   0x58F26 movdqa  xmm0, cs:xmmword_77F90
//   0x58F2E mov     qword ptr [rbx+8], 47h ; 'G'
//   0x58F36 mov     rax, 0C02464646467830h
//   0x58F40 movups  xmmword ptr [rsi], xmm0
//   0x58F43 movdqa  xmm0, cs:xmmword_77FA0
//   0x58F4B movups  xmmword ptr [rsi+10h], xmm0
//   0x58F4F movdqa  xmm0, cs:xmmword_77FB0
//   0x58F57 movups  xmmword ptr [rsi+20h], xmm0
//   0x58F5B movdqa  xmm0, cs:xmmword_77FC0
//   0x58F63 movups  xmmword ptr [rsi+30h], xmm0
//   0x58F67 mov     [rsi+3Eh], rax
//   0x58F6B mov     rax, [rbx]
//   0x58F6E mov     byte ptr [rax+46h], 0
//   0x58F72 pop     rbx
//   0x58F73 retn
//   0x58F74 align 8
//   0x58F78 mov     ecx, 1
//   0x58F7D mov     edx, 47h ; 'G'
//   0x58F82 mov     rdi, rbx
//   0x58F85 call    _qvector_reserve
//   0x58F8A mov     [rbx], rax
//   0x58F8D mov     rsi, rax
//   0x58F90 jmp     short loc_58F26
// ============================================================

void sub_58EB0(/* signature unknown */)
{
    // see disassembly above
}

