// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93C0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93C0 jmp     cs:off_2E1C8
//
// Resolved target: getseg
// Target address:  0x2E838
// GOT/IAT slot:    0x2E1C8
// Slot symbol:     off_2E1C8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

