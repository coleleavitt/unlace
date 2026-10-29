// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2650
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2650 jmp     cs:off_B310
//
// Resolved target: open_linput
// Target address:  0xB7C8
// GOT/IAT slot:    0xB310
// Slot symbol:     off_B310
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

