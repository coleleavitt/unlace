// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AA0
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AA0 jmp     cs:off_75538
//
// Resolved target: is_stkvar
// Target address:  0x75D98
// GOT/IAT slot:    0x75538
// Slot symbol:     off_75538
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

