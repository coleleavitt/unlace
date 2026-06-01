// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9F0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9F0 jmp     cs:off_354E0
//
// Resolved target: set_compiler
// Target address:  0x35B48
// GOT/IAT slot:    0x354E0
// Slot symbol:     off_354E0
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

