// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28250
// Name:           sub_28250
// Function size:  259 bytes (70 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28250 push    r14
//   0x28252 push    r13
//   0x28254 push    r12
//   0x28256 push    rbp
//   0x28257 push    rbx
//   0x28258 sub     rsp, 30h
//   0x2825C mov     r12, fs:28h
//   0x28265 mov     [rsp+58h+var_30], r12
//   0x2826A mov     r12, rdi
//   0x2826D call    sub_1FB50
//   0x28272 mov     rdi, rax
//   0x28275 call    sub_345D0
//   0x2827A test    rax, rax
//   0x2827D jz      short loc_2828B
//   0x2827F mov     rdi, [rax+40h]
//   0x28283 mov     rsi, r12
//   0x28286 call    sub_36020
//   0x2828B mov     rbx, [r12+60h]
//   0x28290 mov     rax, [r12+68h]
//   0x28295 mov     r14, rsp
//   0x28298 mov     dword ptr [r12+80h], 1
//   0x282A4 lea     r13, [rbx+rax*8]
//   0x282A8 cmp     r13, rbx
//   0x282AB jnz     short loc_282F0
//   0x282AD jmp     short loc_28310
//   0x282AF align 10h
//   0x282B0 mov     eax, [rdi+80h]
//   0x282B6 mov     dword ptr [rdi+80h], 2
//   0x282C0 cmp     eax, 2
//   0x282C3 jz      short loc_282DA
//   0x282C5 pxor    xmm1, xmm1
//   0x282C9 mov     rsi, r14; QT::QRectF *
//   0x282CC movaps  [rsp+58h+var_58], xmm1
//   0x282D0 movaps  [rsp+58h+var_48], xmm1
//   0x282D5 call    __ZN2QT13QGraphicsItem6updateERKNS_6QRectFE; QT::QGraphicsItem::update(QT::QRectF const&)
//   0x282DA mov     esi, 1
//   0x282DF mov     rdi, rbp
//   0x282E2 call    sub_29640
//   0x282E7 add     rbx, 8
//   0x282EB cmp     r13, rbx
//   0x282EE jz      short loc_28310
//   0x282F0 mov     rbp, [rbx]
//   0x282F3 mov     rdi, rbp; this
//   0x282F6 call    __ZNK2QT13QGraphicsItem9isVisibleEv; QT::QGraphicsItem::isVisible(void)
//   0x282FB test    al, al
//   0x282FD jz      short loc_282E7
//   0x282FF mov     rdi, [rbp+10h]; this
//   0x28303 cmp     rdi, r12
//   0x28306 jnz     short loc_282B0
//   0x28308 mov     rdi, [rbp+18h]
//   0x2830C jmp     short loc_282B0
//   0x2830E align 10h
//   0x28310 mov     byte ptr [r12+84h], 1
//   0x28319 pxor    xmm0, xmm0
//   0x2831D mov     rsi, r14; QT::QRectF *
//   0x28320 mov     rdi, r12; this
//   0x28323 movaps  [rsp+58h+var_58], xmm0
//   0x28327 movaps  [rsp+58h+var_48], xmm0
//   0x2832C call    __ZN2QT13QGraphicsItem6updateERKNS_6QRectFE; QT::QGraphicsItem::update(QT::QRectF const&)
//   0x28331 mov     rax, [rsp+58h+var_30]
//   0x28336 sub     rax, fs:28h
//   0x2833F jnz     short loc_2834E
//   0x28341 add     rsp, 30h
//   0x28345 pop     rbx
//   0x28346 pop     rbp
//   0x28347 pop     r12
//   0x28349 pop     r13
//   0x2834B pop     r14
//   0x2834D retn
//   0x2834E call    ___stack_chk_fail
// ============================================================

void sub_28250(/* signature unknown */)
{
    // see disassembly above
}

