// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_5058
//
// Resolved target: getseg
// Target address:  0x51B8
// GOT/IAT slot:    0x5058
// Slot symbol:     off_5058
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

