// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3130
// Name:           sub_3130
// Function size:  1559 bytes (354 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3130 push    r15
//   0x3132 mov     esi, 1
//   0x3137 push    r14
//   0x3139 push    r13
//   0x313B push    r12
//   0x313D push    rbp
//   0x313E mov     rbp, rdi
//   0x3141 lea     rdi, aMipsl; "mipsl"
//   0x3148 push    rbx
//   0x3149 sub     rsp, 38h
//   0x314D mov     rbx, fs:28h
//   0x3156 mov     [rsp+68h+var_40], rbx
//   0x315B mov     rbx, rdx
//   0x315E call    _set_processor_type
//   0x3163 xor     edx, edx
//   0x3165 mov     esi, 4
//   0x316A mov     edi, 3
//   0x316F call    _setinf_flag
//   0x3174 mov     esi, 2
//   0x3179 mov     edi, 3
//   0x317E mov     edx, 1
//   0x3183 call    _setinf_flag
//   0x3188 call    _get_eah
//   0x318D lea     rsi, aSonyPlaystatio; "Sony Playstation PSX image"
//   0x3194 mov     r12, rax
//   0x3197 mov     rdi, rbx; s1
//   0x319A call    _strcmp
//   0x319F test    eax, eax
//   0x31A1 jz      loc_3230
//   0x31A7 lea     rsi, aSonyPlaystatio_0; "Sony Playstation PSX object file"
//   0x31AE mov     rdi, rbx; s1
//   0x31B1 call    _strcmp
//   0x31B6 test    eax, eax
//   0x31B8 jz      short loc_3220
//   0x31BA lea     rsi, aSonyPlaystatio_1; "Sony Playstation PSX library file"
//   0x31C1 mov     rdi, rbx; s1
//   0x31C4 call    _strcmp
//   0x31C9 test    eax, eax
//   0x31CB jnz     short loc_3240
//   0x31CD mov     rdi, rbp
//   0x31D0 call    sub_62F0
//   0x31D5 call    _get_ph
//   0x31DA cmp     dword ptr [rax+4], 0Ch
//   0x31DE jnz     loc_3708
//   0x31E4 mov     rax, [rsp+68h+var_40]
//   0x31E9 sub     rax, fs:28h
//   0x31F2 jnz     loc_3703
//   0x31F8 add     rsp, 38h
//   0x31FC lea     rsi, aPsxCfg; "psx.cfg"
//   0x3203 mov     edi, 0BB8h
//   0x3208 xor     eax, eax
//   0x320A pop     rbx
//   0x320B pop     rbp
//   0x320C pop     r12
//   0x320E pop     r13
//   0x3210 pop     r14
//   0x3212 pop     r15
//   0x3214 jmp     sub_26F0
//   0x3219 align 20h
//   0x3220 mov     rdi, rbp
//   0x3223 call    sub_4770
//   0x3228 jmp     short loc_31D5
//   0x322A align 10h
//   0x3230 mov     rsi, rbp
//   0x3233 mov     rdi, r12
//   0x3236 call    sub_2860
//   0x323B jmp     short loc_31D5
//   0x323D align 20h
//   0x3240 mov     ecx, 0BFC80000h
//   0x3245 mov     edx, 0BFC00000h
//   0x324A xor     esi, esi
//   0x324C mov     rdi, rbp
//   0x324F mov     r8d, 1
//   0x3255 lea     r14, [rsp+68h+var_58]
//   0x325A call    _file2base
//   0x325F pxor    xmm0, xmm0
//   0x3263 mov     ecx, 50h ; 'P'
//   0x3268 xor     esi, esi
//   0x326A mov     edx, 1
//   0x326F mov     rdi, r14
//   0x3272 movups  [rsp+68h+var_50], xmm0
//   0x3277 mov     [rsp+68h+var_58], 0
//   0x3280 call    _qvector_reserve
//   0x3285 mov     rdx, qword ptr [rsp+68h+var_50]
//   0x328A pxor    xmm0, xmm0
//   0x328E mov     [rsp+68h+var_58], rax
//   0x3293 lea     rdx, [rdx+rdx*4]
//   0x3297 shl     rdx, 4
//   0x329B lea     rbx, [rax+rdx]
//   0x329F movups  xmmword ptr [rbx+8], xmm0
//   0x32A3 mov     qword ptr [rbx], 0
//   0x32AA mov     qword ptr [rbx+18h], 0
//   0x32B2 mov     qword ptr [rbx+30h], 0
//   0x32BA mov     dword ptr [rbx+48h], 0FFFFFFFFh
//   0x32C1 movups  xmmword ptr [rbx+20h], xmm0
//   0x32C5 movups  xmmword ptr [rbx+38h], xmm0
//   0x32C9 add     qword ptr [rsp+68h+var_50], 1
//   0x32CF mov     rbp, [rbx+8]
//   0x32D3 mov     r12, rbp
//   0x32D6 add     r12, 8
//   0x32DA mov     r13, r12
//   0x32DD jb      loc_3670
//   0x32E3 mov     rsi, [rbx]
//   0x32E6 mov     ecx, 1
//   0x32EB mov     rdx, r12
//   0x32EE mov     rdi, rbx
//   0x32F1 call    _qvector_reserve
//   0x32F6 mov     rcx, [rbx+8]
//   0x32FA mov     [rbx], rax
//   0x32FD mov     rdx, r12
//   0x3300 xor     esi, esi; c
//   0x3302 sub     rdx, rcx; n
//   0x3305 lea     rdi, [rax+rcx]; s
//   0x3309 call    _memset
//   0x330E add     rbp, [rbx]
//   0x3311 mov     [rbx+8], r13
//   0x3315 xor     r8d, r8d
//   0x3318 mov     ecx, 2
//   0x331D mov     rdx, r14
//   0x3320 mov     esi, 0BFC80000h
//   0x3325 mov     edi, 0BFC40000h
//   0x332A mov     rax, 6465736E6563694Ch
//   0x3334 mov     [rbp+0], rax
//   0x3338 call    _bin_search
//   0x333D mov     rdi, [rsp+68h+var_58]
//   0x3342 mov     r12, rax
//   0x3345 test    rdi, rdi
//   0x3348 jz      loc_33CA
//   0x334E mov     r13, qword ptr [rsp+68h+var_50]
//   0x3353 test    r13, r13
//   0x3356 jz      short loc_33BC
//   0x3358 xor     ebp, ebp
//   0x335A nop     word ptr [rax+rax+00h]
//   0x3360 lea     rax, [rbp+rbp*4+0]
//   0x3365 shl     rax, 4
//   0x3369 lea     rbx, [rdi+rax]
//   0x336D mov     rdi, [rbx+30h]
//   0x3371 test    rdi, rdi
//   0x3374 jz      short loc_3383
//   0x3376 mov     qword ptr [rbx+38h], 0
//   0x337E call    _qfree
//   0x3383 mov     rdi, [rbx+18h]
//   0x3387 test    rdi, rdi
//   0x338A jz      short loc_3399
//   0x338C mov     qword ptr [rbx+20h], 0
//   0x3394 call    _qfree
//   0x3399 mov     rdi, [rbx]
//   0x339C test    rdi, rdi
//   0x339F jz      short loc_33AE
//   0x33A1 mov     qword ptr [rbx+8], 0
//   0x33A9 call    _qfree
//   0x33AE add     rbp, 1
//   0x33B2 mov     rdi, [rsp+68h+var_58]
//   0x33B7 cmp     r13, rbp
//   0x33BA jnz     short loc_3360
//   0x33BC mov     qword ptr [rsp+68h+var_50], 0
//   0x33C5 call    _qfree
//   0x33CA cmp     r12, 0FFFFFFFFFFFFFFFFh
//   0x33CE jz      loc_36C6
//   0x33D4 nop     word ptr [rax+rax+00000000h]
//   0x33DF nop
//   0x33E0 mov     r13, r12
//   0x33E3 lea     r12, [r12-1]
//   0x33E8 mov     rdi, r12
//   0x33EB call    _get_byte
//   0x33F0 test    al, al
//   0x33F2 jnz     short loc_33E0
//   0x33F4 xor     esi, esi
//   0x33F6 mov     edi, 1
//   0x33FB mov     ebx, 0BFC80000h
//   0x3400 call    _set_selector
//   0x3405 mov     r9d, 20h ; ' '
//   0x340B mov     rdx, r13
//   0x340E mov     esi, 0BFC00000h
//   0x3413 lea     r8, aBioscode+4; "CODE"
//   0x341A lea     rcx, aBioscode; "BIOSCODE"
//   0x3421 mov     edi, 1
//   0x3426 call    _add_segm
//   0x342B cmp     r13, rbx
//   0x342E jz      short loc_3460
//   0x3430 xor     esi, esi
//   0x3432 mov     edi, 2
//   0x3437 call    _set_selector
//   0x343C mov     rdx, rbx
//   0x343F mov     rsi, r13
//   0x3442 mov     edi, 2
//   0x3447 mov     r9d, 20h ; ' '
//   0x344D lea     r8, aBiosdata+4; "DATA"
//   0x3454 lea     rcx, aBiosdata; "BIOSDATA"
//   0x345B call    _add_segm
//   0x3460 mov     edx, 0FFFFFFFFh
//   0x3465 mov     esi, 200000h
//   0x346A xor     edi, edi
//   0x346C mov     r12d, 0BFC00000h
//   0x3472 call    _enable_flags
//   0x3477 xor     esi, esi
//   0x3479 mov     edi, 3
//   0x347E call    _set_selector
//   0x3483 lea     r8, aRam; "RAM"
//   0x348A mov     r9d, 20h ; ' '
//   0x3490 xor     esi, esi
//   0x3492 mov     rcx, r8
//   0x3495 mov     edx, 200000h
//   0x349A mov     edi, 3
//   0x349F call    _add_segm
//   0x34A4 nop     word ptr [rax+rax+00000000h]
//   0x34AF nop
//   0x34B0 pxor    xmm0, xmm0
//   0x34B4 mov     ecx, 50h ; 'P'
//   0x34B9 mov     edx, 1
//   0x34BE xor     esi, esi
//   0x34C0 mov     rdi, r14
//   0x34C3 movups  [rsp+68h+var_50], xmm0
//   0x34C8 mov     [rsp+68h+var_58], 0
//   0x34D1 call    _qvector_reserve
//   0x34D6 mov     rdx, qword ptr [rsp+68h+var_50]
//   0x34DB pxor    xmm0, xmm0
//   0x34DF mov     [rsp+68h+var_58], rax
//   0x34E4 lea     rdx, [rdx+rdx*4]
//   0x34E8 shl     rdx, 4
//   0x34EC lea     rbx, [rax+rdx]
//   0x34F0 movups  xmmword ptr [rbx+8], xmm0
//   0x34F4 mov     qword ptr [rbx], 0
//   0x34FB mov     qword ptr [rbx+18h], 0
//   0x3503 mov     qword ptr [rbx+30h], 0
//   0x350B mov     dword ptr [rbx+48h], 0FFFFFFFFh
//   0x3512 movups  xmmword ptr [rbx+20h], xmm0
//   0x3516 movups  xmmword ptr [rbx+38h], xmm0
//   0x351A add     qword ptr [rsp+68h+var_50], 1
//   0x3520 mov     rbp, [rbx+8]
//   0x3524 mov     rdx, rbp
//   0x3527 add     rdx, 2
//   0x352B mov     r15, rdx
//   0x352E jb      loc_3680
//   0x3534 mov     rsi, [rbx]
//   0x3537 mov     ecx, 1
//   0x353C mov     rdi, rbx
//   0x353F mov     [rsp+68h+var_60], rdx
//   0x3544 call    _qvector_reserve
//   0x3549 mov     rcx, [rbx+8]
//   0x354D mov     rdx, [rsp+68h+var_60]
//   0x3552 mov     [rbx], rax
//   0x3555 xor     esi, esi; c
//   0x3557 sub     rdx, rcx; n
//   0x355A lea     rdi, [rax+rcx]; s
//   0x355E call    _memset
//   0x3563 mov     rax, [rbx]
//   0x3566 mov     edx, 27BDh
//   0x356B mov     [rbx+8], r15
//   0x356F xor     r8d, r8d
//   0x3572 mov     ecx, 2
//   0x3577 mov     rsi, r13
//   0x357A mov     rdi, r12
//   0x357D mov     [rax+rbp], dx
//   0x3581 mov     rdx, r14
//   0x3584 call    _bin_search
//   0x3589 mov     rdi, [rsp+68h+var_58]
//   0x358E mov     rbp, rax
//   0x3591 test    rdi, rdi
//   0x3594 jz      loc_3619
//   0x359A mov     r12, qword ptr [rsp+68h+var_50]
//   0x359F test    r12, r12
//   0x35A2 jz      short loc_360B
//   0x35A4 xor     r15d, r15d
//   0x35A7 nop     word ptr [rax+rax+00000000h]
//   0x35B0 lea     rdx, [r15+r15*4]
//   0x35B4 shl     rdx, 4
//   0x35B8 lea     rbx, [rdi+rdx]
//   0x35BC mov     rdi, [rbx+30h]
//   0x35C0 test    rdi, rdi
//   0x35C3 jz      short loc_35D2
//   0x35C5 mov     qword ptr [rbx+38h], 0
//   0x35CD call    _qfree
//   0x35D2 mov     rdi, [rbx+18h]
//   0x35D6 test    rdi, rdi
//   0x35D9 jz      short loc_35E8
//   0x35DB mov     qword ptr [rbx+20h], 0
//   0x35E3 call    _qfree
//   0x35E8 mov     rdi, [rbx]
//   0x35EB test    rdi, rdi
//   0x35EE jz      short loc_35FD
//   0x35F0 mov     qword ptr [rbx+8], 0
//   0x35F8 call    _qfree
//   0x35FD add     r15, 1
//   0x3601 mov     rdi, [rsp+68h+var_58]
//   0x3606 cmp     r12, r15
//   0x3609 jnz     short loc_35B0
//   0x360B mov     qword ptr [rsp+68h+var_50], 0
//   0x3614 call    _qfree
//   0x3619 cmp     rbp, 0FFFFFFFFFFFFFFFFh
//   0x361D jz      short loc_3690
//   0x361F mov     rax, rbp
//   0x3622 lea     r12, [rbp+1]
//   0x3626 and     eax, 3
//   0x3629 cmp     rax, 2
//   0x362D jnz     loc_34B0
//   0x3633 lea     rbx, [rbp-2]
//   0x3637 mov     rdi, rbx
//   0x363A call    _get_word
//   0x363F test    ax, ax
//   0x3642 jns     loc_34B0
//   0x3648 xor     esi, esi
//   0x364A mov     rdi, rbx
//   0x364D call    _show_auto
//   0x3652 lea     rsi, [rbp-1]
//   0x3656 mov     edx, 14h
//   0x365B mov     rdi, rbx
//   0x365E call    _auto_mark_range
//   0x3663 jmp     loc_34B0
//   0x3668 align 10h
//   0x3670 mov     r13, 7FFFFFFFFFFFFFFFh
//   0x367A jmp     loc_330E
//   0x367F align 20h
//   0x3680 mov     r15, 7FFFFFFFFFFFFFFFh
//   0x368A jmp     loc_3563
//   0x368F align 10h
//   0x3690 mov     esi, 1
//   0x3695 mov     edi, 0Eh
//   0x369A call    _setinf
//   0x369F mov     esi, 0BFC00000h
//   0x36A4 mov     edi, 0Fh
//   0x36A9 call    _setinf
//   0x36AE call    _create_filename_cmt
//   0x36B3 xor     edx, edx
//   0x36B5 xor     esi, esi
//   0x36B7 mov     edi, 0BFC00108h
//   0x36BC call    _create_strlit
//   0x36C1 jmp     loc_31D5
//   0x36C6 xor     esi, esi
//   0x36C8 mov     edi, 1
//   0x36CD mov     r13d, 0BFC80000h
//   0x36D3 call    _set_selector
//   0x36D8 mov     r9d, 20h ; ' '
//   0x36DE mov     rdx, r13
//   0x36E1 mov     esi, 0BFC00000h
//   0x36E6 lea     r8, aBioscode+4; "CODE"
//   0x36ED lea     rcx, aBioscode; "BIOSCODE"
//   0x36F4 mov     edi, 1
//   0x36F9 call    _add_segm
//   0x36FE jmp     loc_3460
//   0x3703 call    ___stack_chk_fail
//   0x3708 mov     rax, cs:under_debugger_ptr
//   0x370F cmp     byte ptr [rax], 0
//   0x3712 jnz     loc_2400
//   0x3718 mov     rax, [rsp+68h+var_40]
//   0x371D sub     rax, fs:28h
//   0x3726 jnz     short loc_3732
//   0x3728 mov     edi, 27FEh
//   0x372D call    _interr
//   0x3732 call    ___stack_chk_fail
//   0x3737 mov     rbx, rax
//   0x373A jmp     loc_2402
//   0x373F mov     rbx, rax
//   0x3742 jmp     loc_2422
// ============================================================

void sub_3130(/* signature unknown */)
{
    // see disassembly above
}

