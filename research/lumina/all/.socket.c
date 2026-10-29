// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19140
// Name:            .socket
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19140 jmp     cs:off_23E088
//
// Resolved target: socket
// Target address:  0x243BB0
// GOT/IAT slot:    0x23E088
// Slot symbol:     off_23E088
// Target type:     int(int domain, int type, int protocol)
// ============================================================

/* see target sig */ .socket(/* see target signature */)
{
    // Tail-call to socket via GOT/IAT indirection
    return socket(/* forwarded args */);
}

