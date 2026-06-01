// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_B0A0
//
// Resolved target: put_dword
// Target address:  0xB338
// GOT/IAT slot:    0xB0A0
// Slot symbol:     off_B0A0
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

