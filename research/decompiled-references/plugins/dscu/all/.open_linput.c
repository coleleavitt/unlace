// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44A0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44A0 jmp     cs:off_1F238
//
// Resolved target: open_linput
// Target address:  0x1F510
// GOT/IAT slot:    0x1F238
// Slot symbol:     off_1F238
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

