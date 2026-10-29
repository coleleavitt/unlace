// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_8160
//
// Resolved target: set_compiler
// Target address:  0x8368
// GOT/IAT slot:    0x8160
// Slot symbol:     off_8160
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

