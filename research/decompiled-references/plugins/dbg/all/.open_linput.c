// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3610
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3610 jmp     cs:off_132F0
//
// Resolved target: open_linput
// Target address:  0x13698
// GOT/IAT slot:    0x132F0
// Slot symbol:     off_132F0
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

