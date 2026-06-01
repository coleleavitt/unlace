// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6290
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6290 jmp     cs:off_2F130
//
// Resolved target: is_mapped
// Target address:  0x2F7A0
// GOT/IAT slot:    0x2F130
// Slot symbol:     off_2F130
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

