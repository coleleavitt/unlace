// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD50
// Name:            .create_bytearray_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD50 jmp     cs:off_CA690
//
// Resolved target: create_bytearray_linput
// Target address:  0xD0FF8
// GOT/IAT slot:    0xCA690
// Slot symbol:     off_CA690
// Target type:     <no type info>
// ============================================================

void .create_bytearray_linput(/* see target signature */)
{
    // Tail-call to create_bytearray_linput via GOT/IAT indirection
    return create_bytearray_linput(/* forwarded args */);
}

