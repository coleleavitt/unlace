// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193B0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193B0 jmp     cs:off_751C0
//
// Resolved target: get_dtype_size
// Target address:  0x75A10
// GOT/IAT slot:    0x751C0
// Slot symbol:     off_751C0
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

