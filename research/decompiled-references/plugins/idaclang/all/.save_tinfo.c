// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_291B0
//
// Resolved target: save_tinfo
// Target address:  0x29568
// GOT/IAT slot:    0x291B0
// Slot symbol:     off_291B0
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

