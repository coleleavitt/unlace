// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB30
// Name:            sub_AB30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xAB30 jmp     sub_A390
//
// Resolved target: sub_A390
// Target address:  0xA390
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_AB30(/* see target signature */)
{
    // Tail-call to sub_A390 via direct jump indirection
    return sub_A390(/* forwarded args */);
}

