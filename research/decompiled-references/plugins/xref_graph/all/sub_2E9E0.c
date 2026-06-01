// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2E9E0
// Name:           sub_2E9E0
// Function size:  51 bytes (15 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2E9E0 push    rbx
//   0x2E9E1 mov     r8, cs:callui_ptr
//   0x2E9E8 mov     rbx, rdi
//   0x2E9EB xor     ecx, ecx
//   0x2E9ED mov     rsi, [rdi+60h]
//   0x2E9F1 mov     edx, 400004h
//   0x2E9F6 mov     edi, 0AEh
//   0x2E9FB xor     eax, eax
//   0x2E9FD call    qword ptr [r8]
//   0x2EA00 mov     rdi, rbx
//   0x2EA03 mov     esi, 7
//   0x2EA08 call    __ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE; QT::QWidget::setFocus(QT::Qt::FocusReason)
//   0x2EA0D mov     byte ptr [rbx+68h], 1
//   0x2EA11 pop     rbx
//   0x2EA12 retn
// ============================================================

void sub_2E9E0(/* signature unknown */)
{
    // see disassembly above
}

