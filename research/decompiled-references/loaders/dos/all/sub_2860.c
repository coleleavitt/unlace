// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2860
// Name:            sub_2860
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2860 endbr64
//   0x2864 jmp     sub_27E0
//
// Resolved target: sub_27E0
// Target address:  0x27E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2860(/* see target signature */)
{
    // Tail-call to sub_27E0 via direct jump indirection
    return sub_27E0(/* forwarded args */);
}

