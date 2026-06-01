// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68A0
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68A0 jmp     cs:off_2D438
//
// Resolved target: make_name_auto
// Target address:  0x2D960
// GOT/IAT slot:    0x2D438
// Slot symbol:     off_2D438
// Target type:     <no type info>
// ============================================================

void .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

