// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x14820
// Name:            sub_14820
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x14820 jmp     sub_142B0
//
// Resolved target: sub_142B0
// Target address:  0x142B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_14820(/* see target signature */)
{
    // Tail-call to sub_142B0 via direct jump indirection
    return sub_142B0(/* forwarded args */);
}

