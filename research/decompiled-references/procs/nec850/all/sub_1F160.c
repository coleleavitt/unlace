// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1F160
// Name:            sub_1F160
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1F160 jmp     sub_1F0A0
//
// Resolved target: sub_1F0A0
// Target address:  0x1F0A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_1F160(/* see target signature */)
{
    // Tail-call to sub_1F0A0 via direct jump indirection
    return sub_1F0A0(/* forwarded args */);
}

