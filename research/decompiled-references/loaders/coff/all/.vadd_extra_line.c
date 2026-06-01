// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4200
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4200 jmp     cs:off_230E8
//
// Resolved target: vadd_extra_line
// Target address:  0x23508
// GOT/IAT slot:    0x230E8
// Slot symbol:     off_230E8
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

