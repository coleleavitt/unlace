// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9710
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9710 jmp     cs:off_89370
//
// Resolved target: validate_name
// Target address:  0x8C680
// GOT/IAT slot:    0x89370
// Slot symbol:     off_89370
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

