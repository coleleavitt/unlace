// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6650
// Name:            .make_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6650 jmp     cs:off_2D310
//
// Resolved target: make_linput
// Target address:  0x2D820
// GOT/IAT slot:    0x2D310
// Slot symbol:     off_2D310
// Target type:     <no type info>
// ============================================================

void .make_linput(/* see target signature */)
{
    // Tail-call to make_linput via GOT/IAT indirection
    return make_linput(/* forwarded args */);
}

