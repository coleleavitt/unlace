// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13A0
// Name:            sub_13A0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x13A0 endbr64
//   0x13A4 jmp     sub_1320
//
// Resolved target: sub_1320
// Target address:  0x1320
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_13A0(/* see target signature */)
{
    // Tail-call to sub_1320 via direct jump indirection
    return sub_1320(/* forwarded args */);
}

