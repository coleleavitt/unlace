// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19420
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19420 jmp     cs:off_751F8
//
// Resolved target: put_dword
// Target address:  0x75A48
// GOT/IAT slot:    0x751F8
// Slot symbol:     off_751F8
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

