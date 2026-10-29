// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_5028
//
// Resolved target: is_mapped
// Target address:  0x5188
// GOT/IAT slot:    0x5028
// Slot symbol:     off_5028
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

