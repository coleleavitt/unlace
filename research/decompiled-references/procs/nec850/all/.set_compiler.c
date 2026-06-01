// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9980
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9980 jmp     cs:off_2E4A8
//
// Resolved target: set_compiler
// Target address:  0x2EB30
// GOT/IAT slot:    0x2E4A8
// Slot symbol:     off_2E4A8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

