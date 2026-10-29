// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_13138
//
// Resolved target: str2reg
// Target address:  0x133D8
// GOT/IAT slot:    0x13138
// Slot symbol:     off_13138
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

