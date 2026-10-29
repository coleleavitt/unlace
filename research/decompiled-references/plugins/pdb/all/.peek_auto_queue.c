// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9D0
// Name:            .peek_auto_queue
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9D0 jmp     cs:off_B34D0
//
// Resolved target: peek_auto_queue
// Target address:  0xB3C88
// GOT/IAT slot:    0xB34D0
// Slot symbol:     off_B34D0
// Target type:     <no type info>
// ============================================================

void .peek_auto_queue(/* see target signature */)
{
    // Tail-call to peek_auto_queue via GOT/IAT indirection
    return peek_auto_queue(/* forwarded args */);
}

