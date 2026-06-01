// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA920
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA920 jmp     cs:off_CA478
//
// Resolved target: get_numbered_type
// Target address:  0xD0DB8
// GOT/IAT slot:    0xCA478
// Slot symbol:     off_CA478
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

