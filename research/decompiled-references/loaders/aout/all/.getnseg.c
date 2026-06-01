// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1250
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1250 jmp     cs:off_6110
//
// Resolved target: getnseg
// Target address:  0x62A8
// GOT/IAT slot:    0x6110
// Slot symbol:     off_6110
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

