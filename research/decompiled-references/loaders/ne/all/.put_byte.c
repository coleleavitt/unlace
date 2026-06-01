// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_B078
//
// Resolved target: put_byte
// Target address:  0xB310
// GOT/IAT slot:    0xB078
// Slot symbol:     off_B078
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

