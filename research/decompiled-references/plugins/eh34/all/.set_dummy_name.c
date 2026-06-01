// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6740
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6740 jmp     cs:off_8D388
//
// Resolved target: set_dummy_name
// Target address:  0x8D948
// GOT/IAT slot:    0x8D388
// Slot symbol:     off_8D388
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

