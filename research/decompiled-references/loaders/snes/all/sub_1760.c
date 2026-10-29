// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1760
// Name:           sub_1760
// Function size:  412 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1760 push    r15
//   0x1762 push    r14
//   0x1764 push    r13
//   0x1766 push    r12
//   0x1768 push    rbp
//   0x1769 push    rbx
//   0x176A sub     rsp, 48h
//   0x176E mov     r13, fs:28h
//   0x1777 mov     [rsp+78h+var_40], r13
//   0x177C lea     r13d, [rdx+7FFFh]
//   0x1783 shr     r13d, 0Fh
//   0x1787 jz      loc_18AC
//   0x178D movzx   r10d, cl
//   0x1791 mov     [rsp+78h+var_68], rdi
//   0x1796 mov     r14d, esi
//   0x1799 xor     r15d, r15d
//   0x179C lea     eax, [r13+r10+0]
//   0x17A1 mov     [rsp+78h+var_6C], r10d
//   0x17A6 mov     ebp, r10d
//   0x17A9 mov     [rsp+78h+var_70], eax
//   0x17AD mov     [rsp+78h+var_60], esi
//   0x17B1 mov     [rsp+78h+var_5C], edx
//   0x17B5 nop     word ptr [rax+rax+00000000h]
//   0x17C0 lea     eax, [rbp-7Eh]
//   0x17C3 cmp     eax, 1
//   0x17C6 jbe     loc_1874
//   0x17CC mov     ebx, ebp
//   0x17CE mov     edx, [rsp+78h+var_60]
//   0x17D2 mov     rdi, [rsp+78h+var_68]
//   0x17D7 mov     esi, r14d
//   0x17DA shl     ebx, 10h
//   0x17DD mov     r8d, 1
//   0x17E3 add     ebx, 8000h
//   0x17E9 lea     rax, [rbx+8000h]
//   0x17F0 mov     [rsp+78h+var_78], rax
//   0x17F4 mov     eax, [rsp+78h+var_5C]
//   0x17F8 lea     ecx, [rax+rdx]
//   0x17FB mov     eax, 8000h
//   0x1800 mov     rdx, rbx
//   0x1803 sub     ecx, r14d
//   0x1806 cmp     ecx, eax
//   0x1808 cmova   rcx, rax
//   0x180C add     rcx, rbx
//   0x180F call    _file2base
//   0x1814 test    eax, eax
//   0x1816 jz      loc_18CF
//   0x181C lea     rdi, [rbx-8000h]
//   0x1823 lea     r13, [rsp+78h+var_58]
//   0x1828 shr     rdi, 4
//   0x182C call    _allocate_selector
//   0x1831 mov     ecx, ebp
//   0x1833 mov     esi, 10h
//   0x1838 mov     rdi, r13
//   0x183B mov     r12, rax
//   0x183E lea     rdx, a02x; ".%02X"
//   0x1845 xor     eax, eax
//   0x1847 call    _qsnprintf
//   0x184C mov     rdx, [rsp+78h+var_78]
//   0x1850 xor     r9d, r9d
//   0x1853 mov     rcx, r13
//   0x1856 lea     r8, aBankRom; "BANK_ROM"
//   0x185D mov     rsi, rbx
//   0x1860 mov     rdi, r12
//   0x1863 call    _add_segm
//   0x1868 test    al, al
//   0x186A jz      short loc_18B1
//   0x186C cmp     [rsp+78h+var_6C], ebp
//   0x1870 cmovz   r15, r12
//   0x1874 mov     eax, [rsp+78h+var_70]
//   0x1878 add     ebp, 1
//   0x187B add     r14d, 8000h
//   0x1882 cmp     ebp, eax
//   0x1884 jnz     loc_17C0
//   0x188A mov     rdx, [rsp+78h+var_40]
//   0x188F sub     rdx, fs:28h
//   0x1898 jnz     short loc_18F7
//   0x189A add     rsp, 48h
//   0x189E mov     rax, r15
//   0x18A1 pop     rbx
//   0x18A2 pop     rbp
//   0x18A3 pop     r12
//   0x18A5 pop     r13
//   0x18A7 pop     r14
//   0x18A9 pop     r15
//   0x18AB retn
//   0x18AC xor     r15d, r15d
//   0x18AF jmp     short loc_188A
//   0x18B1 mov     rax, [rsp+78h+var_40]
//   0x18B6 sub     rax, fs:28h
//   0x18BF jnz     short loc_18F7
//   0x18C1 lea     rdi, aFailedAddingBa; "Failed adding .BANK segment\n"
//   0x18C8 xor     eax, eax
//   0x18CA call    sub_1270
//   0x18CF mov     rax, [rsp+78h+var_40]
//   0x18D4 sub     rax, fs:28h
//   0x18DD jnz     short loc_18F7
//   0x18DF mov     rcx, [rsp+78h+var_78]
//   0x18E3 mov     rdx, rbx
//   0x18E6 mov     esi, r14d
//   0x18E9 xor     eax, eax
//   0x18EB lea     rdi, aFailedMapping0; "Failed mapping 0x%x -> [0x%a, 0x%a)\n"
//   0x18F2 call    sub_1270
//   0x18F7 call    ___stack_chk_fail
// ============================================================

void sub_1760(/* signature unknown */)
{
    // see disassembly above
}

