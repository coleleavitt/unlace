// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_20248
//
// Resolved target: get_path
// Target address:  0x21B78
// GOT/IAT slot:    0x20248
// Slot symbol:     off_20248
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

