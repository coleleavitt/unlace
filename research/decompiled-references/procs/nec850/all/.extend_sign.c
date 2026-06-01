// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9250
// Name:            .extend_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9250 jmp     cs:off_2E110
//
// Resolved target: extend_sign
// Target address:  0x2E780
// GOT/IAT slot:    0x2E110
// Slot symbol:     off_2E110
// Target type:     <no type info>
// ============================================================

void .extend_sign(/* see target signature */)
{
    // Tail-call to extend_sign via GOT/IAT indirection
    return extend_sign(/* forwarded args */);
}

