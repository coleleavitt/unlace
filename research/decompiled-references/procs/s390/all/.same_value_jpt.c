// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10030
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10030 jmp     cs:off_2E000
//
// Resolved target: same_value_jpt
// Target address:  0x36C78
// GOT/IAT slot:    0x2E000
// Slot symbol:     off_2E000
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

