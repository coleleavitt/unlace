// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_29238
//
// Resolved target: get_named_type
// Target address:  0x29600
// GOT/IAT slot:    0x29238
// Slot symbol:     off_29238
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

