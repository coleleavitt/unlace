// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6200
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6200 jmp     cs:off_1D0E8
//
// Resolved target: is_mapped
// Target address:  0x1D5D8
// GOT/IAT slot:    0x1D0E8
// Slot symbol:     off_1D0E8
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

