// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198E0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198E0 jmp     cs:off_75458
//
// Resolved target: validate_name
// Target address:  0x75CA8
// GOT/IAT slot:    0x75458
// Slot symbol:     off_75458
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

