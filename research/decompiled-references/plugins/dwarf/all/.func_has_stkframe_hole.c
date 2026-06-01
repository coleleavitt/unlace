// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA780
// Name:            .func_has_stkframe_hole
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA780 jmp     cs:off_CA3A8
//
// Resolved target: func_has_stkframe_hole
// Target address:  0xD0CE0
// GOT/IAT slot:    0xCA3A8
// Slot symbol:     off_CA3A8
// Target type:     <no type info>
// ============================================================

void .func_has_stkframe_hole(/* see target signature */)
{
    // Tail-call to func_has_stkframe_hole via GOT/IAT indirection
    return func_has_stkframe_hole(/* forwarded args */);
}

