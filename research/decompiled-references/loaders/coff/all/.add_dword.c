// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47B0
// Name:            .add_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47B0 jmp     cs:off_233C0
//
// Resolved target: add_dword
// Target address:  0x23808
// GOT/IAT slot:    0x233C0
// Slot symbol:     off_233C0
// Target type:     <no type info>
// ============================================================

void .add_dword(/* see target signature */)
{
    // Tail-call to add_dword via GOT/IAT indirection
    return add_dword(/* forwarded args */);
}

