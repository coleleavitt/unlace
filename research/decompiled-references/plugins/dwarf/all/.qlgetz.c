// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA500
// Name:            .qlgetz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA500 jmp     cs:off_CA268
//
// Resolved target: qlgetz
// Target address:  0xD0BA0
// GOT/IAT slot:    0xCA268
// Slot symbol:     off_CA268
// Target type:     <no type info>
// ============================================================

void .qlgetz(/* see target signature */)
{
    // Tail-call to qlgetz via GOT/IAT indirection
    return qlgetz(/* forwarded args */);
}

