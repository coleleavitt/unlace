// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92B0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92B0 jmp     cs:off_89140
//
// Resolved target: vadd_extra_line
// Target address:  0x8C440
// GOT/IAT slot:    0x89140
// Slot symbol:     off_89140
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

