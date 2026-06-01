// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3DDD0
// Name:            sub_3DDD0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3DDD0 jmp     sub_3DB90
//
// Resolved target: sub_3DB90
// Target address:  0x3DB90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3DDD0(/* see target signature */)
{
    // Tail-call to sub_3DB90 via direct jump indirection
    return sub_3DB90(/* forwarded args */);
}

