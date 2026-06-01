// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3630
// Name:            .is_cp_graphical
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3630 jmp     cs:off_28300
//
// Resolved target: is_cp_graphical
// Target address:  0x287B8
// GOT/IAT slot:    0x28300
// Slot symbol:     off_28300
// Target type:     <no type info>
// ============================================================

void .is_cp_graphical(/* see target signature */)
{
    // Tail-call to is_cp_graphical via GOT/IAT indirection
    return is_cp_graphical(/* forwarded args */);
}

