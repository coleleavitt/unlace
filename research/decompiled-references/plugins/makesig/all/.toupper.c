// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3620
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3620 jmp     cs:off_202F8
//
// Resolved target: toupper
// Target address:  0x21C30
// GOT/IAT slot:    0x202F8
// Slot symbol:     off_202F8
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

