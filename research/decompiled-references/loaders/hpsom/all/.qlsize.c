// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_5100
//
// Resolved target: qlsize
// Target address:  0x52A8
// GOT/IAT slot:    0x5100
// Slot symbol:     off_5100
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

