// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            .qlfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_201B8
//
// Resolved target: qlfile
// Target address:  0x21AD8
// GOT/IAT slot:    0x201B8
// Slot symbol:     off_201B8
// Target type:     <no type info>
// ============================================================

void .qlfile(/* see target signature */)
{
    // Tail-call to qlfile via GOT/IAT indirection
    return qlfile(/* forwarded args */);
}

