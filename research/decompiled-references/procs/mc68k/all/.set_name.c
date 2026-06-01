// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6440
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6440 jmp     cs:off_1D208
//
// Resolved target: set_name
// Target address:  0x1D6F8
// GOT/IAT slot:    0x1D208
// Slot symbol:     off_1D208
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

