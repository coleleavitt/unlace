// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25C0
// Name:            sub_25C0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x25C0 endbr64
//   0x25C4 jmp     sub_2540
//
// Resolved target: sub_2540
// Target address:  0x2540
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_25C0(/* see target signature */)
{
    // Tail-call to sub_2540 via direct jump indirection
    return sub_2540(/* forwarded args */);
}

