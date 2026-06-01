// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_4008
//
// Resolved target: mem2base
// Target address:  0x40E0
// GOT/IAT slot:    0x4008
// Slot symbol:     off_4008
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

