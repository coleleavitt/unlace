// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19030
// Name:            .same_value_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19030 jmp     cs:off_75000
//
// Resolved target: same_value_jpt
// Target address:  0x75850
// GOT/IAT slot:    0x75000
// Slot symbol:     off_75000
// Target type:     <no type info>
// ============================================================

void .same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt via GOT/IAT indirection
    return same_value_jpt(/* forwarded args */);
}

