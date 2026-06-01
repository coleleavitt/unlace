// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4610
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4610 jmp     cs:off_282F0
//
// Resolved target: get_idati
// Target address:  0x29C90
// GOT/IAT slot:    0x282F0
// Slot symbol:     off_282F0
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

