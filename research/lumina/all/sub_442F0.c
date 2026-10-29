// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x442F0
// Name:            sub_442F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x442F0 jmp     sub_16CAE0
//
// Resolved target: sub_16CAE0
// Target address:  0x16CAE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_442F0(/* see target signature */)
{
    // Tail-call to sub_16CAE0 via direct jump indirection
    return sub_16CAE0(/* forwarded args */);
}

