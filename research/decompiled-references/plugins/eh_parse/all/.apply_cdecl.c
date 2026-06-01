// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6610
// Name:            .apply_cdecl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6610 jmp     cs:off_2F2F0
//
// Resolved target: apply_cdecl
// Target address:  0x2F960
// GOT/IAT slot:    0x2F2F0
// Slot symbol:     off_2F2F0
// Target type:     <no type info>
// ============================================================

void .apply_cdecl(/* see target signature */)
{
    // Tail-call to apply_cdecl via GOT/IAT indirection
    return apply_cdecl(/* forwarded args */);
}

