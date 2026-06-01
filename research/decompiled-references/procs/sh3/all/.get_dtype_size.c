// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5200
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5200 jmp     cs:off_150E8
//
// Resolved target: get_dtype_size
// Target address:  0x16178
// GOT/IAT slot:    0x150E8
// Slot symbol:     off_150E8
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

