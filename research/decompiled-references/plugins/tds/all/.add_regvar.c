// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_A118
//
// Resolved target: add_regvar
// Target address:  0xA348
// GOT/IAT slot:    0xA118
// Slot symbol:     off_A118
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}

