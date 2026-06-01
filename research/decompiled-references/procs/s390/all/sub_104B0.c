// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x104B0
// Name:            sub_104B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x104B0 endbr64
//   0x104B4 jmp     sub_10430
//
// Resolved target: sub_10430
// Target address:  0x10430
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_104B0(/* see target signature */)
{
    // Tail-call to sub_10430 via direct jump indirection
    return sub_10430(/* forwarded args */);
}

