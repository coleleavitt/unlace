// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8700
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8700 jmp     cs:off_2A368
//
// Resolved target: is_stkvar
// Target address:  0x2BD88
// GOT/IAT slot:    0x2A368
// Slot symbol:     off_2A368
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

