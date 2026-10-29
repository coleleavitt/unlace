// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207A0
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207A0 jmp     cs:off_953B8
//
// Resolved target: get_bytes
// Target address:  0x95DF0
// GOT/IAT slot:    0x953B8
// Slot symbol:     off_953B8
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

