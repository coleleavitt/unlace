// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_B130
//
// Resolved target: set_file_ext
// Target address:  0xB5C8
// GOT/IAT slot:    0xB130
// Slot symbol:     off_B130
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

