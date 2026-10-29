// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C80
// Name:            .op_based_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C80 jmp     cs:off_75628
//
// Resolved target: op_based_stroff
// Target address:  0x75E90
// GOT/IAT slot:    0x75628
// Slot symbol:     off_75628
// Target type:     <no type info>
// ============================================================

void .op_based_stroff(/* see target signature */)
{
    // Tail-call to op_based_stroff via GOT/IAT indirection
    return op_based_stroff(/* forwarded args */);
}

