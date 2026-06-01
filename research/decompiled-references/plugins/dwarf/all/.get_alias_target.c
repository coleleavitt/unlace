// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA510
// Name:            .get_alias_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA510 jmp     cs:off_CA270
//
// Resolved target: get_alias_target
// Target address:  0xD0BA8
// GOT/IAT slot:    0xCA270
// Slot symbol:     off_CA270
// Target type:     <no type info>
// ============================================================

void .get_alias_target(/* see target signature */)
{
    // Tail-call to get_alias_target via GOT/IAT indirection
    return get_alias_target(/* forwarded args */);
}

