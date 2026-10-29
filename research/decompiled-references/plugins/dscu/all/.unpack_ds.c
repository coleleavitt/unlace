// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4320
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4320 jmp     cs:off_1F178
//
// Resolved target: unpack_ds
// Target address:  0x1F428
// GOT/IAT slot:    0x1F178
// Slot symbol:     off_1F178
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

