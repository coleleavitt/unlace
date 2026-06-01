// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D570
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D570 jmp     cs:off_B32A0
//
// Resolved target: get_bytes
// Target address:  0xB3A40
// GOT/IAT slot:    0xB32A0
// Slot symbol:     off_B32A0
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

