// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7050
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7050 jmp     cs:off_19010
//
// Resolved target: op_stkvar
// Target address:  0x19540
// GOT/IAT slot:    0x19010
// Slot symbol:     off_19010
// Target type:     <no type info>
// ============================================================

void .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

