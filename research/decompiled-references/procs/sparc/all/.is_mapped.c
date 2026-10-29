// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71E0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71E0 jmp     cs:off_190D8
//
// Resolved target: is_mapped
// Target address:  0x19608
// GOT/IAT slot:    0x190D8
// Slot symbol:     off_190D8
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

