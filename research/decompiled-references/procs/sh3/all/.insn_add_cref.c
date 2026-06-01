// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52F0
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52F0 jmp     cs:off_15160
//
// Resolved target: insn_add_cref
// Target address:  0x161F0
// GOT/IAT slot:    0x15160
// Slot symbol:     off_15160
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

