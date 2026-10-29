// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12C60
// Name:            sub_12C60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x12C60 jmp     sub_12600
//
// Resolved target: sub_12600
// Target address:  0x12600
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_12C60(/* see target signature */)
{
    // Tail-call to sub_12600 via direct jump indirection
    return sub_12600(/* forwarded args */);
}

