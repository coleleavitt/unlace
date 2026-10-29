// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4060
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4060 jmp     cs:off_23018
//
// Resolved target: put_qword
// Target address:  0x23438
// GOT/IAT slot:    0x23018
// Slot symbol:     off_23018
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

