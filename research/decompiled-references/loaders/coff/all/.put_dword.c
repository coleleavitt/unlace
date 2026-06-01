// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42C0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42C0 jmp     cs:off_23148
//
// Resolved target: put_dword
// Target address:  0x23568
// GOT/IAT slot:    0x23148
// Slot symbol:     off_23148
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

