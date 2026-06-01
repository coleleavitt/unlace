// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_B068
//
// Resolved target: put_byte
// Target address:  0xB310
// GOT/IAT slot:    0xB068
// Slot symbol:     off_B068
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

