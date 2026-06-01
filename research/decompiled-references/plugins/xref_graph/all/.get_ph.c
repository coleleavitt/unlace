// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16EB0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16EB0 jmp     cs:off_4F740
//
// Resolved target: get_ph
// Target address:  0x50AE0
// GOT/IAT slot:    0x4F740
// Slot symbol:     off_4F740
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

