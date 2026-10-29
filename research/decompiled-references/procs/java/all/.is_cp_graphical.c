// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65C0
// Name:            .is_cp_graphical
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65C0 jmp     cs:off_2D2C8
//
// Resolved target: is_cp_graphical
// Target address:  0x2D7D0
// GOT/IAT slot:    0x2D2C8
// Slot symbol:     off_2D2C8
// Target type:     <no type info>
// ============================================================

void .is_cp_graphical(/* see target signature */)
{
    // Tail-call to is_cp_graphical via GOT/IAT indirection
    return is_cp_graphical(/* forwarded args */);
}

