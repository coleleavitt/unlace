// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABC0
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABC0 jmp     cs:off_CA5C8
//
// Resolved target: get_errdesc
// Target address:  0xD0F20
// GOT/IAT slot:    0xCA5C8
// Slot symbol:     off_CA5C8
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

