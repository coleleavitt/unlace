// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_B190
//
// Resolved target: close_linput
// Target address:  0xB628
// GOT/IAT slot:    0xB190
// Slot symbol:     off_B190
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

