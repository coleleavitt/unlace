// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA440
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA440 jmp     cs:off_35208
//
// Resolved target: insn_add_cref
// Target address:  0x35858
// GOT/IAT slot:    0x35208
// Slot symbol:     off_35208
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

