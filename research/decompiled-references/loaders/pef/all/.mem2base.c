// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_8008
//
// Resolved target: mem2base
// Target address:  0x81F8
// GOT/IAT slot:    0x8008
// Slot symbol:     off_8008
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

