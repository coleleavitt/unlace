// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .qlgetz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_5050
//
// Resolved target: qlgetz
// Target address:  0x51B0
// GOT/IAT slot:    0x5050
// Slot symbol:     off_5050
// Target type:     <no type info>
// ============================================================

void .qlgetz(/* see target signature */)
{
    // Tail-call to qlgetz via GOT/IAT indirection
    return qlgetz(/* forwarded args */);
}

