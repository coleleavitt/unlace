// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24980
// Name:           sub_24980
// Function size:  1283 bytes (306 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24980 push    r15
//   0x24982 pxor    xmm0, xmm0
//   0x24986 push    r14
//   0x24988 mov     r14, rdx
//   0x2498B mov     rdx, rcx
//   0x2498E push    r13
//   0x24990 push    r12
//   0x24992 push    rbp
//   0x24993 mov     rbp, rsi
//   0x24996 push    rbx
//   0x24997 sub     rsp, 0C8h
//   0x2499E mov     [rsp+0F8h+var_E8], rdi
//   0x249A3 lea     rdi, [rsp+0F8h+var_A8]
//   0x249A8 mov     [rsp+0F8h+var_E0], r8
//   0x249AD mov     [rsp+0F8h+var_F0], r9
//   0x249B2 mov     rax, fs:28h
//   0x249BB mov     [rsp+0F8h+var_40], rax
//   0x249C3 mov     rax, [rsi+20h]
//   0x249C7 mov     [rsp+0F8h+var_C8], 0
//   0x249D0 mov     r15, [rax+10h]
//   0x249D4 movups  [rsp+0F8h+var_C0], xmm0
//   0x249D9 call    sub_241A0
//   0x249DE mov     r13, [rsp+0F8h+var_A0]
//   0x249E3 mov     rbx, [rsp+0F8h+var_A8]
//   0x249E8 shl     r13, 5
//   0x249EC lea     rax, [rbx+r13]
//   0x249F0 mov     [rsp+0F8h+var_F8], rax
//   0x249F4 cmp     rbx, rax
//   0x249F7 jz      loc_24C71
//   0x249FD lea     r12, [rsp+0F8h+var_68]
//   0x24A05 jmp     loc_24A8D
//   0x24A0A align 10h
//   0x24A10 mov     rcx, rdx
//   0x24A13 shl     rcx, 4
//   0x24A17 add     rcx, rsi
//   0x24A1A cmp     r12, rcx
//   0x24A1D jnb     loc_24AF9
//   0x24A23 cmp     rdx, rdi
//   0x24A26 jb      loc_24C30
//   0x24A2C shl     rax, 4
//   0x24A30 movups  xmmword ptr [rsi+rax], xmm0
//   0x24A34 lea     rdx, [rsp+0F8h+var_88]
//   0x24A39 mov     rcx, rbx
//   0x24A3C mov     rsi, rbp
//   0x24A3F mov     rdi, r12
//   0x24A42 add     qword ptr [rsp+0F8h+var_C0], 1
//   0x24A48 mov     [rsp+0F8h+var_88], r13
//   0x24A4D call    sub_24580
//   0x24A52 cmp     [rsp+0F8h+var_50], 0
//   0x24A5A jnz     loc_24BE7
//   0x24A60 movq    xmm0, [rsp+0F8h+var_88]
//   0x24A66 mov     rdi, [rsp+0F8h+var_F0]
//   0x24A6B mov     rsi, r12
//   0x24A6E movhps  xmm0, qword ptr [rbx+18h]
//   0x24A72 movaps  [rsp+0F8h+var_68], xmm0
//   0x24A7A call    _rangeset_t_add
//   0x24A7F add     rbx, 20h ; ' '
//   0x24A83 cmp     [rsp+0F8h+var_F8], rbx
//   0x24A87 jz      loc_24C68
//   0x24A8D mov     r13, [rbx+10h]
//   0x24A91 mov     rdi, [rbp+20h]
//   0x24A95 mov     rsi, r13
//   0x24A98 call    sub_263B0
//   0x24A9D test    al, al
//   0x24A9F jz      short loc_24A7F
//   0x24AA1 cmp     qword ptr [r14+10h], 0
//   0x24AA6 jz      short loc_24ACC
//   0x24AA8 mov     rcx, [rbp+0]
//   0x24AAC lea     rdi, [rsp+0F8h+var_88]
//   0x24AB1 mov     rdx, r14
//   0x24AB4 mov     rsi, r13
//   0x24AB7 call    sub_6EC40
//   0x24ABC mov     ecx, [rsp+0F8h+var_78]
//   0x24AC3 mov     r13, [rsp+0F8h+var_88]
//   0x24AC8 test    ecx, ecx
//   0x24ACA jnz     short loc_24B40
//   0x24ACC mov     rax, qword ptr [rsp+0F8h+var_C0]
//   0x24AD1 movq    xmm0, r13
//   0x24AD6 mov     rsi, [rsp+0F8h+var_C8]
//   0x24ADB movhps  xmm0, qword ptr [rbx+18h]
//   0x24ADF mov     rdx, qword ptr [rsp+0F8h+var_C0+8]
//   0x24AE4 movaps  [rsp+0F8h+var_68], xmm0
//   0x24AEC lea     rdi, [rax+1]
//   0x24AF0 cmp     r12, rsi
//   0x24AF3 jnb     loc_24A10
//   0x24AF9 cmp     rdx, rdi
//   0x24AFC jb      short loc_24B18
//   0x24AFE movdqa  xmm0, [rsp+0F8h+var_68]
//   0x24B07 shl     rax, 4
//   0x24B0B movups  xmmword ptr [rsi+rax], xmm0
//   0x24B0F jmp     loc_24A34
//   0x24B14 align 8
//   0x24B18 lea     rax, [rsp+0F8h+var_C8]
//   0x24B1D mov     rdx, rdi
//   0x24B20 mov     ecx, 10h
//   0x24B25 mov     rdi, rax
//   0x24B28 call    _qvector_reserve
//   0x24B2D mov     [rsp+0F8h+var_C8], rax
//   0x24B32 mov     rsi, rax
//   0x24B35 mov     rax, qword ptr [rsp+0F8h+var_C0]
//   0x24B3A jmp     short loc_24AFE
//   0x24B3C align 20h
//   0x24B40 mov     rax, [rbx]
//   0x24B43 movzx   r8d, byte ptr [r14+2]
//   0x24B48 mov     rdx, [rax+28h]
//   0x24B4C mov     rax, [rax+30h]
//   0x24B50 add     r8, r15
//   0x24B53 lea     rsi, [rdx+rax*4]
//   0x24B57 cmp     rdx, rsi
//   0x24B5A jz      short loc_24B92
//   0x24B5C mov     rax, [rbp+10h]
//   0x24B60 mov     rdi, [rax+48h]
//   0x24B64 nop     word ptr [rax+rax+00000000h]
//   0x24B6F nop
//   0x24B70 movsxd  rax, dword ptr [rdx]
//   0x24B73 shl     rax, 6
//   0x24B77 add     rax, rdi
//   0x24B7A cmp     [rax], r15
//   0x24B7D jb      short loc_24B89
//   0x24B7F cmp     r8, [rax+8]
//   0x24B83 jnb     loc_24A7F
//   0x24B89 add     rdx, 4
//   0x24B8D cmp     rsi, rdx
//   0x24B90 jnz     short loc_24B70
//   0x24B92 mov     r13, [rsp+0F8h+var_80]
//   0x24B97 mov     rdi, [rbp+20h]
//   0x24B9B mov     dword ptr [rsp+0F8h+var_D8], ecx
//   0x24B9F mov     rsi, r13
//   0x24BA2 call    sub_26550
//   0x24BA7 mov     ecx, eax
//   0x24BA9 shr     cx, 8
//   0x24BAD jz      loc_24A7F
//   0x24BB3 test    al, al
//   0x24BB5 jz      loc_24A7F
//   0x24BBB mov     edi, dword ptr [rsp+0F8h+var_D8]
//   0x24BBF mov     rbx, [rbp+8]
//   0x24BC3 call    sub_6EA40
//   0x24BC8 mov     r8, rax
//   0x24BCB lea     rdi, [rsp+0F8h+var_68]
//   0x24BD3 mov     rcx, r13
//   0x24BD6 xor     eax, eax
//   0x24BD8 lea     rdx, aGetEpilogSplit; "get_epilog_split_eas(%a): %s"
//   0x24BDF mov     rsi, rbx
//   0x24BE2 call    sub_64B50
//   0x24BE7 mov     rax, qword ptr [rsp+0F8h+var_68]
//   0x24BEF mov     rcx, [rsp+0F8h+var_E8]
//   0x24BF4 mov     [rcx], rax
//   0x24BF7 movdqu  xmm0, [rsp+0F8h+var_68+8]
//   0x24C00 mov     byte ptr [rcx+18h], 1
//   0x24C04 movups  xmmword ptr [rcx+8], xmm0
//   0x24C08 mov     rdi, [rsp+0F8h+var_A8]
//   0x24C0D test    rdi, rdi
//   0x24C10 jz      loc_24C9C
//   0x24C16 mov     [rsp+0F8h+var_A0], 0
//   0x24C1F call    _qfree
//   0x24C24 jmp     short loc_24C9C
//   0x24C26 align 10h
//   0x24C30 lea     rax, [rsp+0F8h+var_C8]
//   0x24C35 mov     rdx, rdi
//   0x24C38 mov     ecx, 10h
//   0x24C3D movaps  [rsp+0F8h+var_D8], xmm0
//   0x24C42 mov     rdi, rax
//   0x24C45 call    _qvector_reserve
//   0x24C4A mov     [rsp+0F8h+var_C8], rax
//   0x24C4F mov     rsi, rax
//   0x24C52 movdqa  xmm0, [rsp+0F8h+var_D8]
//   0x24C58 mov     rax, qword ptr [rsp+0F8h+var_C0]
//   0x24C5D jmp     loc_24A2C
//   0x24C62 align 8
//   0x24C68 mov     rax, [rsp+0F8h+var_A8]
//   0x24C6D mov     [rsp+0F8h+var_F8], rax
//   0x24C71 mov     rax, [rsp+0F8h+var_F8]
//   0x24C75 test    rax, rax
//   0x24C78 jz      short loc_24C8B
//   0x24C7A mov     [rsp+0F8h+var_A0], 0
//   0x24C83 mov     rdi, rax
//   0x24C86 call    _qfree
//   0x24C8B cmp     qword ptr [rsp+0F8h+var_C0], 0
//   0x24C91 jnz     short loc_24CE8
//   0x24C93 mov     rax, [rsp+0F8h+var_E8]
//   0x24C98 mov     byte ptr [rax+18h], 0
//   0x24C9C mov     rdi, [rsp+0F8h+var_C8]
//   0x24CA1 test    rdi, rdi
//   0x24CA4 jz      short loc_24CB4
//   0x24CA6 mov     qword ptr [rsp+0F8h+var_C0], 0
//   0x24CAF call    _qfree
//   0x24CB4 mov     rax, [rsp+0F8h+var_40]
//   0x24CBC sub     rax, fs:28h
//   0x24CC5 jnz     loc_24E6E
//   0x24CCB mov     rax, [rsp+0F8h+var_E8]
//   0x24CD0 add     rsp, 0C8h
//   0x24CD7 pop     rbx
//   0x24CD8 pop     rbp
//   0x24CD9 pop     r12
//   0x24CDB pop     r13
//   0x24CDD pop     r14
//   0x24CDF pop     r15
//   0x24CE1 retn
//   0x24CE2 align 8
//   0x24CE8 mov     rax, [rbp+10h]
//   0x24CEC xor     r12d, r12d
//   0x24CEF mov     ecx, [rax+60h]
//   0x24CF2 test    ecx, ecx
//   0x24CF4 jg      short loc_24D0A
//   0x24CF6 jmp     short loc_24C93
//   0x24CF8 align 20h
//   0x24D00 add     r12, 1
//   0x24D04 cmp     [r14+60h], r12d
//   0x24D08 jle     short loc_24C93
//   0x24D0A mov     rbx, [rbp+18h]
//   0x24D0E call    _get_hexdsp
//   0x24D13 mov     rcx, rax
//   0x24D16 mov     edx, r12d
//   0x24D19 mov     rsi, rbx
//   0x24D1C mov     edi, 0D5h
//   0x24D21 xor     eax, eax
//   0x24D23 call    rcx
//   0x24D25 mov     r14, [rbp+10h]
//   0x24D29 test    al, al
//   0x24D2B jz      short loc_24D00
//   0x24D2D mov     rsi, qword ptr [rsp+0F8h+var_C0]
//   0x24D32 mov     r8, r12
//   0x24D35 shl     r8, 6
//   0x24D39 add     r8, [r14+48h]
//   0x24D3D test    rsi, rsi
//   0x24D40 jz      short loc_24D00
//   0x24D42 mov     rdi, [rsp+0F8h+var_C8]
//   0x24D47 mov     rcx, [r8]
//   0x24D4A xor     edx, edx
//   0x24D4C xor     eax, eax
//   0x24D4E jmp     short loc_24D6B
//   0x24D50 align 20h
//   0x24D60 add     edx, 1
//   0x24D63 movsxd  rax, edx
//   0x24D66 cmp     rax, rsi
//   0x24D69 jnb     short loc_24D00
//   0x24D6B shl     rax, 4
//   0x24D6F lea     rbx, [rdi+rax]
//   0x24D73 cmp     rcx, [rbx+8]
//   0x24D77 jnb     short loc_24D60
//   0x24D79 mov     r13, [rbx]
//   0x24D7C cmp     r13, [r8+8]
//   0x24D80 setb    r9b
//   0x24D84 cmp     rcx, r13
//   0x24D87 setb    al
//   0x24D8A and     r9b, al
//   0x24D8D jz      short loc_24D60
//   0x24D8F mov     rax, [rsp+0F8h+var_E0]
//   0x24D94 mov     r15, [rax+10h]
//   0x24D98 lea     rcx, [rax+8]
//   0x24D9C test    r15, r15
//   0x24D9F jnz     short loc_24DC3
//   0x24DA1 jmp     loc_24E35
//   0x24DA6 align 20h
//   0x24DC0 mov     r15, rax
//   0x24DC3 mov     rdx, [r15+20h]
//   0x24DC7 mov     rdi, [r15+10h]
//   0x24DCB xor     esi, esi
//   0x24DCD mov     rax, [r15+18h]
//   0x24DD1 cmp     r13, rdx
//   0x24DD4 jnb     short loc_24DDC
//   0x24DD6 mov     rax, rdi
//   0x24DD9 mov     esi, r9d
//   0x24DDC test    rax, rax
//   0x24DDF jnz     short loc_24DC0
//   0x24DE1 test    sil, sil
//   0x24DE4 jnz     short loc_24E38
//   0x24DE6 cmp     rdx, r13
//   0x24DE9 jnb     loc_24D00
//   0x24DEF cmp     r15, rcx
//   0x24DF2 jnz     short loc_24E64
//   0x24DF4 mov     edi, 28h ; '('; unsigned __int64
//   0x24DF9 mov     [rsp+0F8h+var_F0], rcx
//   0x24DFE mov     byte ptr [rsp+0F8h+var_F8], r9b
//   0x24E02 call    __Znwm; operator new(ulong)
//   0x24E07 mov     rsi, rax
//   0x24E0A mov     rax, [rbx]
//   0x24E0D movzx   edi, byte ptr [rsp+0F8h+var_F8]
//   0x24E11 mov     rdx, r15
//   0x24E14 mov     rcx, [rsp+0F8h+var_F0]
//   0x24E19 mov     [rsi+20h], rax
//   0x24E1D call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x24E22 mov     rax, [rsp+0F8h+var_E0]
//   0x24E27 add     qword ptr [rax+28h], 1
//   0x24E2C mov     r14, [rbp+10h]
//   0x24E30 jmp     loc_24D00
//   0x24E35 mov     r15, rcx
//   0x24E38 mov     rax, [rsp+0F8h+var_E0]
//   0x24E3D cmp     r15, [rax+18h]
//   0x24E41 jz      short loc_24DEF
//   0x24E43 mov     rdi, r15
//   0x24E46 mov     [rsp+0F8h+var_F0], rcx
//   0x24E4B mov     byte ptr [rsp+0F8h+var_F8], r9b
//   0x24E4F call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x24E54 mov     rcx, [rsp+0F8h+var_F0]
//   0x24E59 movzx   r9d, byte ptr [rsp+0F8h+var_F8]
//   0x24E5E mov     rdx, [rax+20h]
//   0x24E62 jmp     short loc_24DE6
//   0x24E64 cmp     r13, [r15+20h]
//   0x24E68 setb    r9b
//   0x24E6C jmp     short loc_24DF4
//   0x24E6E call    ___stack_chk_fail
//   0x24E73 mov     rbx, rax
//   0x24E76 jmp     loc_77AC
//   0x24E7B mov     rbx, rax
//   0x24E7E jmp     loc_77C2
// ============================================================

void sub_24980(/* signature unknown */)
{
    // see disassembly above
}

