// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92A0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92A0 jmp     cs:off_2E138
//
// Resolved target: is_mapped
// Target address:  0x2E7A8
// GOT/IAT slot:    0x2E138
// Slot symbol:     off_2E138
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

