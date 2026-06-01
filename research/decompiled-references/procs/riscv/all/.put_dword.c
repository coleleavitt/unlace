// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA340
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA340 jmp     cs:off_35188
//
// Resolved target: put_dword
// Target address:  0x357D8
// GOT/IAT slot:    0x35188
// Slot symbol:     off_35188
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

