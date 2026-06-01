// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3470
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3470 jmp     cs:off_13220
//
// Resolved target: bin_search
// Target address:  0x13928
// GOT/IAT slot:    0x13220
// Slot symbol:     off_13220
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

