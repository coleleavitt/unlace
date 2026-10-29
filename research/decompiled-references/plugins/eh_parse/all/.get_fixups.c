// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6650
// Name:            .get_fixups
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6650 jmp     cs:off_2F310
//
// Resolved target: get_fixups
// Target address:  0x2F980
// GOT/IAT slot:    0x2F310
// Slot symbol:     off_2F310
// Target type:     <no type info>
// ============================================================

void .get_fixups(/* see target signature */)
{
    // Tail-call to get_fixups via GOT/IAT indirection
    return get_fixups(/* forwarded args */);
}

