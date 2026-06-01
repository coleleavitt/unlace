// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6230
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6230 jmp     cs:off_2F100
//
// Resolved target: get_func_chunknum
// Target address:  0x2F770
// GOT/IAT slot:    0x2F100
// Slot symbol:     off_2F100
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

