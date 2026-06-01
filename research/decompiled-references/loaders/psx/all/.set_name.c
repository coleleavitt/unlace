// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_A0D8
//
// Resolved target: set_name
// Target address:  0xA388
// GOT/IAT slot:    0xA0D8
// Slot symbol:     off_A0D8
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

