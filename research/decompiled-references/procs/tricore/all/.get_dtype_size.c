// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6280
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6280 jmp     cs:off_24128
//
// Resolved target: get_dtype_size
// Target address:  0x25EF8
// GOT/IAT slot:    0x24128
// Slot symbol:     off_24128
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

