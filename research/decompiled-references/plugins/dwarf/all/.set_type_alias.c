// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5D0
// Name:            .set_type_alias
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5D0 jmp     cs:off_CA2D0
//
// Resolved target: set_type_alias
// Target address:  0xD0C08
// GOT/IAT slot:    0xCA2D0
// Slot symbol:     off_CA2D0
// Target type:     <no type info>
// ============================================================

void .set_type_alias(/* see target signature */)
{
    // Tail-call to set_type_alias via GOT/IAT indirection
    return set_type_alias(/* forwarded args */);
}

