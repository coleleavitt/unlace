// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4B0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4B0 jmp     cs:off_35240
//
// Resolved target: add_auto_stkpnt
// Target address:  0x35890
// GOT/IAT slot:    0x35240
// Slot symbol:     off_35240
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

