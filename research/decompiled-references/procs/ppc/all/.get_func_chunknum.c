// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203B0
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x203B0 jmp     cs:off_951C0
//
// Resolved target: get_func_chunknum
// Target address:  0x95BF8
// GOT/IAT slot:    0x951C0
// Slot symbol:     off_951C0
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

