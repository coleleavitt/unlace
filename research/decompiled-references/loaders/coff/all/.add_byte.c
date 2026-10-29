// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4220
// Name:            .add_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4220 jmp     cs:off_230F8
//
// Resolved target: add_byte
// Target address:  0x23518
// GOT/IAT slot:    0x230F8
// Slot symbol:     off_230F8
// Target type:     <no type info>
// ============================================================

void .add_byte(/* see target signature */)
{
    // Tail-call to add_byte via GOT/IAT indirection
    return add_byte(/* forwarded args */);
}

