// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_A1A0
//
// Resolved target: bin_search
// Target address:  0xA468
// GOT/IAT slot:    0xA1A0
// Slot symbol:     off_A1A0
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

