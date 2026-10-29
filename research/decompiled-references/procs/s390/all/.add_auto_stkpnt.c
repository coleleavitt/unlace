// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x101C0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x101C0 jmp     cs:off_2E0C8
//
// Resolved target: add_auto_stkpnt
// Target address:  0x36D40
// GOT/IAT slot:    0x2E0C8
// Slot symbol:     off_2E0C8
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

