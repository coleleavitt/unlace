// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64A0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64A0 jmp     cs:off_2F238
//
// Resolved target: get_bytes
// Target address:  0x2F8A8
// GOT/IAT slot:    0x2F238
// Slot symbol:     off_2F238
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

