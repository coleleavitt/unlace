// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB40
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB40 jmp     cs:off_CA588
//
// Resolved target: qlsize
// Target address:  0xD0EE0
// GOT/IAT slot:    0xCA588
// Slot symbol:     off_CA588
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

