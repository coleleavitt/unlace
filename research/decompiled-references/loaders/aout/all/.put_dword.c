// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_6050
//
// Resolved target: put_dword
// Target address:  0x61D8
// GOT/IAT slot:    0x6050
// Slot symbol:     off_6050
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

