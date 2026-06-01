// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5410
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5410 jmp     cs:off_151F0
//
// Resolved target: set_name
// Target address:  0x16280
// GOT/IAT slot:    0x151F0
// Slot symbol:     off_151F0
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

