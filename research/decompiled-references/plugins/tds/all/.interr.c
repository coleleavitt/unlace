// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_A068
//
// Resolved target: interr
// Target address:  0xA298
// GOT/IAT slot:    0xA068
// Slot symbol:     off_A068
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

