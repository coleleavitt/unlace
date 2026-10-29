// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_4068
//
// Resolved target: close_linput
// Target address:  0x51A8
// GOT/IAT slot:    0x4068
// Slot symbol:     off_4068
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

