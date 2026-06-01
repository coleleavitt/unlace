// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46A0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46A0 jmp     cs:off_23338
//
// Resolved target: qlsize
// Target address:  0x23770
// GOT/IAT slot:    0x23338
// Slot symbol:     off_23338
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

