// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x188810
// Name:            sub_188810
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x188810 jmp     sub_1878E0
//
// Resolved target: sub_1878E0
// Target address:  0x1878E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__m128i *, __int64, __int64)
// ============================================================

/* see target sig */ sub_188810(/* see target signature */)
{
    // Tail-call to sub_1878E0 via direct jump indirection
    return sub_1878E0(/* forwarded args */);
}

