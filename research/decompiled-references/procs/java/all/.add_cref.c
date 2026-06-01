// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67E0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67E0 jmp     cs:off_2D3D8
//
// Resolved target: add_cref
// Target address:  0x2D8F8
// GOT/IAT slot:    0x2D3D8
// Slot symbol:     off_2D3D8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

