// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_8070
//
// Resolved target: fopenWB
// Target address:  0x8230
// GOT/IAT slot:    0x8070
// Slot symbol:     off_8070
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

