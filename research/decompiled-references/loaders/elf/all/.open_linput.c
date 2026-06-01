// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AB0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AB0 jmp     cs:off_89540
//
// Resolved target: open_linput
// Target address:  0x8C870
// GOT/IAT slot:    0x89540
// Slot symbol:     off_89540
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

