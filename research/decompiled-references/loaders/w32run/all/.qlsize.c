// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_40B0
//
// Resolved target: qlsize
// Target address:  0x41E0
// GOT/IAT slot:    0x40B0
// Slot symbol:     off_40B0
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

