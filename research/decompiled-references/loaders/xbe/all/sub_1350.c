// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1350
// Name:            sub_1350
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1350 endbr64
//   0x1354 jmp     sub_12D0
//
// Resolved target: sub_12D0
// Target address:  0x12D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1350(/* see target signature */)
{
    // Tail-call to sub_12D0 via direct jump indirection
    return sub_12D0(/* forwarded args */);
}

