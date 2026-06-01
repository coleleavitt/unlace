// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8B0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8B0 jmp     cs:off_CA440
//
// Resolved target: validate_name
// Target address:  0xD0D80
// GOT/IAT slot:    0xCA440
// Slot symbol:     off_CA440
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

