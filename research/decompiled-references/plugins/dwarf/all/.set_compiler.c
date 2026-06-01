// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACF0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACF0 jmp     cs:off_CA660
//
// Resolved target: set_compiler
// Target address:  0xD0FC0
// GOT/IAT slot:    0xCA660
// Slot symbol:     off_CA660
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

