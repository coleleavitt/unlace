// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19520
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19520 jmp     cs:off_75278
//
// Resolved target: getseg
// Target address:  0x75AC8
// GOT/IAT slot:    0x75278
// Slot symbol:     off_75278
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

