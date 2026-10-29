// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4100
// Name:            .Z3_get_error_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4100 jmp     cs:off_4E068
//
// Resolved target: Z3_get_error_code
// Target address:  0x4F668
// GOT/IAT slot:    0x4E068
// Slot symbol:     off_4E068
// Target type:     <no type info>
// ============================================================

void .Z3_get_error_code(/* see target signature */)
{
    // Tail-call to Z3_get_error_code via GOT/IAT indirection
    return Z3_get_error_code(/* forwarded args */);
}

