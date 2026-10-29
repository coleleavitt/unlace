// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3850
// Name:            sub_3850
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x3850 endbr64
//   0x3854 jmp     sub_37D0
//
// Resolved target: sub_37D0
// Target address:  0x37D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3850(/* see target signature */)
{
    // Tail-call to sub_37D0 via direct jump indirection
    return sub_37D0(/* forwarded args */);
}

