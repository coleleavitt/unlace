// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4110
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4110 jmp     cs:off_1F070
//
// Resolved target: fopenWB
// Target address:  0x1F320
// GOT/IAT slot:    0x1F070
// Slot symbol:     off_1F070
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

