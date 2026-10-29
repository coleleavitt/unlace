// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4C0
// Name:            .tinfo_t__build_anon_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4C0 jmp     cs:off_CA248
//
// Resolved target: tinfo_t__build_anon_type_name
// Target address:  0xD0B80
// GOT/IAT slot:    0xCA248
// Slot symbol:     off_CA248
// Target type:     <no type info>
// ============================================================

void .tinfo_t__build_anon_type_name(/* see target signature */)
{
    // Tail-call to tinfo_t__build_anon_type_name via GOT/IAT indirection
    return tinfo_t__build_anon_type_name(/* forwarded args */);
}

