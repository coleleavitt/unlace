// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A20
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A20 jmp     cs:off_894F8
//
// Resolved target: set_compiler
// Target address:  0x8C828
// GOT/IAT slot:    0x894F8
// Slot symbol:     off_894F8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

