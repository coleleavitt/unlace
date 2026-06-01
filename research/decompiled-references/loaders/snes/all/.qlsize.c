// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_70A0
//
// Resolved target: qlsize
// Target address:  0x7198
// GOT/IAT slot:    0x70A0
// Slot symbol:     off_70A0
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

