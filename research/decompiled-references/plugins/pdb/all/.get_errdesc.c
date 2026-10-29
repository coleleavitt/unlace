// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA80
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA80 jmp     cs:off_B3528
//
// Resolved target: get_errdesc
// Target address:  0xB3CF0
// GOT/IAT slot:    0xB3528
// Slot symbol:     off_B3528
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

