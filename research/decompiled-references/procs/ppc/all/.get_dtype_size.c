// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20450
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20450 jmp     cs:off_95210
//
// Resolved target: get_dtype_size
// Target address:  0x95C48
// GOT/IAT slot:    0x95210
// Slot symbol:     off_95210
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

