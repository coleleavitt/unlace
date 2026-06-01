// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E330
// Name:           sub_1E330
// Function size:  371 bytes (95 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E330 push    r15
//   0x1E332 push    r14
//   0x1E334 push    r13
//   0x1E336 push    r12
//   0x1E338 mov     r12, rdi
//   0x1E33B push    rbp
//   0x1E33C push    rbx
//   0x1E33D sub     rsp, 28h
//   0x1E341 mov     r14, fs:28h
//   0x1E34A mov     [rsp+58h+var_40], r14
//   0x1E34F mov     r14, rsi
//   0x1E352 call    sub_1BDA0
//   0x1E357 test    rax, rax
//   0x1E35A jz      loc_1E478
//   0x1E360 mov     [rsp+58h+var_48], rax
//   0x1E365 mov     rbx, rax
//   0x1E368 lea     rsi, [rsp+58h+var_50]
//   0x1E36D lea     rax, [rsp+58h+var_48]
//   0x1E372 lea     rdi, [r12+6C8h]
//   0x1E37A mov     [rsp+58h+var_50], rax
//   0x1E37F call    sub_1C1A0
//   0x1E384 mov     rdi, rbx
//   0x1E387 call    sub_27D20
//   0x1E38C mov     rax, [rbx]
//   0x1E38F mov     rdi, rbx
//   0x1E392 call    qword ptr [rax+20h]
//   0x1E395 mov     rax, [r12+6E8h]
//   0x1E39D mov     rbx, [r12+6E0h]
//   0x1E3A5 lea     rax, [rax+rax*2]
//   0x1E3A9 lea     rbp, [rbx+rax*8]
//   0x1E3AD cmp     rbx, rbp
//   0x1E3B0 jz      loc_1E44E
//   0x1E3B6 mov     r13, [r14+8]
//   0x1E3BA lea     r15, s1
//   0x1E3C1 jmp     short loc_1E3E5
//   0x1E3C3 align 8
//   0x1E3C8 mov     rsi, [rbx]; s2
//   0x1E3CB mov     rdi, r15; s1
//   0x1E3CE test    r13, r13
//   0x1E3D1 jnz     short loc_1E3F4
//   0x1E3D3 call    _strcmp
//   0x1E3D8 test    eax, eax
//   0x1E3DA jz      short loc_1E400
//   0x1E3DC add     rbx, 18h
//   0x1E3E0 cmp     rbp, rbx
//   0x1E3E3 jz      short loc_1E44E
//   0x1E3E5 cmp     qword ptr [rbx+8], 0
//   0x1E3EA jnz     short loc_1E3C8
//   0x1E3EC test    r13, r13
//   0x1E3EF jz      short loc_1E400
//   0x1E3F1 mov     rsi, r15
//   0x1E3F4 mov     rdi, [r14]
//   0x1E3F7 jmp     short loc_1E3D3
//   0x1E3F9 align 20h
//   0x1E400 cmp     rbx, rbp
//   0x1E403 jz      short loc_1E44E
//   0x1E405 mov     rdi, [rbx]
//   0x1E408 test    rdi, rdi
//   0x1E40B jz      short loc_1E41A
//   0x1E40D mov     qword ptr [rbx+8], 0
//   0x1E415 call    _qfree
//   0x1E41A mov     rax, [r12+6E8h]
//   0x1E422 lea     rsi, [rbx+18h]; src
//   0x1E426 mov     rdi, rbx; dest
//   0x1E429 lea     rdx, [rax+rax*2]
//   0x1E42D mov     rax, [r12+6E0h]
//   0x1E435 lea     rdx, [rax+rdx*8]
//   0x1E439 sub     rdx, rbx
//   0x1E43C sub     rdx, 18h; n
//   0x1E440 call    _memmove
//   0x1E445 sub     qword ptr [r12+6E8h], 1
//   0x1E44E mov     rax, [rsp+58h+var_40]
//   0x1E453 sub     rax, fs:28h
//   0x1E45C jnz     short loc_1E49E
//   0x1E45E add     rsp, 28h
//   0x1E462 mov     rdi, r12
//   0x1E465 pop     rbx
//   0x1E466 pop     rbp
//   0x1E467 pop     r12
//   0x1E469 pop     r13
//   0x1E46B pop     r14
//   0x1E46D pop     r15
//   0x1E46F jmp     sub_1A840
//   0x1E474 align 8
//   0x1E478 xor     edx, edx
//   0x1E47A mov     rdi, r12
//   0x1E47D mov     rsi, r14
//   0x1E480 call    sub_1DD00
//   0x1E485 mov     rbx, rax
//   0x1E488 mov     rdi, rax
//   0x1E48B call    sub_27D20
//   0x1E490 test    rbx, rbx
//   0x1E493 jz      loc_1E395
//   0x1E499 jmp     loc_1E38C
//   0x1E49E call    ___stack_chk_fail
// ============================================================

void sub_1E330(/* signature unknown */)
{
    // see disassembly above
}

