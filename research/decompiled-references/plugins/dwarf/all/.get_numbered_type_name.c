// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA600
// Name:            .get_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA600 jmp     cs:off_CA2E8
//
// Resolved target: get_numbered_type_name
// Target address:  0xD0C20
// GOT/IAT slot:    0xCA2E8
// Slot symbol:     off_CA2E8
// Target type:     <no type info>
// ============================================================

void .get_numbered_type_name(/* see target signature */)
{
    // Tail-call to get_numbered_type_name via GOT/IAT indirection
    return get_numbered_type_name(/* forwarded args */);
}

