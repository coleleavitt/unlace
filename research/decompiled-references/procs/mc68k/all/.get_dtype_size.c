// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6220
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6220 jmp     cs:off_1D0F8
//
// Resolved target: get_dtype_size
// Target address:  0x1D5E8
// GOT/IAT slot:    0x1D0F8
// Slot symbol:     off_1D0F8
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

