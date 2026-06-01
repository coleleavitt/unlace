// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_8158
//
// Resolved target: qlsize
// Target address:  0x8348
// GOT/IAT slot:    0x8158
// Slot symbol:     off_8158
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

