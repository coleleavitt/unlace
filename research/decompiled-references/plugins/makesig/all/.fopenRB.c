// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .fopenRB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_200C8
//
// Resolved target: fopenRB
// Target address:  0x219D8
// GOT/IAT slot:    0x200C8
// Slot symbol:     off_200C8
// Target type:     <no type info>
// ============================================================

void .fopenRB(/* see target signature */)
{
    // Tail-call to fopenRB via GOT/IAT indirection
    return fopenRB(/* forwarded args */);
}

