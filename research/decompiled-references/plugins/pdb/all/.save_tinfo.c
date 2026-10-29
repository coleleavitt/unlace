// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8B0
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8B0 jmp     cs:off_B3440
//
// Resolved target: save_tinfo
// Target address:  0xB3BE8
// GOT/IAT slot:    0xB3440
// Slot symbol:     off_B3440
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

