// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2C0
// Name:            .fopenWB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2C0 jmp     cs:off_CA148
//
// Resolved target: fopenWB
// Target address:  0xD0A78
// GOT/IAT slot:    0xCA148
// Slot symbol:     off_CA148
// Target type:     <no type info>
// ============================================================

void .fopenWB(/* see target signature */)
{
    // Tail-call to fopenWB via GOT/IAT indirection
    return fopenWB(/* forwarded args */);
}

