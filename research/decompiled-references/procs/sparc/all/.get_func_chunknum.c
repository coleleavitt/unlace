// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71A0
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71A0 jmp     cs:off_190B8
//
// Resolved target: get_func_chunknum
// Target address:  0x195E8
// GOT/IAT slot:    0x190B8
// Slot symbol:     off_190B8
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

