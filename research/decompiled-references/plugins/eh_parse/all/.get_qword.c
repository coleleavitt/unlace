// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6620
// Name:            .get_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6620 jmp     cs:off_2F2F8
//
// Resolved target: get_qword
// Target address:  0x2F968
// GOT/IAT slot:    0x2F2F8
// Slot symbol:     off_2F2F8
// Target type:     <no type info>
// ============================================================

void .get_qword(/* see target signature */)
{
    // Tail-call to get_qword via GOT/IAT indirection
    return get_qword(/* forwarded args */);
}

