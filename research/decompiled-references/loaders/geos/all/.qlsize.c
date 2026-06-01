// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_81A0
//
// Resolved target: qlsize
// Target address:  0x8418
// GOT/IAT slot:    0x81A0
// Slot symbol:     off_81A0
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

