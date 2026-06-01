// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35B0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35B0 jmp     cs:off_202C0
//
// Resolved target: get_ash
// Target address:  0x21BF8
// GOT/IAT slot:    0x202C0
// Slot symbol:     off_202C0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

