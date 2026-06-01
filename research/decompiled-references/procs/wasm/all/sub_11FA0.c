// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11FA0
// Name:            sub_11FA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x11FA0 jmp     sub_11760
//
// Resolved target: sub_11760
// Target address:  0x11760
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, const __m128i *, __int64, __int64)
// ============================================================

/* see target sig */ sub_11FA0(/* see target signature */)
{
    // Tail-call to sub_11760 via direct jump indirection
    return sub_11760(/* forwarded args */);
}

