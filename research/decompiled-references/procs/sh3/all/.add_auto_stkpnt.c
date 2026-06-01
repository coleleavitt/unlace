// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5360
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5360 jmp     cs:off_15198
//
// Resolved target: add_auto_stkpnt
// Target address:  0x16228
// GOT/IAT slot:    0x15198
// Slot symbol:     off_15198
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

