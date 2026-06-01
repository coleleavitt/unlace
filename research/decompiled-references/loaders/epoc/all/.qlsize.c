// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_13208
//
// Resolved target: qlsize
// Target address:  0x13910
// GOT/IAT slot:    0x13208
// Slot symbol:     off_13208
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

