// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9670
// Name:            .apply_cdecl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9670 jmp     cs:off_89320
//
// Resolved target: apply_cdecl
// Target address:  0x8C628
// GOT/IAT slot:    0x89320
// Slot symbol:     off_89320
// Target type:     <no type info>
// ============================================================

void .apply_cdecl(/* see target signature */)
{
    // Tail-call to apply_cdecl via GOT/IAT indirection
    return apply_cdecl(/* forwarded args */);
}

