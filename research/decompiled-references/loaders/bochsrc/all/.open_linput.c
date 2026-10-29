// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11E0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11E0 jmp     cs:off_40D8
//
// Resolved target: open_linput
// Target address:  0x5228
// GOT/IAT slot:    0x40D8
// Slot symbol:     off_40D8
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

