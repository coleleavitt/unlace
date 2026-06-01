// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D650
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D650 jmp     cs:off_B3310
//
// Resolved target: close_linput
// Target address:  0xB3AB0
// GOT/IAT slot:    0xB3310
// Slot symbol:     off_B3310
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

