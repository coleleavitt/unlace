// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E40
// Name:            .op_based_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E40 jmp     cs:off_95708
//
// Resolved target: op_based_stroff
// Target address:  0x96158
// GOT/IAT slot:    0x95708
// Slot symbol:     off_95708
// Target type:     <no type info>
// ============================================================

void .op_based_stroff(/* see target signature */)
{
    // Tail-call to op_based_stroff via GOT/IAT indirection
    return op_based_stroff(/* forwarded args */);
}

