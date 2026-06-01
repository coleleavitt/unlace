// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA300
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA300 jmp     cs:off_CA168
//
// Resolved target: vadd_extra_line
// Target address:  0xD0A98
// GOT/IAT slot:    0xCA168
// Slot symbol:     off_CA168
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

