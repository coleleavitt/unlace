// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7D0
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7D0 jmp     cs:off_CA3D0
//
// Resolved target: get_qword
// Target address:  0xD0D08
// GOT/IAT slot:    0xCA3D0
// Slot symbol:     off_CA3D0
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

