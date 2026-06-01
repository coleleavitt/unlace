// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4730
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4730 jmp     cs:off_23380
//
// Resolved target: set_compiler
// Target address:  0x237C0
// GOT/IAT slot:    0x23380
// Slot symbol:     off_23380
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

