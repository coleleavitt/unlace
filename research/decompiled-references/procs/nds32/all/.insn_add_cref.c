// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8310
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8310 jmp     cs:off_2A170
//
// Resolved target: insn_add_cref
// Target address:  0x2A6E0
// GOT/IAT slot:    0x2A170
// Slot symbol:     off_2A170
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

