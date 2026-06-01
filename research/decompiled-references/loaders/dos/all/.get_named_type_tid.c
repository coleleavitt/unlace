// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2550
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2550 jmp     cs:off_B290
//
// Resolved target: get_named_type_tid
// Target address:  0xB738
// GOT/IAT slot:    0xB290
// Slot symbol:     off_B290
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

