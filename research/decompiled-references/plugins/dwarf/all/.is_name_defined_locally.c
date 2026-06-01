// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5A0
// Name:            .is_name_defined_locally
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5A0 jmp     cs:off_CA2B8
//
// Resolved target: is_name_defined_locally
// Target address:  0xD0BF0
// GOT/IAT slot:    0xCA2B8
// Slot symbol:     off_CA2B8
// Target type:     <no type info>
// ============================================================

void .is_name_defined_locally(/* see target signature */)
{
    // Tail-call to is_name_defined_locally via GOT/IAT indirection
    return is_name_defined_locally(/* forwarded args */);
}

