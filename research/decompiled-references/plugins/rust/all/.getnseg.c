// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_A180
//
// Resolved target: getnseg
// Target address:  0xB468
// GOT/IAT slot:    0xA180
// Slot symbol:     off_A180
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

