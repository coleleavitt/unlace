// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2610
// Name:            sub_2610
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2610 endbr64
//   0x2614 jmp     sub_2590
//
// Resolved target: sub_2590
// Target address:  0x2590
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2610(/* see target signature */)
{
    // Tail-call to sub_2590 via direct jump indirection
    return sub_2590(/* forwarded args */);
}

