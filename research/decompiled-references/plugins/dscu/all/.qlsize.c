// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43B0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43B0 jmp     cs:off_1F1C0
//
// Resolved target: qlsize
// Target address:  0x1F488
// GOT/IAT slot:    0x1F1C0
// Slot symbol:     off_1F1C0
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

