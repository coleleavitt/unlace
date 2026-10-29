// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63A0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63A0 jmp     cs:off_2F1B8
//
// Resolved target: getseg
// Target address:  0x2F828
// GOT/IAT slot:    0x2F1B8
// Slot symbol:     off_2F1B8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

