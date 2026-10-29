// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63F0
// Name:            .create_xrefs_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63F0 jmp     cs:off_2F1E0
//
// Resolved target: create_xrefs_from
// Target address:  0x2F850
// GOT/IAT slot:    0x2F1E0
// Slot symbol:     off_2F1E0
// Target type:     <no type info>
// ============================================================

void .create_xrefs_from(/* see target signature */)
{
    // Tail-call to create_xrefs_from via GOT/IAT indirection
    return create_xrefs_from(/* forwarded args */);
}

