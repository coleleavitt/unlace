// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_B168
//
// Resolved target: get_bytes
// Target address:  0xB600
// GOT/IAT slot:    0xB168
// Slot symbol:     off_B168
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

