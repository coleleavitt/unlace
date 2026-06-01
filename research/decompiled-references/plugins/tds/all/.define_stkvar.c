// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .define_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_A010
//
// Resolved target: define_stkvar
// Target address:  0xA240
// GOT/IAT slot:    0xA010
// Slot symbol:     off_A010
// Target type:     <no type info>
// ============================================================

void .define_stkvar(/* see target signature */)
{
    // Tail-call to define_stkvar via GOT/IAT indirection
    return define_stkvar(/* forwarded args */);
}

