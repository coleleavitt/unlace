// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9470
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9470 jmp     cs:off_89220
//
// Resolved target: get_strid
// Target address:  0x8C528
// GOT/IAT slot:    0x89220
// Slot symbol:     off_89220
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

