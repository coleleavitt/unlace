// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3260
// Name:            .tinfo_t__build_anon_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3260 jmp     cs:off_29118
//
// Resolved target: tinfo_t__build_anon_type_name
// Target address:  0x294C8
// GOT/IAT slot:    0x29118
// Slot symbol:     off_29118
// Target type:     <no type info>
// ============================================================

void .tinfo_t__build_anon_type_name(/* see target signature */)
{
    // Tail-call to tinfo_t__build_anon_type_name via GOT/IAT indirection
    return tinfo_t__build_anon_type_name(/* forwarded args */);
}

