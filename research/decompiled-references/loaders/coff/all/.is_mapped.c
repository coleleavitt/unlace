// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4260
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4260 jmp     cs:off_23118
//
// Resolved target: is_mapped
// Target address:  0x23538
// GOT/IAT slot:    0x23118
// Slot symbol:     off_23118
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

