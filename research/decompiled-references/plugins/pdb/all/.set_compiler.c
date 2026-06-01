// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB80
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB80 jmp     cs:off_B35A8
//
// Resolved target: set_compiler
// Target address:  0xB3D78
// GOT/IAT slot:    0xB35A8
// Slot symbol:     off_B35A8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

