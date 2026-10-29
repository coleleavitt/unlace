// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9530
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9530 jmp     cs:off_89280
//
// Resolved target: get_fixup
// Target address:  0x8C588
// GOT/IAT slot:    0x89280
// Slot symbol:     off_89280
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

