// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12C0
// Name:            sub_12C0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x12C0 endbr64
//   0x12C4 jmp     sub_1240
//
// Resolved target: sub_1240
// Target address:  0x1240
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_12C0(/* see target signature */)
{
    // Tail-call to sub_1240 via direct jump indirection
    return sub_1240(/* forwarded args */);
}

