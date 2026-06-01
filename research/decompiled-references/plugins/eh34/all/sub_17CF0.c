// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x17CF0
// Name:           sub_17CF0
// Function size:  306 bytes (68 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x17CF0 push    rbp
//   0x17CF1 mov     rbp, rsi
//   0x17CF4 push    rbx
//   0x17CF5 mov     rbx, rdi
//   0x17CF8 sub     rsp, 8
//   0x17CFC cmp     byte ptr [rdi+8], 0
//   0x17D00 jz      loc_17D90
//   0x17D06 xor     ecx, ecx
//   0x17D08 lea     rsi, [rbx+38h]
//   0x17D0C mov     rdx, rbp
//   0x17D0F mov     edi, 3
//   0x17D14 call    _hook_event_listener
//   0x17D19 xor     ecx, ecx
//   0x17D1B xor     edi, edi
//   0x17D1D lea     rsi, [rbx+0AE8h]
//   0x17D24 mov     rdx, rbp
//   0x17D27 call    _hook_event_listener
//   0x17D2C xor     ecx, ecx
//   0x17D2E mov     rdx, rbp
//   0x17D31 mov     edi, 1
//   0x17D36 lea     rsi, [rbx+0B00h]
//   0x17D3D call    _hook_event_listener
//   0x17D42 cmp     byte ptr [rbx+0C18h], 0
//   0x17D49 jz      short loc_17DB8
//   0x17D4B lea     rdi, [rbx+0C30h]
//   0x17D52 call    sub_6D190
//   0x17D57 lea     rdi, [rbx+0CE0h]
//   0x17D5E call    sub_6D190
//   0x17D63 lea     rdi, [rbx+0D88h]
//   0x17D6A call    sub_6D190
//   0x17D6F lea     rdi, [rbx+0E30h]
//   0x17D76 call    sub_6D190
//   0x17D7B add     rsp, 8
//   0x17D7F lea     rdi, [rbx+0ED8h]
//   0x17D86 pop     rbx
//   0x17D87 pop     rbp
//   0x17D88 jmp     sub_6D190
//   0x17D8D align 10h
//   0x17D90 call    _get_hexdsp
//   0x17D95 mov     rdx, rbx
//   0x17D98 mov     edi, 23Eh
//   0x17D9D lea     rsi, sub_14200
//   0x17DA4 mov     rcx, rax
//   0x17DA7 xor     eax, eax
//   0x17DA9 call    rcx
//   0x17DAB mov     byte ptr [rbx+8], 1
//   0x17DAF jmp     loc_17D06
//   0x17DB4 align 8
//   0x17DB8 lea     rdi, [rbx+0B50h]
//   0x17DBF call    sub_6D190
//   0x17DC4 cmp     byte ptr [rbx+0C18h], 0
//   0x17DCB jnz     loc_17D4B
//   0x17DD1 mov     rax, [rbx+0C10h]
//   0x17DD8 lea     rdx, s1
//   0x17DDF cmp     qword ptr [rax+8], 0
//   0x17DE4 jz      short loc_17DE9
//   0x17DE6 mov     rdx, [rax]
//   0x17DE9 cmp     qword ptr [rbx+0C00h], 0
//   0x17DF1 lea     rsi, s1
//   0x17DF8 jz      short loc_17E01
//   0x17DFA mov     rsi, [rbx+0BF8h]
//   0x17E01 mov     r8, cs:callui_ptr
//   0x17E08 mov     ecx, 1
//   0x17E0D mov     edi, 81h
//   0x17E12 xor     eax, eax
//   0x17E14 call    qword ptr [r8]
//   0x17E17 mov     [rbx+0C18h], al
//   0x17E1D jmp     loc_17D4B
// ============================================================

void sub_17CF0(/* signature unknown */)
{
    // see disassembly above
}

