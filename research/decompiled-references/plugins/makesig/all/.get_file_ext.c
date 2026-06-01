// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3680
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3680 jmp     cs:off_20328
//
// Resolved target: get_file_ext
// Target address:  0x21C60
// GOT/IAT slot:    0x20328
// Slot symbol:     off_20328
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

