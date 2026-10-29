// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_7138
//
// Resolved target: qlsize
// Target address:  0x72F8
// GOT/IAT slot:    0x7138
// Slot symbol:     off_7138
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

