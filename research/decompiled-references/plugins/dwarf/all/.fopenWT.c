// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD30
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD30 jmp     cs:off_CA680
//
// Resolved target: fopenWT
// Target address:  0xD0FE0
// GOT/IAT slot:    0xCA680
// Slot symbol:     off_CA680
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

