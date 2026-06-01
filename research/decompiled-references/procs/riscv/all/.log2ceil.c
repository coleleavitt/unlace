// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA310
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA310 jmp     cs:off_35170
//
// Resolved target: log2ceil
// Target address:  0x357C0
// GOT/IAT slot:    0x35170
// Slot symbol:     off_35170
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

