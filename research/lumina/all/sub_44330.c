// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44330
// Name:            sub_44330
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x44330 jmp     sub_16C390
//
// Resolved target: sub_16C390
// Target address:  0x16C390
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_44330(/* see target signature */)
{
    // Tail-call to sub_16C390 via direct jump indirection
    return sub_16C390(/* forwarded args */);
}

