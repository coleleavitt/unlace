// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_B0B8
//
// Resolved target: vadd_extra_line
// Target address:  0xB550
// GOT/IAT slot:    0xB0B8
// Slot symbol:     off_B0B8
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

