// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7250
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7250 jmp     cs:off_19110
//
// Resolved target: put_dword
// Target address:  0x19640
// GOT/IAT slot:    0x19110
// Slot symbol:     off_19110
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

