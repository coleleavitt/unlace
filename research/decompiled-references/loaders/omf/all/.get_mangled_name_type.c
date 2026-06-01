// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3660
// Name:            .get_mangled_name_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3660 jmp     cs:off_14318
//
// Resolved target: get_mangled_name_type
// Target address:  0x14928
// GOT/IAT slot:    0x14318
// Slot symbol:     off_14318
// Target type:     <no type info>
// ============================================================

void .get_mangled_name_type(/* see target signature */)
{
    // Tail-call to get_mangled_name_type via GOT/IAT indirection
    return get_mangled_name_type(/* forwarded args */);
}

