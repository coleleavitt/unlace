// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5C870
// Name:           sub_5C870
// Function size:  3114 bytes (690 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5C870 push    r15
//   0x5C872 push    r14
//   0x5C874 mov     r14, rsi
//   0x5C877 push    r13
//   0x5C879 mov     r13, rdi
//   0x5C87C push    r12
//   0x5C87E push    rbp
//   0x5C87F push    rbx
//   0x5C880 sub     rsp, 1F8h
//   0x5C887 mov     rbp, fs:28h
//   0x5C890 mov     [rsp+228h+var_40], rbp
//   0x5C898 mov     rbp, rdx
//   0x5C89B lea     r12, [rsp+228h+var_148]
//   0x5C8A3 mov     rdi, r12
//   0x5C8A6 call    sub_84A60
//   0x5C8AB mov     rsi, r12
//   0x5C8AE mov     rdi, rbp
//   0x5C8B1 call    sub_98E20
//   0x5C8B6 mov     ebx, eax
//   0x5C8B8 test    al, al
//   0x5C8BA jnz     short loc_5C930
//   0x5C8BC mov     rax, cs:debug_ptr
//   0x5C8C3 mov     eax, [rax]
//   0x5C8C5 test    eax, 400000h
//   0x5C8CA jnz     short loc_5C908
//   0x5C8CC xor     ebx, ebx
//   0x5C8CE mov     rdi, r12
//   0x5C8D1 call    sub_1B750
//   0x5C8D6 mov     rax, [rsp+228h+var_40]
//   0x5C8DE sub     rax, fs:28h
//   0x5C8E7 jnz     loc_5D41E
//   0x5C8ED add     rsp, 1F8h
//   0x5C8F4 mov     eax, ebx
//   0x5C8F6 pop     rbx
//   0x5C8F7 pop     rbp
//   0x5C8F8 pop     r12
//   0x5C8FA pop     r13
//   0x5C8FC pop     r14
//   0x5C8FE pop     r15
//   0x5C900 retn
//   0x5C901 align 8
//   0x5C908 xor     edx, edx
//   0x5C90A xor     esi, esi
//   0x5C90C mov     rdi, rbp
//   0x5C90F call    sub_81860
//   0x5C914 mov     rsi, rax
//   0x5C917 lea     rdi, aCouldnTCollect; "Couldn't collect type for DIE @ %s\n"
//   0x5C91E xor     eax, eax
//   0x5C920 call    sub_88B80
//   0x5C925 jmp     short loc_5C8CC
//   0x5C927 align 10h
//   0x5C930 mov     rdi, r12
//   0x5C933 call    sub_97BF0
//   0x5C938 mov     ecx, eax
//   0x5C93A cmp     ax, 42h; switch 67 cases
//   0x5C93E ja      short def_5C951; jumptable 000000000005C951 default case, cases 0,2-14,17,19,20,22-30,32-37,39-52,54,56-58,60-65
//   0x5C940 lea     rdx, jpt_5C951
//   0x5C947 movzx   eax, ax
//   0x5C94A movsxd  rax, ds:(jpt_5C951 - 0AB71Ch)[rdx+rax*4]
//   0x5C94E add     rax, rdx
//   0x5C951 jmp     rax; switch jump
//   0x5C953 align 8
//   0x5C958 mov     r9, [r13+50h]; jumptable 000000000005C951 default case, cases 0,2-14,17,19,20,22-30,32-37,39-52,54,56-58,60-65
//   0x5C95C mov     rsi, rbp
//   0x5C95F mov     dword ptr [rsp+228h+var_228], ecx
//   0x5C962 mov     rdi, r9
//   0x5C965 call    sub_58480
//   0x5C96A mov     ecx, dword ptr [rsp+228h+var_228]
//   0x5C96D test    eax, eax
//   0x5C96F jnz     loc_5CFA0
//   0x5C975 cmp     cx, 24h ; '$'
//   0x5C979 jz      loc_5D33C
//   0x5C97F mov     rax, [r13+0]
//   0x5C983 lea     rdx, sub_12FA0
//   0x5C98A mov     rax, [rax+10h]
//   0x5C98E cmp     rax, rdx
//   0x5C991 jz      loc_5C8BC
//   0x5C997 mov     rdx, rbp
//   0x5C99A mov     rsi, r14
//   0x5C99D mov     rdi, r13
//   0x5C9A0 call    rax
//   0x5C9A2 nop     word ptr [rax+rax+00000000h]
//   0x5C9AD nop     dword ptr [rax]
//   0x5C9B0 mov     r13d, eax
//   0x5C9B3 test    r13b, r13b
//   0x5C9B6 jnz     loc_5C8CE
//   0x5C9BC jmp     loc_5C8BC
//   0x5C9C1 align 8
//   0x5C9C8 lea     r15, [rsp+228h+var_1D0]; jumptable 000000000005C951 cases 15,16,31,66
//   0x5C9CD mov     rdx, r12
//   0x5C9D0 mov     rdi, r13
//   0x5C9D3 mov     [rsp+228h+var_1D0], 0
//   0x5C9DC mov     rsi, r15
//   0x5C9DF mov     [rsp+228h+var_220], r15
//   0x5C9E4 call    sub_62AC0
//   0x5C9E9 test    al, al
//   0x5C9EB jnz     loc_5CCE0
//   0x5C9F1 mov     rdi, r15
//   0x5C9F4 call    _clear_tinfo_t
//   0x5C9F9 jmp     loc_5C8BC
//   0x5C9FE align 20h
//   0x5CA00 lea     r15, [rsp+228h+var_1C8]; jumptable 000000000005C951 cases 38,53
//   0x5CA05 mov     rdx, r12
//   0x5CA08 mov     rdi, r13
//   0x5CA0B mov     dword ptr [rsp+228h+var_228], ecx
//   0x5CA0E mov     qword ptr [rsp+228h+var_1C8], 0
//   0x5CA17 mov     rsi, r15
//   0x5CA1A call    sub_62AC0
//   0x5CA1F test    al, al
//   0x5CA21 jz      loc_5CCC8
//   0x5CA27 mov     ecx, dword ptr [rsp+228h+var_228]
//   0x5CA2A mov     rax, qword ptr [rsp+228h+var_1C8]
//   0x5CA2F cmp     cx, 26h ; '&'
//   0x5CA33 jz      loc_5D295
//   0x5CA39 test    al, al
//   0x5CA3B jz      loc_5D238
//   0x5CA41 or      al, 80h
//   0x5CA43 mov     rsi, r15
//   0x5CA46 mov     rdi, r14
//   0x5CA49 mov     qword ptr [rsp+228h+var_1C8], rax
//   0x5CA4E call    _copy_tinfo_t
//   0x5CA53 mov     rdi, r15
//   0x5CA56 call    _clear_tinfo_t
//   0x5CA5B jmp     loc_5C8CE
//   0x5CA60 mov     rdx, r12; jumptable 000000000005C951 case 55
//   0x5CA63 mov     rsi, r14
//   0x5CA66 mov     rdi, r13
//   0x5CA69 call    sub_62AC0
//   0x5CA6E jmp     loc_5C9B0
//   0x5CA73 mov     rdx, rbp; jumptable 000000000005C951 case 59
//   0x5CA76 mov     rsi, r14
//   0x5CA79 mov     rdi, r13
//   0x5CA7C call    sub_5C3E0
//   0x5CA81 jmp     loc_5C8CE
//   0x5CA86 lea     r15, [rsp+228h+var_1D8]; jumptable 000000000005C951 case 1
//   0x5CA8B mov     rdx, r12
//   0x5CA8E mov     rdi, r13
//   0x5CA91 mov     [rsp+228h+var_1D8], 0
//   0x5CA9A mov     rsi, r15
//   0x5CA9D mov     [rsp+228h+var_218], r15
//   0x5CAA2 call    sub_62AC0
//   0x5CAA7 test    al, al
//   0x5CAA9 jnz     loc_5CD70
//   0x5CAAF mov     rdi, r15
//   0x5CAB2 call    _clear_tinfo_t
//   0x5CAB7 jmp     loc_5C8BC
//   0x5CABC lea     r15, [rsp+228h+var_1C8]; jumptable 000000000005C951 case 21
//   0x5CAC1 pxor    xmm0, xmm0
//   0x5CAC5 mov     rsi, r12
//   0x5CAC8 mov     qword ptr [rsp+228h+var_1C8+8], r13
//   0x5CACD lea     rbp, off_C8668
//   0x5CAD4 mov     rdi, r15
//   0x5CAD7 mov     [rsp+228h+var_1B8], r13
//   0x5CADC lea     rbx, [rsp+228h+var_1B0]
//   0x5CAE1 mov     qword ptr [rsp+228h+var_1C8], rbp
//   0x5CAE6 mov     [rsp+228h+var_1B0], 0
//   0x5CAEF mov     [rsp+228h+var_198], 0
//   0x5CAFB mov     [rsp+228h+var_190], 0
//   0x5CB07 mov     [rsp+228h+var_188], 0
//   0x5CB13 mov     [rsp+228h+var_170], 0
//   0x5CB1F mov     [rsp+228h+var_158], 10h
//   0x5CB27 mov     [rsp+228h+var_150], 0
//   0x5CB2F movaps  [rsp+228h+var_1A8], xmm0
//   0x5CB37 movups  [rsp+228h+var_180], xmm0
//   0x5CB3F movaps  [rsp+228h+var_168], xmm0
//   0x5CB47 call    sub_527A0
//   0x5CB4C mov     ebx, eax
//   0x5CB4E test    al, al
//   0x5CB50 jnz     loc_5CFE8
//   0x5CB56 mov     rdi, [rsp+228h+var_170]
//   0x5CB5E mov     qword ptr [rsp+228h+var_1C8], rbp
//   0x5CB63 test    rdi, rdi
//   0x5CB66 jz      short loc_5CB79
//   0x5CB68 mov     qword ptr [rsp+228h+var_168], 0
//   0x5CB74 call    _qfree
//   0x5CB79 lea     rdi, [rsp+228h+var_188]
//   0x5CB81 call    _cleanup_argloc
//   0x5CB86 lea     rdi, [rsp+228h+var_190]
//   0x5CB8E call    _clear_tinfo_t
//   0x5CB93 mov     rdi, [rsp+228h+var_1B0]
//   0x5CB98 test    rdi, rdi
//   0x5CB9B jz      loc_5C8CE
//   0x5CBA1 mov     r14, qword ptr [rsp+228h+var_1A8]
//   0x5CBA9 test    r14, r14
//   0x5CBAC jz      short loc_5CC18
//   0x5CBAE xor     r13d, r13d
//   0x5CBB1 nop     word ptr [rax+rax+00000000h]
//   0x5CBBC nop     dword ptr [rax+00h]
//   0x5CBC0 lea     rax, [r13+r13*4+0]
//   0x5CBC5 shl     rax, 4
//   0x5CBC9 lea     rbp, [rdi+rax]
//   0x5CBCD lea     rdi, [rbp+40h]
//   0x5CBD1 call    _clear_tinfo_t
//   0x5CBD6 mov     rdi, [rbp+28h]
//   0x5CBDA test    rdi, rdi
//   0x5CBDD jz      short loc_5CBEC
//   0x5CBDF mov     qword ptr [rbp+30h], 0
//   0x5CBE7 call    _qfree
//   0x5CBEC mov     rdi, [rbp+10h]
//   0x5CBF0 test    rdi, rdi
//   0x5CBF3 jz      short loc_5CC02
//   0x5CBF5 mov     qword ptr [rbp+18h], 0
//   0x5CBFD call    _qfree
//   0x5CC02 mov     rdi, rbp
//   0x5CC05 add     r13, 1
//   0x5CC09 call    _cleanup_argloc
//   0x5CC0E mov     rdi, [rsp+228h+var_1B0]
//   0x5CC13 cmp     r14, r13
//   0x5CC16 jnz     short loc_5CBC0
//   0x5CC18 mov     qword ptr [rsp+228h+var_1A8], 0
//   0x5CC24 call    _qfree
//   0x5CC29 jmp     loc_5C8CE
//   0x5CC2E lea     rdi, [r13+8]; jumptable 000000000005C951 case 18
//   0x5CC32 lea     r15, [r13+10h]
//   0x5CC36 mov     rsi, rbp
//   0x5CC39 mov     [rsp+228h+var_210], rdi
//   0x5CC3E mov     [rsp+228h+var_228], r15
//   0x5CC42 call    sub_5C180
//   0x5CC47 cmp     r15, rax
//   0x5CC4A jz      loc_5D058
//   0x5CC50 mov     r15, [r13+18h]
//   0x5CC54 mov     r13, [rsp+228h+var_228]
//   0x5CC58 test    r15, r15
//   0x5CC5B jnz     short loc_5CC73
//   0x5CC5D jmp     loc_5CF68
//   0x5CC62 align 8
//   0x5CC68 mov     r13, r15
//   0x5CC6B mov     r15, rdx
//   0x5CC6E test    r15, r15
//   0x5CC71 jz      short loc_5CC90
//   0x5CC73 lea     rdi, [r15+20h]
//   0x5CC77 mov     rsi, rbp
//   0x5CC7A call    sub_849A0
//   0x5CC7F mov     rdx, [r15+10h]
//   0x5CC83 mov     rcx, [r15+18h]
//   0x5CC87 test    eax, eax
//   0x5CC89 jns     short loc_5CC68
//   0x5CC8B mov     r15, rcx
//   0x5CC8E jmp     short loc_5CC6E
//   0x5CC90 mov     rax, [rsp+228h+var_228]
//   0x5CC94 cmp     r13, rax
//   0x5CC97 jz      loc_5CF68
//   0x5CC9D lea     rsi, [r13+20h]
//   0x5CCA1 mov     rdi, rbp
//   0x5CCA4 call    sub_849A0
//   0x5CCA9 test    eax, eax
//   0x5CCAB js      loc_5CF68
//   0x5CCB1 lea     rsi, [r13+30h]
//   0x5CCB5 mov     rdi, r14
//   0x5CCB8 call    _copy_tinfo_t
//   0x5CCBD jmp     loc_5C8CE
//   0x5CCC2 align 8
//   0x5CCC8 mov     rsi, r15
//   0x5CCCB mov     rdi, r14
//   0x5CCCE call    _copy_tinfo_t
//   0x5CCD3 mov     rdi, r15
//   0x5CCD6 call    _clear_tinfo_t
//   0x5CCDB jmp     loc_5C8BC
//   0x5CCE0 lea     rcx, [rsp+228h+var_1C8]
//   0x5CCE5 lea     rdx, [rsp+228h+var_1D8]
//   0x5CCEA mov     esi, 0Bh
//   0x5CCEF mov     rax, [rsp+228h+var_148]
//   0x5CCF7 mov     qword ptr [rsp+228h+var_1C8], 0
//   0x5CD00 mov     dword ptr [rsp+228h+var_1D8], 0
//   0x5CD08 mov     rdi, [rax+18h]
//   0x5CD0C mov     rax, [rsp+228h+var_48]
//   0x5CD14 call    qword ptr [rax+70h]
//   0x5CD17 test    eax, eax
//   0x5CD19 jnz     loc_5CF90
//   0x5CD1F mov     r9d, dword ptr [rsp+228h+var_1D8]
//   0x5CD24 test    r9d, r9d
//   0x5CD27 jz      loc_5CF90
//   0x5CD2D mov     rdi, r12
//   0x5CD30 call    sub_97AE0
//   0x5CD35 mov     rdx, rax
//   0x5CD38 shr     rdx, 3
//   0x5CD3C cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x5CD40 jz      loc_5CF90
//   0x5CD46 mov     r15, [rsp+228h+var_220]
//   0x5CD4B mov     rdi, r14
//   0x5CD4E mov     rsi, r15
//   0x5CD51 call    sub_55270
//   0x5CD56 mov     rdi, r15
//   0x5CD59 mov     r13d, eax
//   0x5CD5C call    _clear_tinfo_t
//   0x5CD61 jmp     loc_5C9B3
//   0x5CD66 align 10h
//   0x5CD70 lea     r15, [rsp+228h+var_1C8]
//   0x5CD75 pxor    xmm0, xmm0
//   0x5CD79 mov     rdi, r12
//   0x5CD7C mov     qword ptr [rsp+228h+var_1C8], 0
//   0x5CD85 mov     rsi, r15
//   0x5CD88 movups  [rsp+228h+var_1C8+8], xmm0
//   0x5CD8D mov     [rsp+228h+var_1B0], 0FFFFFFFFFFFFFFFFh
//   0x5CD96 call    sub_A1200
//   0x5CD9B mov     rdi, r12
//   0x5CD9E call    sub_87DA0
//   0x5CDA3 mov     rax, [rax+0D8h]
//   0x5CDAA mov     [rsp+228h+var_1D0], rax
//   0x5CDAF test    rax, rax
//   0x5CDB2 jz      short loc_5CDB8
//   0x5CDB4 add     dword ptr [rax+8], 1
//   0x5CDB8 lea     rax, [rsp+228h+var_1D0]
//   0x5CDBD mov     rdx, [rsp+228h+var_218]
//   0x5CDC2 mov     rcx, r15
//   0x5CDC5 mov     rdi, r14
//   0x5CDC8 mov     rsi, rax
//   0x5CDCB mov     [rsp+228h+var_220], rax
//   0x5CDD0 call    sub_88CF0
//   0x5CDD5 mov     r13, [rsp+228h+var_1D0]
//   0x5CDDA mov     r8d, eax
//   0x5CDDD test    r13, r13
//   0x5CDE0 jz      loc_5CF30
//   0x5CDE6 sub     dword ptr [r13+8], 1
//   0x5CDEB jnz     loc_5CF30
//   0x5CDF1 mov     rax, [r13+0]
//   0x5CDF5 lea     rcx, sub_15E30
//   0x5CDFC mov     rdx, [rax]
//   0x5CDFF cmp     rdx, rcx
//   0x5CE02 jnz     loc_5D3F8
//   0x5CE08 mov     rax, [rax+10h]
//   0x5CE0C lea     rdx, sub_15D70
//   0x5CE13 cmp     rax, rdx
//   0x5CE16 jnz     loc_5D40B
//   0x5CE1C lea     rax, off_C71D8
//   0x5CE23 mov     [r13+0], rax
//   0x5CE27 mov     rax, [r13+80h]
//   0x5CE2E test    rax, rax
//   0x5CE31 jz      short loc_5CE9A
//   0x5CE33 mov     r15, [rax+10h]
//   0x5CE37 test    r15, r15
//   0x5CE3A jz      short loc_5CE84
//   0x5CE3C mov     byte ptr [rsp+228h+var_228], r8b
//   0x5CE40 mov     [rsp+228h+var_210], rax
//   0x5CE45 mov     rax, r12
//   0x5CE48 mov     r12, rbp
//   0x5CE4B mov     ebp, ebx
//   0x5CE4D mov     rbx, r15
//   0x5CE50 mov     r15, rax
//   0x5CE53 mov     rdi, [rbx+18h]
//   0x5CE57 call    sub_546C0
//   0x5CE5C mov     rdi, rbx; void *
//   0x5CE5F mov     rbx, [rbx+10h]
//   0x5CE63 mov     esi, 30h ; '0'; unsigned __int64
//   0x5CE68 call    __ZdlPvm; operator delete(void *,ulong)
//   0x5CE6D test    rbx, rbx
//   0x5CE70 jnz     short loc_5CE53
//   0x5CE72 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5CE77 mov     rax, [rsp+228h+var_210]
//   0x5CE7C mov     ebx, ebp
//   0x5CE7E mov     rbp, r12
//   0x5CE81 mov     r12, r15
//   0x5CE84 mov     esi, 30h ; '0'; unsigned __int64
//   0x5CE89 mov     rdi, rax; void *
//   0x5CE8C mov     byte ptr [rsp+228h+var_228], r8b
//   0x5CE90 call    __ZdlPvm; operator delete(void *,ulong)
//   0x5CE95 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5CE9A mov     r15, [r13+98h]
//   0x5CEA1 test    r15, r15
//   0x5CEA4 jz      short loc_5CEF8
//   0x5CEA6 mov     [rsp+228h+var_210], rbp
//   0x5CEAB mov     byte ptr [rsp+228h+var_228], bl
//   0x5CEAE mov     rbx, r15
//   0x5CEB1 mov     r15d, r8d
//   0x5CEB4 mov     rdi, [rbx+18h]
//   0x5CEB8 mov     rbp, rbx
//   0x5CEBB call    sub_54400
//   0x5CEC0 mov     rdi, [rbp+20h]
//   0x5CEC4 mov     rbx, [rbx+10h]
//   0x5CEC8 test    rdi, rdi
//   0x5CECB jz      short loc_5CEDA
//   0x5CECD mov     qword ptr [rbp+28h], 0
//   0x5CED5 call    _qfree
//   0x5CEDA mov     esi, 48h ; 'H'; unsigned __int64
//   0x5CEDF mov     rdi, rbp; void *
//   0x5CEE2 call    __ZdlPvm; operator delete(void *,ulong)
//   0x5CEE7 test    rbx, rbx
//   0x5CEEA jnz     short loc_5CEB4
//   0x5CEEC movzx   ebx, byte ptr [rsp+228h+var_228]
//   0x5CEF0 mov     rbp, [rsp+228h+var_210]
//   0x5CEF5 mov     r8d, r15d
//   0x5CEF8 mov     rdi, [r13+60h]
//   0x5CEFC test    rdi, rdi
//   0x5CEFF jz      short loc_5CF17
//   0x5CF01 mov     qword ptr [r13+68h], 0
//   0x5CF09 mov     byte ptr [rsp+228h+var_228], r8b
//   0x5CF0D call    _qfree
//   0x5CF12 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5CF17 mov     esi, 0C0h; unsigned __int64
//   0x5CF1C mov     rdi, r13; void *
//   0x5CF1F mov     byte ptr [rsp+228h+var_228], r8b
//   0x5CF23 call    __ZdlPvm; operator delete(void *,ulong)
//   0x5CF28 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5CF2D nop     dword ptr [rax]
//   0x5CF30 test    r8b, r8b
//   0x5CF33 jnz     loc_5D2B2
//   0x5CF39 mov     rdi, qword ptr [rsp+228h+var_1C8]
//   0x5CF3E test    rdi, rdi
//   0x5CF41 jz      loc_5D32D
//   0x5CF47 mov     qword ptr [rsp+228h+var_1C8+8], 0
//   0x5CF50 call    _qfree
//   0x5CF55 mov     rdi, [rsp+228h+var_218]
//   0x5CF5A call    _clear_tinfo_t
//   0x5CF5F jmp     loc_5C8BC
//   0x5CF64 align 8
//   0x5CF68 mov     rdi, [rsp+228h+var_210]
//   0x5CF6D lea     rdx, [rsp+228h+var_1C8]
//   0x5CF72 mov     rsi, r13
//   0x5CF75 mov     qword ptr [rsp+228h+var_1C8], rbp
//   0x5CF7A call    sub_5C230
//   0x5CF7F mov     r13, rax
//   0x5CF82 jmp     loc_5CCB1
//   0x5CF87 align 10h
//   0x5CF90 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x5CF97 jmp     loc_5CD46
//   0x5CF9C align 20h
//   0x5CFA0 mov     rdx, [r9+8]
//   0x5CFA4 mov     ecx, 1
//   0x5CFA9 mov     qword ptr [rsp+228h+var_1C8+8], 0
//   0x5CFB2 mov     word ptr [rsp+228h+var_1B8], cx
//   0x5CFB7 mov     dword ptr [rsp+228h+var_1C8+8], eax
//   0x5CFBB test    rdx, rdx
//   0x5CFBE jz      loc_5D3C8
//   0x5CFC4 mov     qword ptr [rsp+228h+var_1C8], rdx
//   0x5CFC9 lea     rcx, [rsp+228h+var_1C8]
//   0x5CFCE mov     edx, 0BDh
//   0x5CFD3 mov     rdi, r14
//   0x5CFD6 mov     esi, 3Dh ; '='
//   0x5CFDB call    _create_tinfo
//   0x5CFE0 jmp     loc_5C8CE
//   0x5CFE5 align 8
//   0x5CFE8 mov     rdi, r15
//   0x5CFEB lea     rbx, [rsp+228h+var_1B0]
//   0x5CFF0 mov     dword ptr [rsp+228h+var_198], 0
//   0x5CFFB call    sub_309E0
//   0x5D000 movzx   edx, [rsp+228h+var_158]
//   0x5D008 and     edx, 0Fh
//   0x5D00B test    eax, 0FFFFFF0Fh
//   0x5D010 jnz     loc_5D248
//   0x5D016 cmp     eax, 0C0h
//   0x5D01B jz      loc_5D248
//   0x5D021 or      edx, eax
//   0x5D023 xor     eax, eax
//   0x5D025 lea     rbx, [rsp+228h+var_1B0]
//   0x5D02A mov     [rsp+228h+var_158], dl
//   0x5D031 mov     esi, 0Ch
//   0x5D036 mov     edx, 0Ch
//   0x5D03B mov     rcx, rbx
//   0x5D03E mov     rdi, r14
//   0x5D041 mov     dword ptr [rsp+228h+var_198+4], eax
//   0x5D048 call    _create_tinfo
//   0x5D04D mov     ebx, eax
//   0x5D04F jmp     loc_5CB56
//   0x5D054 align 8
//   0x5D058 mov     rdi, r12
//   0x5D05B call    sub_97AE0
//   0x5D060 mov     [rsp+228h+var_1E8], 0
//   0x5D069 mov     r15, rax
//   0x5D06C mov     rax, [rsp+228h+var_68]
//   0x5D074 mov     [rsp+228h+var_1E0], 0
//   0x5D07D mov     rdx, rax
//   0x5D080 btr     rdx, 3Fh ; '?'
//   0x5D085 test    rdx, rdx
//   0x5D088 jz      loc_5D250
//   0x5D08E cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x5D092 jz      loc_5D250
//   0x5D098 lea     rax, [rsp+228h+var_1E0]
//   0x5D09D lea     rcx, [rsp+228h+var_1E8]
//   0x5D0A2 mov     rdi, r13
//   0x5D0A5 lea     rdx, [rsp+228h+var_68]
//   0x5D0AD mov     rsi, rax
//   0x5D0B0 mov     [rsp+228h+var_200], rax
//   0x5D0B5 mov     [rsp+228h+var_208], rcx
//   0x5D0BA call    sub_5C500
//   0x5D0BF cmp     r15, 0FFFFFFFFFFFFFFFFh
//   0x5D0C3 jz      loc_5D3E4
//   0x5D0C9 lea     rax, [r15+7]
//   0x5D0CD mov     rsi, [rsp+228h+var_200]
//   0x5D0D2 lea     r15, [rsp+228h+var_1C8]
//   0x5D0D7 mov     qword ptr [rsp+228h+var_1C8+8], 0
//   0x5D0E0 mov     qword ptr [rsp+228h+var_1C8], 0
//   0x5D0E9 shr     rax, 3
//   0x5D0ED mov     rdi, r15
//   0x5D0F0 mov     dword ptr [rsp+228h+var_1C8+0Ch], eax
//   0x5D0F4 lea     rax, [rsp+228h+var_1E8]
//   0x5D0F9 mov     [rsp+228h+var_208], rax
//   0x5D0FE call    _copy_tinfo_t
//   0x5D103 lea     rdi, [rsp+228h+var_1E8]
//   0x5D108 mov     rcx, r15
//   0x5D10B mov     edx, 0Bh
//   0x5D110 mov     esi, 0Bh
//   0x5D115 mov     [rsp+228h+var_208], rdi
//   0x5D11A call    _create_tinfo
//   0x5D11F mov     rdi, r15
//   0x5D122 mov     byte ptr [rsp+228h+var_220], al
//   0x5D126 call    _clear_tinfo_t
//   0x5D12B movzx   eax, byte ptr [rsp+228h+var_220]
//   0x5D130 test    al, al
//   0x5D132 jnz     loc_5D1FF
//   0x5D138 lea     rax, [rsp+228h+var_1D0]
//   0x5D13D lea     rcx, [rsp+228h+var_1C8+8]
//   0x5D142 pxor    xmm0, xmm0
//   0x5D146 mov     [rsp+228h+var_1D8], 0
//   0x5D14F mov     rsi, rax
//   0x5D152 mov     rdi, rcx
//   0x5D155 mov     [rsp+228h+var_1F8], rcx
//   0x5D15A mov     [rsp+228h+var_1D0], 0
//   0x5D163 mov     [rsp+228h+var_220], rax
//   0x5D168 movaps  [rsp+228h+var_1C8], xmm0
//   0x5D16D call    _copy_tinfo_t
//   0x5D172 lea     rax, [rsp+228h+var_1D8]
//   0x5D177 lea     rcx, [rsp+228h+var_1B8]
//   0x5D17C mov     [rsp+228h+var_1B8], 0
//   0x5D185 mov     rsi, rax
//   0x5D188 mov     rdi, rcx
//   0x5D18B mov     [rsp+228h+var_1F0], rcx
//   0x5D190 mov     [rsp+228h+var_218], rax
//   0x5D195 call    _copy_tinfo_t
//   0x5D19A mov     rdi, [rsp+228h+var_220]
//   0x5D19F xor     r8d, r8d
//   0x5D1A2 mov     dword ptr [rsp+228h+var_1B0], 0
//   0x5D1AA mov     word ptr [rsp+228h+var_1B0+4], r8w
//   0x5D1B0 call    _clear_tinfo_t
//   0x5D1B5 mov     rdi, [rsp+228h+var_218]
//   0x5D1BA call    _clear_tinfo_t
//   0x5D1BF mov     rsi, [rsp+228h+var_200]
//   0x5D1C4 mov     rdi, r15
//   0x5D1C7 call    _copy_tinfo_t
//   0x5D1CC mov     rdi, [rsp+228h+var_208]
//   0x5D1D1 mov     rcx, r15
//   0x5D1D4 mov     edx, 0Ah
//   0x5D1D9 mov     esi, 0Ah
//   0x5D1DE call    _create_tinfo
//   0x5D1E3 mov     rdi, [rsp+228h+var_1F0]
//   0x5D1E8 call    _clear_tinfo_t
//   0x5D1ED mov     rdi, [rsp+228h+var_1F8]
//   0x5D1F2 call    _clear_tinfo_t
//   0x5D1F7 mov     rdi, r15
//   0x5D1FA call    _clear_tinfo_t
//   0x5D1FF mov     rdi, [rsp+228h+var_210]
//   0x5D204 mov     rsi, rbp
//   0x5D207 call    sub_5C320
//   0x5D20C mov     r15, [rsp+228h+var_208]
//   0x5D211 mov     rdi, rax
//   0x5D214 mov     rsi, r15
//   0x5D217 call    _copy_tinfo_t
//   0x5D21C mov     rdi, [rsp+228h+var_200]
//   0x5D221 call    _clear_tinfo_t
//   0x5D226 mov     rdi, r15
//   0x5D229 call    _clear_tinfo_t
//   0x5D22E jmp     loc_5CC50
//   0x5D233 align 8
//   0x5D238 mov     rsi, r15
//   0x5D23B mov     rdi, r14
//   0x5D23E call    _copy_tinfo_t
//   0x5D243 jmp     loc_5CA53
//   0x5D248 or      edx, 0FFFFFFC0h
//   0x5D24B jmp     loc_5D025
//   0x5D250 mov     rax, cs:under_debugger_ptr
//   0x5D257 cmp     byte ptr [rax], 0
//   0x5D25A jnz     loc_EB4A
//   0x5D260 mov     rax, [rsp+228h+var_40]
//   0x5D268 sub     rax, fs:28h
//   0x5D271 jnz     loc_5D423
//   0x5D277 lea     rax, [rsp+228h+var_1E0]
//   0x5D27C mov     edi, 770Eh
//   0x5D281 mov     [rsp+228h+var_200], rax
//   0x5D286 lea     rax, [rsp+228h+var_1E8]
//   0x5D28B mov     [rsp+228h+var_208], rax
//   0x5D290 call    _interr
//   0x5D295 test    al, al
//   0x5D297 jz      short loc_5D238
//   0x5D299 or      rax, 40h
//   0x5D29D mov     rsi, r15
//   0x5D2A0 mov     rdi, r14
//   0x5D2A3 mov     qword ptr [rsp+228h+var_1C8], rax
//   0x5D2A8 call    _copy_tinfo_t
//   0x5D2AD jmp     loc_5CA53
//   0x5D2B2 mov     rcx, [rsp+228h+var_220]
//   0x5D2B7 lea     rdx, [rsp+228h+var_1E0]
//   0x5D2BC mov     esi, 2107h
//   0x5D2C1 mov     rax, [rsp+228h+var_148]
//   0x5D2C9 mov     [rsp+228h+var_1D0], 0
//   0x5D2D2 mov     dword ptr [rsp+228h+var_1E0], 0
//   0x5D2DA mov     rdi, [rax+18h]
//   0x5D2DE mov     rax, [rsp+228h+var_48]
//   0x5D2E6 call    qword ptr [rax+70h]
//   0x5D2E9 test    eax, eax
//   0x5D2EB jnz     loc_5D3A1
//   0x5D2F1 mov     edi, dword ptr [rsp+228h+var_1E0]
//   0x5D2F5 test    edi, edi
//   0x5D2F7 jz      loc_5D3A1
//   0x5D2FD mov     rdi, r14
//   0x5D300 call    sub_33970
//   0x5D305 mov     rdi, qword ptr [rsp+228h+var_1C8]
//   0x5D30A mov     r13d, eax
//   0x5D30D test    rdi, rdi
//   0x5D310 jz      short loc_5D31E
//   0x5D312 xor     esi, esi
//   0x5D314 mov     qword ptr [rsp+228h+var_1C8+8], rsi
//   0x5D319 call    _qfree
//   0x5D31E mov     rdi, [rsp+228h+var_218]
//   0x5D323 call    _clear_tinfo_t
//   0x5D328 jmp     loc_5C9B3
//   0x5D32D mov     rdi, [rsp+228h+var_218]
//   0x5D332 call    _clear_tinfo_t
//   0x5D337 jmp     loc_5C8BC
//   0x5D33C lea     rdi, [r13+8]
//   0x5D340 mov     rsi, rbp
//   0x5D343 call    sub_5C320
//   0x5D348 lea     rsi, [rsp+228h+var_1D0]
//   0x5D34D mov     rdx, r12
//   0x5D350 mov     rdi, rax
//   0x5D353 mov     r13, rax
//   0x5D356 call    sub_31860
//   0x5D35B test    al, al
//   0x5D35D jz      short loc_5D366
//   0x5D35F cmp     byte ptr [rsp+228h+var_1D0], 0
//   0x5D364 jnz     short loc_5D387
//   0x5D366 lea     r15, [rsp+228h+var_1C8]
//   0x5D36B mov     rdi, r13
//   0x5D36E mov     qword ptr [rsp+228h+var_1C8], 7
//   0x5D377 mov     rsi, r15
//   0x5D37A call    _copy_tinfo_t
//   0x5D37F mov     rdi, r15
//   0x5D382 call    _clear_tinfo_t
//   0x5D387 mov     rsi, r13
//   0x5D38A mov     rdi, r14
//   0x5D38D call    _copy_tinfo_t
//   0x5D392 cmp     byte ptr [r14], 0
//   0x5D396 jnz     loc_5C8CE
//   0x5D39C jmp     loc_5C8BC
//   0x5D3A1 mov     rdi, qword ptr [rsp+228h+var_1C8]
//   0x5D3A6 test    rdi, rdi
//   0x5D3A9 jz      short loc_5D3D5
//   0x5D3AB mov     qword ptr [rsp+228h+var_1C8+8], 0
//   0x5D3B4 call    _qfree
//   0x5D3B9 mov     rdi, [rsp+228h+var_218]
//   0x5D3BE call    _clear_tinfo_t
//   0x5D3C3 jmp     loc_5C8CE
//   0x5D3C8 call    _get_idati
//   0x5D3CD mov     rdx, rax
//   0x5D3D0 jmp     loc_5CFC4
//   0x5D3D5 mov     rdi, [rsp+228h+var_218]
//   0x5D3DA call    _clear_tinfo_t
//   0x5D3DF jmp     loc_5C8CE
//   0x5D3E4 lea     rax, [rsp+228h+var_1E8]
//   0x5D3E9 lea     r15, [rsp+228h+var_1C8]
//   0x5D3EE mov     [rsp+228h+var_208], rax
//   0x5D3F3 jmp     loc_5D138
//   0x5D3F8 mov     byte ptr [rsp+228h+var_228], r8b
//   0x5D3FC mov     rdi, r13
//   0x5D3FF call    rdx
//   0x5D401 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5D406 jmp     loc_5CF30
//   0x5D40B mov     byte ptr [rsp+228h+var_228], r8b
//   0x5D40F mov     rdi, r13
//   0x5D412 call    rax
//   0x5D414 movzx   r8d, byte ptr [rsp+228h+var_228]
//   0x5D419 jmp     loc_5CF30
//   0x5D41E call    ___stack_chk_fail
//   0x5D423 call    ___stack_chk_fail
//   0x5D428 mov     rbx, rax
//   0x5D42B jmp     loc_EAE2
//   0x5D430 mov     rbx, rax
//   0x5D433 jmp     loc_EB39
//   0x5D438 mov     rbx, rax
//   0x5D43B jmp     loc_EAF6
//   0x5D440 mov     rbx, rax
//   0x5D443 jmp     loc_EB4C
//   0x5D448 mov     rbx, rax
//   0x5D44B jmp     loc_EB56
//   0x5D450 mov     r13, rax
//   0x5D453 jmp     loc_EB62
//   0x5D458 mov     rbx, rax
//   0x5D45B jmp     loc_EB74
//   0x5D460 mov     rbx, rax
//   0x5D463 jmp     loc_EB19
//   0x5D468 mov     rbx, rax
//   0x5D46B jmp     loc_EB23
//   0x5D470 mov     rbx, rax
//   0x5D473 jmp     loc_EB81
//   0x5D478 mov     rbx, rax
//   0x5D47B jmp     loc_EABC
//   0x5D480 mov     rbx, rax
//   0x5D483 jmp     loc_EB8E
//   0x5D488 mov     rbx, rax
//   0x5D48B lea     rax, [rsp+228h+var_1D8]
//   0x5D490 mov     [rsp+228h+var_218], rax
//   0x5D495 jmp     loc_EAC6
// ============================================================

void sub_5C870(/* signature unknown */)
{
    // see disassembly above
}

