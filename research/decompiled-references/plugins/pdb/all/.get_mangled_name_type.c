// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBC0
// Name:            .get_mangled_name_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBC0 jmp     cs:off_B35C8
//
// Resolved target: get_mangled_name_type
// Target address:  0xB3DA0
// GOT/IAT slot:    0xB35C8
// Slot symbol:     off_B35C8
// Target type:     <no type info>
// ============================================================

void .get_mangled_name_type(/* see target signature */)
{
    // Tail-call to get_mangled_name_type via GOT/IAT indirection
    return get_mangled_name_type(/* forwarded args */);
}

