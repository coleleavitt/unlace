// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_7090
//
// Resolved target: put_dword
// Target address:  0x7248
// GOT/IAT slot:    0x7090
// Slot symbol:     off_7090
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

