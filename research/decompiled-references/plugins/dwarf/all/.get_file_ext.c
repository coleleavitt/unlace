// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD90
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD90 jmp     cs:off_CA6B0
//
// Resolved target: get_file_ext
// Target address:  0xD1018
// GOT/IAT slot:    0xCA6B0
// Slot symbol:     off_CA6B0
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

