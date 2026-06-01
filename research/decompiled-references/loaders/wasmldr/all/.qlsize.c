// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_15110
//
// Resolved target: qlsize
// Target address:  0x15310
// GOT/IAT slot:    0x15110
// Slot symbol:     off_15110
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

