// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6180
// Name:            .del_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6180 jmp     cs:off_2D0A8
//
// Resolved target: del_dref
// Target address:  0x2D5A8
// GOT/IAT slot:    0x2D0A8
// Slot symbol:     off_2D0A8
// Target type:     <no type info>
// ============================================================

void .del_dref(/* see target signature */)
{
    // Tail-call to del_dref via GOT/IAT indirection
    return del_dref(/* forwarded args */);
}

