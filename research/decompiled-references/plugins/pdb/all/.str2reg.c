// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D960
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D960 jmp     cs:off_B3498
//
// Resolved target: str2reg
// Target address:  0xB3C50
// GOT/IAT slot:    0xB3498
// Slot symbol:     off_B3498
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

