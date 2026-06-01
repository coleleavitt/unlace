// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_28030
//
// Resolved target: mem2base
// Target address:  0x284E0
// GOT/IAT slot:    0x28030
// Slot symbol:     off_28030
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

