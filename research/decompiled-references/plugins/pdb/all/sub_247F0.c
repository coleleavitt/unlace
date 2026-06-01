// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x247F0
// Name:           sub_247F0
// Function size:  229 bytes (62 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x247F0 push    rbp
//   0x247F1 push    rbx
//   0x247F2 sub     rsp, 18h
//   0x247F6 mov     rbx, fs:28h
//   0x247FF mov     [rsp+28h+var_20], rbx
//   0x24804 mov     rbx, rdx
//   0x24807 cmp     rsi, 5Eh ; '^'
//   0x2480B jz      short loc_24860
//   0x2480D cmp     rsi, 60h ; '`'
//   0x24811 jnz     short loc_2487A
//   0x24813 mov     rdi, rsp
//   0x24816 xor     ecx, ecx
//   0x24818 lea     rsi, aPdb; "$ pdb"
//   0x2481F xor     edx, edx
//   0x24821 call    _netnode_check
//   0x24826 movzx   eax, cs:byte_B3728
//   0x2482D test    al, al
//   0x2482F jz      short loc_24890
//   0x24831 mov     edx, 4
//   0x24836 lea     rsi, qword_B36A0
//   0x2483D mov     rdi, rbx
//   0x24840 call    _cvt64_node_supval_for_event
//   0x24845 cdqe
//   0x24847 mov     rdx, [rsp+28h+var_20]
//   0x2484C sub     rdx, fs:28h
//   0x24855 jnz     short loc_248D0
//   0x24857 add     rsp, 18h
//   0x2485B pop     rbx
//   0x2485C pop     rbp
//   0x2485D retn
//   0x2485E align 20h
//   0x24860 mov     eax, [rbx]
//   0x24862 cmp     eax, 2Fh ; '/'
//   0x24865 ja      short loc_24880
//   0x24867 mov     edx, eax
//   0x24869 add     eax, 8
//   0x2486C add     rdx, [rbx+10h]
//   0x24870 mov     [rbx], eax
//   0x24872 mov     rdi, [rdx]
//   0x24875 call    sub_82220
//   0x2487A xor     eax, eax
//   0x2487C jmp     short loc_24847
//   0x2487E align 20h
//   0x24880 mov     rdx, [rbx+8]
//   0x24884 lea     rax, [rdx+8]
//   0x24888 mov     [rbx+8], rax
//   0x2488C jmp     short loc_24872
//   0x2488E align 10h
//   0x24890 lea     rbp, byte_B3728
//   0x24897 mov     rdi, rbp; __guard *
//   0x2489A call    ___cxa_guard_acquire
//   0x2489F test    eax, eax
//   0x248A1 jz      short loc_24831
//   0x248A3 mov     rax, [rsp+28h+var_28]
//   0x248A7 mov     rdi, rbp; __guard *
//   0x248AA mov     cs:qword_B36A0, rax
//   0x248B1 mov     cs:qword_B36B8, rax
//   0x248B8 mov     cs:qword_B36D0, rax
//   0x248BF mov     cs:qword_B36E8, rax
//   0x248C6 call    ___cxa_guard_release
//   0x248CB jmp     loc_24831
//   0x248D0 call    ___stack_chk_fail
// ============================================================

void sub_247F0(/* signature unknown */)
{
    // see disassembly above
}

