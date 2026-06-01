// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98A0
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98A0 jmp     cs:off_89438
//
// Resolved target: get_named_type_tid
// Target address:  0x8C758
// GOT/IAT slot:    0x89438
// Slot symbol:     off_89438
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

