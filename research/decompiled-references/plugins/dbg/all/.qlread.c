// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_131D8
//
// Resolved target: qlread
// Target address:  0x13558
// GOT/IAT slot:    0x131D8
// Slot symbol:     off_131D8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

