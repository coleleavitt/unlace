// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D360
// Name:            .http_get_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D360 jmp     cs:off_B3198
//
// Resolved target: http_get_file
// Target address:  0xB3930
// GOT/IAT slot:    0xB3198
// Slot symbol:     off_B3198
// Target type:     <no type info>
// ============================================================

void .http_get_file(/* see target signature */)
{
    // Tail-call to http_get_file via GOT/IAT indirection
    return http_get_file(/* forwarded args */);
}

