// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44300
// Name:            sub_44300
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x44300 jmp     sub_16D180
//
// Resolved target: sub_16D180
// Target address:  0x16D180
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_44300(/* see target signature */)
{
    // Tail-call to sub_16D180 via direct jump indirection
    return sub_16D180(/* forwarded args */);
}

