// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7C80
// Name:            sub_7C80
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x7C80 endbr64
//   0x7C84 jmp     sub_7C00
//
// Resolved target: sub_7C00
// Target address:  0x7C00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_7C80(/* see target signature */)
{
    // Tail-call to sub_7C00 via direct jump indirection
    return sub_7C00(/* forwarded args */);
}

