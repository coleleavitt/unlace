// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x70E60
// Name:           sub_70E60
// Function size:  279 bytes (61 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x70E60 push    rbp
//   0x70E61 lea     rax, off_8C790
//   0x70E68 lea     rbp, [rdi-0A0h]
//   0x70E6F push    rbx
//   0x70E70 mov     rbx, rdi
//   0x70E73 sub     rsp, 8
//   0x70E77 mov     [rdi-0A0h], rax
//   0x70E7E cmp     byte ptr [rdi+28h], 0
//   0x70E82 lea     rax, off_8BB08
//   0x70E89 mov     [rdi], rax
//   0x70E8C jz      short loc_70ECA
//   0x70E8E mov     rax, [rdi+20h]
//   0x70E92 lea     rdx, s1
//   0x70E99 cmp     qword ptr [rax+8], 0
//   0x70E9E jnz     loc_70F60
//   0x70EA4 cmp     qword ptr [rbx+10h], 0
//   0x70EA9 lea     rsi, s1
//   0x70EB0 jnz     loc_70F50
//   0x70EB6 mov     rcx, cs:callui_ptr
//   0x70EBD mov     edi, 82h
//   0x70EC2 xor     eax, eax
//   0x70EC4 call    qword ptr [rcx]
//   0x70EC6 mov     byte ptr [rbx+28h], 0
//   0x70ECA mov     rdi, [rbx+8]
//   0x70ECE test    rdi, rdi
//   0x70ED1 jz      short loc_70EE0
//   0x70ED3 mov     qword ptr [rbx+10h], 0
//   0x70EDB call    _qfree
//   0x70EE0 lea     rax, unk_8CA80
//   0x70EE7 mov     rdi, rbp
//   0x70EEA add     rax, 10h
//   0x70EEE mov     [rbx-0A0h], rax
//   0x70EF5 call    sub_6D1D0
//   0x70EFA mov     rdi, [rbx-60h]
//   0x70EFE test    rdi, rdi
//   0x70F01 jz      short loc_70F10
//   0x70F03 mov     qword ptr [rbx-58h], 0
//   0x70F0B call    _qfree
//   0x70F10 mov     rdi, [rbx-78h]
//   0x70F14 test    rdi, rdi
//   0x70F17 jz      short loc_70F26
//   0x70F19 mov     qword ptr [rbx-70h], 0
//   0x70F21 call    _qfree
//   0x70F26 mov     rdi, [rbx-90h]
//   0x70F2D test    rdi, rdi
//   0x70F30 jz      short loc_70F42
//   0x70F32 mov     qword ptr [rbx-88h], 0
//   0x70F3D call    _qfree
//   0x70F42 add     rsp, 8
//   0x70F46 mov     rdi, rbp
//   0x70F49 pop     rbx
//   0x70F4A pop     rbp
//   0x70F4B jmp     _qfree
//   0x70F50 mov     rsi, [rbx+8]
//   0x70F54 jmp     loc_70EB6
//   0x70F59 align 20h
//   0x70F60 cmp     qword ptr [rbx+10h], 0
//   0x70F65 mov     rdx, [rax]
//   0x70F68 lea     rsi, s1
//   0x70F6F jz      loc_70EB6
//   0x70F75 jmp     short loc_70F50
// ============================================================

void sub_70E60(/* signature unknown */)
{
    // see disassembly above
}

