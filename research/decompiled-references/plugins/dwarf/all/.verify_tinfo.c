// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA800
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA800 jmp     cs:off_CA3E8
//
// Resolved target: verify_tinfo
// Target address:  0xD0D20
// GOT/IAT slot:    0xCA3E8
// Slot symbol:     off_CA3E8
// Target type:     <no type info>
// ============================================================

void .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}

