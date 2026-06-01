// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .add_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_140E0
//
// Resolved target: add_byte
// Target address:  0x146C8
// GOT/IAT slot:    0x140E0
// Slot symbol:     off_140E0
// Target type:     <no type info>
// ============================================================

void .add_byte(/* see target signature */)
{
    // Tail-call to add_byte via GOT/IAT indirection
    return add_byte(/* forwarded args */);
}

