// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A90
// Name:            .create_bytearray_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A90 jmp     cs:off_89530
//
// Resolved target: create_bytearray_linput
// Target address:  0x8C860
// GOT/IAT slot:    0x89530
// Slot symbol:     off_89530
// Target type:     <no type info>
// ============================================================

void .create_bytearray_linput(/* see target signature */)
{
    // Tail-call to create_bytearray_linput via GOT/IAT indirection
    return create_bytearray_linput(/* forwarded args */);
}

