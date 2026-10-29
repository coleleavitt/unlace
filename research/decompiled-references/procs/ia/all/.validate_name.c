// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7290
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7290 jmp     cs:off_26130
//
// Resolved target: validate_name
// Target address:  0x263E8
// GOT/IAT slot:    0x26130
// Slot symbol:     off_26130
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

