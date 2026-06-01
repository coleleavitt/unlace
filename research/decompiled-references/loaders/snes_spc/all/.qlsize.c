// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_4060
//
// Resolved target: qlsize
// Target address:  0x4120
// GOT/IAT slot:    0x4060
// Slot symbol:     off_4060
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

