// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x105E0
// Name:            sub_105E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x105E0 jmp     sub_10470
//
// Resolved target: sub_10470
// Target address:  0x10470
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64, double)
// ============================================================

/* see target sig */ sub_105E0(/* see target signature */)
{
    // Tail-call to sub_10470 via direct jump indirection
    return sub_10470(/* forwarded args */);
}

