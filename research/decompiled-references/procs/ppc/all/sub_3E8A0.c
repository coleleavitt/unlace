// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E8A0
// Name:            sub_3E8A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E8A0 jmp     sub_3E640
//
// Resolved target: sub_3E640
// Target address:  0x3E640
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3E8A0(/* see target signature */)
{
    // Tail-call to sub_3E640 via direct jump indirection
    return sub_3E640(/* forwarded args */);
}

