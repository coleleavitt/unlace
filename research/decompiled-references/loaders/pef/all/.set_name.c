// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_80D8
//
// Resolved target: set_name
// Target address:  0x82C8
// GOT/IAT slot:    0x80D8
// Slot symbol:     off_80D8
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

