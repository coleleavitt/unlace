// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9940
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9940 jmp     cs:off_89488
//
// Resolved target: bin_search
// Target address:  0x8C7B8
// GOT/IAT slot:    0x89488
// Slot symbol:     off_89488
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

