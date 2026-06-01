// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5530
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5530 jmp     cs:off_1A280
//
// Resolved target: set_compiler
// Target address:  0x1A620
// GOT/IAT slot:    0x1A280
// Slot symbol:     off_1A280
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

