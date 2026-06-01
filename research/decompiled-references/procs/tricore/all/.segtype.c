// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6830
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6830 jmp     cs:off_24400
//
// Resolved target: segtype
// Target address:  0x261F0
// GOT/IAT slot:    0x24400
// Slot symbol:     off_24400
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

