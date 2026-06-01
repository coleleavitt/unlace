// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_281B8
//
// Resolved target: get_bytes
// Target address:  0x28668
// GOT/IAT slot:    0x281B8
// Slot symbol:     off_281B8
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

