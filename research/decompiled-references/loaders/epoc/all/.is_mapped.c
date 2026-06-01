// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3190
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3190 jmp     cs:off_130B0
//
// Resolved target: is_mapped
// Target address:  0x13798
// GOT/IAT slot:    0x130B0
// Slot symbol:     off_130B0
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

