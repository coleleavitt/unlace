// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_28160
//
// Resolved target: getseg
// Target address:  0x28610
// GOT/IAT slot:    0x28160
// Slot symbol:     off_28160
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

