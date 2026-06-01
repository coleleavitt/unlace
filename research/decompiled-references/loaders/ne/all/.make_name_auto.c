// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2480
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2480 jmp     cs:off_B228
//
// Resolved target: make_name_auto
// Target address:  0xB4D8
// GOT/IAT slot:    0xB228
// Slot symbol:     off_B228
// Target type:     <no type info>
// ============================================================

void .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

