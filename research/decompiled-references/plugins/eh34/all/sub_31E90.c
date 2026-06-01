// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31E90
// Name:           sub_31E90
// Function size:  264 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31E90 lea     rax, off_8C790
//   0x31E97 push    rbx
//   0x31E98 cmp     byte ptr [rdi+0C8h], 0
//   0x31E9F mov     rbx, rdi
//   0x31EA2 mov     [rdi], rax
//   0x31EA5 lea     rax, off_8BB08
//   0x31EAC mov     [rdi+0A0h], rax
//   0x31EB3 jz      short loc_31EFA
//   0x31EB5 mov     rax, [rdi+0C0h]
//   0x31EBC lea     rdx, s1
//   0x31EC3 cmp     qword ptr [rax+8], 0
//   0x31EC8 jnz     loc_31F90
//   0x31ECE cmp     qword ptr [rbx+0B0h], 0
//   0x31ED6 lea     rsi, s1
//   0x31EDD jnz     loc_31F80
//   0x31EE3 mov     rcx, cs:callui_ptr
//   0x31EEA mov     edi, 82h
//   0x31EEF xor     eax, eax
//   0x31EF1 call    qword ptr [rcx]
//   0x31EF3 mov     byte ptr [rbx+0C8h], 0
//   0x31EFA mov     rdi, [rbx+0A8h]
//   0x31F01 test    rdi, rdi
//   0x31F04 jz      short loc_31F16
//   0x31F06 mov     qword ptr [rbx+0B0h], 0
//   0x31F11 call    _qfree
//   0x31F16 lea     rax, unk_8CA80
//   0x31F1D mov     rdi, rbx
//   0x31F20 add     rax, 10h
//   0x31F24 mov     [rbx], rax
//   0x31F27 call    sub_6D1D0
//   0x31F2C mov     rdi, [rbx+40h]
//   0x31F30 test    rdi, rdi
//   0x31F33 jz      short loc_31F42
//   0x31F35 mov     qword ptr [rbx+48h], 0
//   0x31F3D call    _qfree
//   0x31F42 mov     rdi, [rbx+28h]
//   0x31F46 test    rdi, rdi
//   0x31F49 jz      short loc_31F58
//   0x31F4B mov     qword ptr [rbx+30h], 0
//   0x31F53 call    _qfree
//   0x31F58 mov     rdi, [rbx+10h]
//   0x31F5C test    rdi, rdi
//   0x31F5F jz      short loc_31F6E
//   0x31F61 mov     qword ptr [rbx+18h], 0
//   0x31F69 call    _qfree
//   0x31F6E mov     rdi, rbx
//   0x31F71 pop     rbx
//   0x31F72 jmp     _qfree
//   0x31F77 align 20h
//   0x31F80 mov     rsi, [rbx+0A8h]
//   0x31F87 jmp     loc_31EE3
//   0x31F8C align 10h
//   0x31F90 mov     rdx, [rax]
//   0x31F93 jmp     loc_31ECE
// ============================================================

void sub_31E90(/* signature unknown */)
{
    // see disassembly above
}

