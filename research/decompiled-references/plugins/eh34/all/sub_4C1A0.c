// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4C1A0
// Name:            sub_4C1A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4C1A0 jmp     sub_4C070
//
// Resolved target: sub_4C070
// Target address:  0x4C070
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_4C1A0(/* see target signature */)
{
    // Tail-call to sub_4C070 via direct jump indirection
    return sub_4C070(/* forwarded args */);
}

