// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4580
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4580 jmp     cs:off_282A8
//
// Resolved target: reg_str_get
// Target address:  0x29C40
// GOT/IAT slot:    0x282A8
// Slot symbol:     off_282A8
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

