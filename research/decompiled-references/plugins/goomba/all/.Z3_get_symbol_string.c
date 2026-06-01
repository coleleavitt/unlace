// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40A0
// Name:            .Z3_get_symbol_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40A0 jmp     cs:off_4E038
//
// Resolved target: Z3_get_symbol_string
// Target address:  0x4F638
// GOT/IAT slot:    0x4E038
// Slot symbol:     off_4E038
// Target type:     <no type info>
// ============================================================

void .Z3_get_symbol_string(/* see target signature */)
{
    // Tail-call to Z3_get_symbol_string via GOT/IAT indirection
    return Z3_get_symbol_string(/* forwarded args */);
}

