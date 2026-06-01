// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6880
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6880 jmp     cs:off_2F428
//
// Resolved target: qlsize
// Target address:  0x2FAB0
// GOT/IAT slot:    0x2F428
// Slot symbol:     off_2F428
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

