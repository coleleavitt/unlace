// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3740
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3740 jmp     cs:off_28388
//
// Resolved target: open_linput
// Target address:  0x28850
// GOT/IAT slot:    0x28388
// Slot symbol:     off_28388
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

