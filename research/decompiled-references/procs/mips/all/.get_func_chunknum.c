// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19310
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19310 jmp     cs:off_75170
//
// Resolved target: get_func_chunknum
// Target address:  0x759C0
// GOT/IAT slot:    0x75170
// Slot symbol:     off_75170
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

