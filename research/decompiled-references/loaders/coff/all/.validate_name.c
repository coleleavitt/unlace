// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4550
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4550 jmp     cs:off_23290
//
// Resolved target: validate_name
// Target address:  0x236B0
// GOT/IAT slot:    0x23290
// Slot symbol:     off_23290
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

