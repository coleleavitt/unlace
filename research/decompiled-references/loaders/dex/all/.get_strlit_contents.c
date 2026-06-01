// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C0
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30C0 jmp     cs:off_28048
//
// Resolved target: get_strlit_contents
// Target address:  0x284F8
// GOT/IAT slot:    0x28048
// Slot symbol:     off_28048
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

