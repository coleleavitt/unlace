// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_B1B8
//
// Resolved target: qlsize
// Target address:  0xB478
// GOT/IAT slot:    0xB1B8
// Slot symbol:     off_B1B8
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

