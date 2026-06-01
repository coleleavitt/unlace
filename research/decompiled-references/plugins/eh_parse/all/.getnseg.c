// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68F0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68F0 jmp     cs:off_2F460
//
// Resolved target: getnseg
// Target address:  0x2FAE8
// GOT/IAT slot:    0x2F460
// Slot symbol:     off_2F460
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

