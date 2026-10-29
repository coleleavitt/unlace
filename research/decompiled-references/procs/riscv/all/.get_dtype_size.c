// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2E0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2E0 jmp     cs:off_35158
//
// Resolved target: get_dtype_size
// Target address:  0x357A8
// GOT/IAT slot:    0x35158
// Slot symbol:     off_35158
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

