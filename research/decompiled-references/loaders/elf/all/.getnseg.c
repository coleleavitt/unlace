// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9910
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9910 jmp     cs:off_89470
//
// Resolved target: getnseg
// Target address:  0x8C798
// GOT/IAT slot:    0x89470
// Slot symbol:     off_89470
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

