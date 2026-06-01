// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2560
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2560 jmp     cs:off_B298
//
// Resolved target: qlsize
// Target address:  0xB748
// GOT/IAT slot:    0xB298
// Slot symbol:     off_B298
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

