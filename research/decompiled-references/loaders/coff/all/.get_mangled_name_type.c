// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4770
// Name:            .get_mangled_name_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4770 jmp     cs:off_233A0
//
// Resolved target: get_mangled_name_type
// Target address:  0x237E8
// GOT/IAT slot:    0x233A0
// Slot symbol:     off_233A0
// Target type:     <no type info>
// ============================================================

void .get_mangled_name_type(/* see target signature */)
{
    // Tail-call to get_mangled_name_type via GOT/IAT indirection
    return get_mangled_name_type(/* forwarded args */);
}

