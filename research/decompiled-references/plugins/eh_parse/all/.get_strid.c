// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6380
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6380 jmp     cs:off_2F1A8
//
// Resolved target: get_strid
// Target address:  0x2F818
// GOT/IAT slot:    0x2F1A8
// Slot symbol:     off_2F1A8
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

