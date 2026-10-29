// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_B0D8
//
// Resolved target: getseg
// Target address:  0xB380
// GOT/IAT slot:    0xB0D8
// Slot symbol:     off_B0D8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

