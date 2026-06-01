// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6490
// Name:            .qlfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6490 jmp     cs:off_2D230
//
// Resolved target: qlfile
// Target address:  0x2D730
// GOT/IAT slot:    0x2D230
// Slot symbol:     off_2D230
// Target type:     <no type info>
// ============================================================

void .qlfile(/* see target signature */)
{
    // Tail-call to qlfile via GOT/IAT indirection
    return qlfile(/* forwarded args */);
}

