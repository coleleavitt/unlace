// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B70
// Name:            sub_9B70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x9B70 jmp     sub_95D0
//
// Resolved target: sub_95D0
// Target address:  0x95D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_9B70(/* see target signature */)
{
    // Tail-call to sub_95D0 via direct jump indirection
    return sub_95D0(/* forwarded args */);
}

