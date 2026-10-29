// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3690
// Name:            .fopenRT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3690 jmp     cs:off_20330
//
// Resolved target: fopenRT
// Target address:  0x21C68
// GOT/IAT slot:    0x20330
// Slot symbol:     off_20330
// Target type:     <no type info>
// ============================================================

void .fopenRT(/* see target signature */)
{
    // Tail-call to fopenRT via GOT/IAT indirection
    return fopenRT(/* forwarded args */);
}

