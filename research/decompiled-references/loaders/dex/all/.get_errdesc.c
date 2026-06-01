// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B0
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36B0 jmp     cs:off_28340
//
// Resolved target: get_errdesc
// Target address:  0x28808
// GOT/IAT slot:    0x28340
// Slot symbol:     off_28340
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

