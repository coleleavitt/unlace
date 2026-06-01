// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25B0
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x25B0 jmp     cs:off_B2C0
//
// Resolved target: bin_search
// Target address:  0xB778
// GOT/IAT slot:    0xB2C0
// Slot symbol:     off_B2C0
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

