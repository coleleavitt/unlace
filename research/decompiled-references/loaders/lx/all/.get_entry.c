// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2420
// Name:            .get_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2420 jmp     cs:off_B1F8
//
// Resolved target: get_entry
// Target address:  0xB4B8
// GOT/IAT slot:    0xB1F8
// Slot symbol:     off_B1F8
// Target type:     <no type info>
// ============================================================

void .get_entry(/* see target signature */)
{
    // Tail-call to get_entry via GOT/IAT indirection
    return get_entry(/* forwarded args */);
}

