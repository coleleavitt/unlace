// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6E80
// Name:            sub_6E80
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x6E80 endbr64
//   0x6E84 jmp     sub_6E00
//
// Resolved target: sub_6E00
// Target address:  0x6E00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_6E80(/* see target signature */)
{
    // Tail-call to sub_6E00 via direct jump indirection
    return sub_6E00(/* forwarded args */);
}

