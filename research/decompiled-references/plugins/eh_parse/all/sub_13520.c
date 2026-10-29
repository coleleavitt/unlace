// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x13520
// Name:           sub_13520
// Function size:  332 bytes (94 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x13520 cmp     edx, 11h
//   0x13523 ja      locret_13628
//   0x13529 push    r15
//   0x1352B mov     r15d, r8d
//   0x1352E push    r14
//   0x13530 mov     r14, rcx
//   0x13533 movsxd  rcx, edx
//   0x13536 push    r13
//   0x13538 mov     r13, rdi
//   0x1353B push    r12
//   0x1353D mov     r12, rsi
//   0x13540 push    rbp
//   0x13541 push    rbx
//   0x13542 mov     ebx, edx
//   0x13544 lea     rdx, [rcx+12h]
//   0x13548 sub     rsp, 28h
//   0x1354C mov     rbp, [rdi+rdx*8+8]
//   0x13551 test    rbp, rbp
//   0x13554 jz      short loc_135B0
//   0x13556 cmp     rbp, 0FFFFFFFFFFFFFFFFh
//   0x1355A jz      loc_13614
//   0x13560 mov     rdi, r12
//   0x13563 call    _get_strid
//   0x13568 cmp     rax, rbp
//   0x1356B jz      loc_13600
//   0x13571 mov     rsi, r12
//   0x13574 mov     rdi, r13
//   0x13577 call    sub_E580
//   0x1357C test    al, al
//   0x1357E jz      loc_13614
//   0x13584 and     r15d, 1
//   0x13588 jnz     loc_13630
//   0x1358E add     rsp, 28h
//   0x13592 mov     rcx, rbp
//   0x13595 mov     rdx, r14
//   0x13598 mov     rdi, r12
//   0x1359B pop     rbx
//   0x1359C mov     esi, 60000000h
//   0x135A1 pop     rbp
//   0x135A2 pop     r12
//   0x135A4 pop     r13
//   0x135A6 pop     r14
//   0x135A8 pop     r15
//   0x135AA jmp     _create_data
//   0x135AF align 10h
//   0x135B0 mov     rax, rcx
//   0x135B3 lea     rsi, off_2E620; "RUNTIME_FUNCTION"
//   0x135BA mov     [rsp+58h+var_48], rcx
//   0x135BF shl     rax, 4
//   0x135C3 mov     [rsp+58h+var_40], rdx
//   0x135C8 mov     rsi, [rsi+rax]
//   0x135CC mov     rdi, rsi
//   0x135CF mov     [rsp+58h+var_50], rsi
//   0x135D4 call    _get_named_type_tid
//   0x135D9 mov     rsi, [rsp+58h+var_50]
//   0x135DE mov     rcx, [rsp+58h+var_48]
//   0x135E3 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x135E7 mov     rbp, rax
//   0x135EA jz      short loc_13648
//   0x135EC cmp     ebx, 0Ah
//   0x135EF jz      short loc_13648
//   0x135F1 mov     rdx, [rsp+58h+var_40]
//   0x135F6 mov     [r13+rdx*8+8], rax
//   0x135FB jmp     loc_13560
//   0x13600 mov     rdi, r12
//   0x13603 call    _get_item_end
//   0x13608 sub     rax, r12
//   0x1360B cmp     rax, r14
//   0x1360E jb      loc_13584
//   0x13614 add     rsp, 28h
//   0x13618 pop     rbx
//   0x13619 pop     rbp
//   0x1361A pop     r12
//   0x1361C pop     r13
//   0x1361E pop     r14
//   0x13620 pop     r15
//   0x13622 retn
//   0x13623 align 8
//   0x13628 retn
//   0x13629 align 10h
//   0x13630 mov     rdx, r14
//   0x13633 mov     rsi, r12
//   0x13636 mov     rdi, r13
//   0x13639 call    sub_111C0
//   0x1363E jmp     loc_1358E
//   0x13643 align 8
//   0x13648 mov     edx, ebx
//   0x1364A mov     rdi, r13
//   0x1364D mov     [rsp+58h+var_50], rcx
//   0x13652 call    sub_12E90
//   0x13657 mov     rcx, [rsp+58h+var_50]
//   0x1365C mov     rbp, rax
//   0x1365F mov     [r13+rcx*8+98h], rax
//   0x13667 jmp     loc_13556
// ============================================================

void sub_13520(/* signature unknown */)
{
    // see disassembly above
}

