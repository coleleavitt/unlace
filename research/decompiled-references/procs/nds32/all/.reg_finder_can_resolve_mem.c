// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87E0
// Name:            .reg_finder_can_resolve_mem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87E0 jmp     cs:off_2A3D8
//
// Resolved target: reg_finder_can_resolve_mem
// Target address:  0x2A960
// GOT/IAT slot:    0x2A3D8
// Slot symbol:     off_2A3D8
// Target type:     <no type info>
// ============================================================

void .reg_finder_can_resolve_mem(/* see target signature */)
{
    // Tail-call to reg_finder_can_resolve_mem via GOT/IAT indirection
    return reg_finder_can_resolve_mem(/* forwarded args */);
}

