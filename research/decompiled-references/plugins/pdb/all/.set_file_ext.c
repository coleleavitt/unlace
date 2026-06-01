// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4C0
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4C0 jmp     cs:off_B3248
//
// Resolved target: set_file_ext
// Target address:  0xB39E8
// GOT/IAT slot:    0xB3248
// Slot symbol:     off_B3248
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

