// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6F820
// Name:           sub_6F820
// Function size:  421 bytes (110 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6F820 push    r15
//   0x6F822 push    r14
//   0x6F824 push    r13
//   0x6F826 mov     r13, rdi
//   0x6F829 push    r12
//   0x6F82B mov     r12, rsi
//   0x6F82E push    rbp
//   0x6F82F push    rbx
//   0x6F830 mov     ebx, edx
//   0x6F832 sub     rsp, 28h
//   0x6F836 mov     r15, fs:28h
//   0x6F83F mov     [rsp+58h+var_40], r15
//   0x6F844 mov     r15d, ecx
//   0x6F847 cmp     edx, 0FFFh
//   0x6F84D jbe     loc_6F930
//   0x6F853 test    r15b, r15b
//   0x6F856 jnz     short loc_6F867
//   0x6F858 call    sub_640C0
//   0x6F85D mov     ebp, eax
//   0x6F85F test    al, al
//   0x6F861 jnz     loc_6F909
//   0x6F867 lea     r14, [rsp+58h+var_48]
//   0x6F86C lea     rcx, [rsp+58h+var_4E]
//   0x6F871 mov     edx, ebx
//   0x6F873 mov     rsi, r13
//   0x6F876 mov     rdi, r14
//   0x6F879 call    sub_67120
//   0x6F87E cmp     [rsp+58h+var_48], 0
//   0x6F884 jz      loc_6F960
//   0x6F88A movzx   r8d, [rsp+58h+var_4E]
//   0x6F890 lea     rsi, [rsp+58h+var_4C]
//   0x6F895 mov     rcx, r14
//   0x6F898 mov     edx, ebx
//   0x6F89A movzx   r9d, r15b
//   0x6F89E mov     rdi, r13
//   0x6F8A1 mov     [rsp+58h+var_4C], 0FFFFFFFFh
//   0x6F8A9 call    sub_6F9D0
//   0x6F8AE mov     ebp, eax
//   0x6F8B0 test    al, al
//   0x6F8B2 jz      short loc_6F8F9
//   0x6F8B4 mov     edx, [rsp+58h+var_4C]
//   0x6F8B8 mov     rax, [r13+8]
//   0x6F8BC sub     rax, [r13+0]
//   0x6F8C0 sar     rax, 3
//   0x6F8C4 mov     r11, rdx
//   0x6F8C7 cmp     rdx, rax
//   0x6F8CA jnb     loc_6F969
//   0x6F8D0 test    r15b, r15b
//   0x6F8D3 jnz     short loc_6F8F0
//   0x6F8D5 lea     rdi, [r13+0A8h]
//   0x6F8DC mov     esi, ebx
//   0x6F8DE call    sub_5F700
//   0x6F8E3 test    rax, rax
//   0x6F8E6 jz      loc_6F993
//   0x6F8EC mov     [rax+10h], r11d
//   0x6F8F0 test    r12, r12
//   0x6F8F3 jz      short loc_6F8F9
//   0x6F8F5 mov     [r12], r11d
//   0x6F8F9 mov     rdi, [rsp+58h+var_48]
//   0x6F8FE test    rdi, rdi
//   0x6F901 jz      short loc_6F909
//   0x6F903 mov     rax, [rdi]
//   0x6F906 call    qword ptr [rax+8]
//   0x6F909 mov     rax, [rsp+58h+var_40]
//   0x6F90E sub     rax, fs:28h
//   0x6F917 jnz     short loc_6F964
//   0x6F919 add     rsp, 28h
//   0x6F91D mov     eax, ebp
//   0x6F91F pop     rbx
//   0x6F920 pop     rbp
//   0x6F921 pop     r12
//   0x6F923 pop     r13
//   0x6F925 pop     r14
//   0x6F927 pop     r15
//   0x6F929 retn
//   0x6F92A align 10h
//   0x6F930 mov     rax, [rsp+58h+var_40]
//   0x6F935 sub     rax, fs:28h
//   0x6F93E jnz     short loc_6F964
//   0x6F940 add     rsp, 28h
//   0x6F944 movzx   ecx, r15b
//   0x6F948 pop     rbx
//   0x6F949 pop     rbp
//   0x6F94A pop     r12
//   0x6F94C pop     r13
//   0x6F94E pop     r14
//   0x6F950 pop     r15
//   0x6F952 jmp     sub_6F3C0
//   0x6F957 align 20h
//   0x6F960 xor     ebp, ebp
//   0x6F962 jmp     short loc_6F909
//   0x6F964 call    ___stack_chk_fail
//   0x6F969 mov     rax, cs:under_debugger_ptr
//   0x6F970 cmp     byte ptr [rax], 0
//   0x6F973 jnz     loc_22C2A
//   0x6F979 mov     rax, [rsp+58h+var_40]
//   0x6F97E sub     rax, fs:28h
//   0x6F987 jnz     short loc_6F964
//   0x6F989 mov     edi, 775Eh
//   0x6F98E call    _interr
//   0x6F993 mov     rax, cs:under_debugger_ptr
//   0x6F99A cmp     byte ptr [rax], 0
//   0x6F99D jnz     loc_22C2A
//   0x6F9A3 mov     rax, [rsp+58h+var_40]
//   0x6F9A8 sub     rax, fs:28h
//   0x6F9B1 jnz     short loc_6F964
//   0x6F9B3 mov     edi, 7767h
//   0x6F9B8 call    _interr
//   0x6F9BD mov     rbx, rax
//   0x6F9C0 jmp     loc_22C2C
// ============================================================

void sub_6F820(/* signature unknown */)
{
    // see disassembly above
}

