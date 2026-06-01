// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96A0
// Name:            .get_fixups
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96A0 jmp     cs:off_89338
//
// Resolved target: get_fixups
// Target address:  0x8C640
// GOT/IAT slot:    0x89338
// Slot symbol:     off_89338
// Target type:     <no type info>
// ============================================================

void .get_fixups(/* see target signature */)
{
    // Tail-call to get_fixups via GOT/IAT indirection
    return get_fixups(/* forwarded args */);
}

