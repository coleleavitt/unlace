// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x160E0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x160E0 jmp     cs:off_4F058
//
// Resolved target: getseg
// Target address:  0x4FE80
// GOT/IAT slot:    0x4F058
// Slot symbol:     off_4F058
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

