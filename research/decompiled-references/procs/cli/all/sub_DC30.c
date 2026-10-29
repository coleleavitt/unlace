// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xDC30
// Name:            sub_DC30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xDC30 jmp     sub_D870
//
// Resolved target: sub_D870
// Target address:  0xD870
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64, double, double, __m128)
// ============================================================

/* see target sig */ sub_DC30(/* see target signature */)
{
    // Tail-call to sub_D870 via direct jump indirection
    return sub_D870(/* forwarded args */);
}

