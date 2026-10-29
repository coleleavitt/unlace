// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_A198
//
// Resolved target: bin_search
// Target address:  0xB480
// GOT/IAT slot:    0xA198
// Slot symbol:     off_A198
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

