// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .put_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_8008
//
// Resolved target: put_qword
// Target address:  0x86E8
// GOT/IAT slot:    0x8008
// Slot symbol:     off_8008
// Target type:     <no type info>
// ============================================================

void .put_qword(/* see target signature */)
{
    // Tail-call to put_qword via GOT/IAT indirection
    return put_qword(/* forwarded args */);
}

