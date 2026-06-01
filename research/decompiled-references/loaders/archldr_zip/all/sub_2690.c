// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2690
// Name:            sub_2690
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2690 endbr64
//   0x2694 jmp     sub_2610
//
// Resolved target: sub_2610
// Target address:  0x2610
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2690(/* see target signature */)
{
    // Tail-call to sub_2610 via direct jump indirection
    return sub_2610(/* forwarded args */);
}

