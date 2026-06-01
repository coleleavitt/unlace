// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1430
// Name:           sub_1430
// Function size:  423 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1430 push    r15
//   0x1432 push    r14
//   0x1434 push    r13
//   0x1436 push    r12
//   0x1438 push    rbp
//   0x1439 push    rbx
//   0x143A sub     rsp, 48h
//   0x143E mov     r11, fs:28h
//   0x1447 mov     [rsp+78h+var_40], r11
//   0x144C mov     r11d, edx
//   0x144F lea     r13d, [r11+0FFFFh]
//   0x1456 shr     r13d, 10h
//   0x145A jz      loc_1587
//   0x1460 mov     eax, r8d
//   0x1463 movzx   r8d, cl
//   0x1467 mov     [rsp+78h+var_68], rdi
//   0x146C xor     r15d, r15d
//   0x146F lea     r10d, [rsi+rax]
//   0x1473 lea     eax, [r13+r8+0]
//   0x1478 mov     [rsp+78h+var_6C], r8d
//   0x147D mov     ebx, r8d
//   0x1480 mov     [rsp+78h+var_70], eax
//   0x1484 mov     r14d, r10d
//   0x1487 mov     [rsp+78h+var_60], r10d
//   0x148C mov     [rsp+78h+var_5C], r11d
//   0x1491 nop     word ptr [rax+rax+00000000h]
//   0x149C nop     dword ptr [rax+00h]
//   0x14A0 lea     eax, [rbx-7Eh]
//   0x14A3 cmp     eax, 1
//   0x14A6 jbe     loc_154F
//   0x14AC mov     r10d, ebx
//   0x14AF mov     edx, [rsp+78h+var_60]
//   0x14B3 mov     rdi, [rsp+78h+var_68]
//   0x14B8 mov     esi, r14d
//   0x14BB shl     r10d, 10h
//   0x14BF mov     r8d, 1
//   0x14C5 mov     ebp, r10d
//   0x14C8 lea     rax, [rbp+10000h]
//   0x14CF mov     [rsp+78h+var_78], rax
//   0x14D3 mov     eax, [rsp+78h+var_5C]
//   0x14D7 lea     ecx, [rax+rdx]
//   0x14DA mov     eax, 10000h
//   0x14DF mov     rdx, rbp
//   0x14E2 sub     ecx, r14d
//   0x14E5 cmp     ecx, eax
//   0x14E7 cmova   rcx, rax
//   0x14EB add     rcx, rbp
//   0x14EE call    _file2base
//   0x14F3 test    eax, eax
//   0x14F5 jz      loc_15AA
//   0x14FB mov     rdi, rbp
//   0x14FE lea     r13, [rsp+78h+var_58]
//   0x1503 shr     rdi, 4
//   0x1507 call    _allocate_selector
//   0x150C mov     ecx, ebx
//   0x150E mov     esi, 10h
//   0x1513 mov     rdi, r13
//   0x1516 mov     r12, rax
//   0x1519 lea     rdx, a02x; ".%02X"
//   0x1520 xor     eax, eax
//   0x1522 call    _qsnprintf
//   0x1527 mov     rdx, [rsp+78h+var_78]
//   0x152B xor     r9d, r9d
//   0x152E mov     rcx, r13
//   0x1531 lea     r8, aBankRom; "BANK_ROM"
//   0x1538 mov     rsi, rbp
//   0x153B mov     rdi, r12
//   0x153E call    _add_segm
//   0x1543 test    al, al
//   0x1545 jz      short loc_158C
//   0x1547 cmp     [rsp+78h+var_6C], ebx
//   0x154B cmovz   r15, r12
//   0x154F mov     eax, [rsp+78h+var_70]
//   0x1553 add     ebx, 1
//   0x1556 add     r14d, 10000h
//   0x155D cmp     ebx, eax
//   0x155F jnz     loc_14A0
//   0x1565 mov     rdx, [rsp+78h+var_40]
//   0x156A sub     rdx, fs:28h
//   0x1573 jnz     short loc_15D2
//   0x1575 add     rsp, 48h
//   0x1579 mov     rax, r15
//   0x157C pop     rbx
//   0x157D pop     rbp
//   0x157E pop     r12
//   0x1580 pop     r13
//   0x1582 pop     r14
//   0x1584 pop     r15
//   0x1586 retn
//   0x1587 xor     r15d, r15d
//   0x158A jmp     short loc_1565
//   0x158C mov     rax, [rsp+78h+var_40]
//   0x1591 sub     rax, fs:28h
//   0x159A jnz     short loc_15D2
//   0x159C lea     rdi, aFailedAddingBa; "Failed adding .BANK segment\n"
//   0x15A3 xor     eax, eax
//   0x15A5 call    sub_1270
//   0x15AA mov     rax, [rsp+78h+var_40]
//   0x15AF sub     rax, fs:28h
//   0x15B8 jnz     short loc_15D2
//   0x15BA mov     rcx, [rsp+78h+var_78]
//   0x15BE mov     rdx, rbp
//   0x15C1 mov     esi, r14d
//   0x15C4 xor     eax, eax
//   0x15C6 lea     rdi, aFailedMapping0; "Failed mapping 0x%x -> [0x%a, 0x%a)\n"
//   0x15CD call    sub_1270
//   0x15D2 call    ___stack_chk_fail
// ============================================================

void sub_1430(/* signature unknown */)
{
    // see disassembly above
}

