// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_8180
//
// Resolved target: make_name_auto
// Target address:  0x8388
// GOT/IAT slot:    0x8180
// Slot symbol:     off_8180
// Target type:     <no type info>
// ============================================================

void .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

