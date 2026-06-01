// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3AA0
// Name:            sub_3AA0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x3AA0 endbr64
//   0x3AA4 jmp     sub_3A20
//
// Resolved target: sub_3A20
// Target address:  0x3A20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3AA0(/* see target signature */)
{
    // Tail-call to sub_3A20 via direct jump indirection
    return sub_3A20(/* forwarded args */);
}

