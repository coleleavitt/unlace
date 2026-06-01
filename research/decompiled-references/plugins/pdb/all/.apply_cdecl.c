// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D700
// Name:            .apply_cdecl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D700 jmp     cs:off_B3368
//
// Resolved target: apply_cdecl
// Target address:  0xB3B08
// GOT/IAT slot:    0xB3368
// Slot symbol:     off_B3368
// Target type:     <no type info>
// ============================================================

void .apply_cdecl(/* see target signature */)
{
    // Tail-call to apply_cdecl via GOT/IAT indirection
    return apply_cdecl(/* forwarded args */);
}

