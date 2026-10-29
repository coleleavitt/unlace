// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA520
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA520 jmp     cs:off_CA278
//
// Resolved target: getseg
// Target address:  0xD0BB0
// GOT/IAT slot:    0xCA278
// Slot symbol:     off_CA278
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

