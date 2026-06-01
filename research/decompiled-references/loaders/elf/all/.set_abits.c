// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9030
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9030 jmp     cs:off_89000
//
// Resolved target: set_abits
// Target address:  0x8C300
// GOT/IAT slot:    0x89000
// Slot symbol:     off_89000
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

