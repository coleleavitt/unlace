// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4210
// Name:            .get_wide_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4210 jmp     cs:off_230F0
//
// Resolved target: get_wide_byte
// Target address:  0x23510
// GOT/IAT slot:    0x230F0
// Slot symbol:     off_230F0
// Target type:     <no type info>
// ============================================================

void .get_wide_byte(/* see target signature */)
{
    // Tail-call to get_wide_byte via GOT/IAT indirection
    return get_wide_byte(/* forwarded args */);
}

