// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165800
// Name:            sub_165800
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x165800 jmp     sub_1650B0
//
// Resolved target: sub_1650B0
// Target address:  0x1650B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(char *, __int64, unsigned int, __int64)
// ============================================================

/* see target sig */ sub_165800(/* see target signature */)
{
    // Tail-call to sub_1650B0 via direct jump indirection
    return sub_1650B0(/* forwarded args */);
}

