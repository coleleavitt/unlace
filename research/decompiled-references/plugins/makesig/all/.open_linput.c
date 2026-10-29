// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3660
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3660 jmp     cs:off_20318
//
// Resolved target: open_linput
// Target address:  0x21C50
// GOT/IAT slot:    0x20318
// Slot symbol:     off_20318
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

