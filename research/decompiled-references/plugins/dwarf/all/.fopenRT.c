// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xADA0
// Name:            .fopenRT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xADA0 jmp     cs:off_CA6B8
//
// Resolved target: fopenRT
// Target address:  0xD1020
// GOT/IAT slot:    0xCA6B8
// Slot symbol:     off_CA6B8
// Target type:     <no type info>
// ============================================================

void .fopenRT(/* see target signature */)
{
    // Tail-call to fopenRT via GOT/IAT indirection
    return fopenRT(/* forwarded args */);
}

