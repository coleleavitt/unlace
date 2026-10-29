// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6340
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6340 jmp     cs:off_24188
//
// Resolved target: getseg
// Target address:  0x25F58
// GOT/IAT slot:    0x24188
// Slot symbol:     off_24188
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

