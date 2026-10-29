// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA200
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA200 jmp     cs:off_350E8
//
// Resolved target: interr
// Target address:  0x35738
// GOT/IAT slot:    0x350E8
// Slot symbol:     off_350E8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

