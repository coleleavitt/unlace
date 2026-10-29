// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x206F0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x206F0 jmp     cs:off_95360
//
// Resolved target: add_auto_stkpnt
// Target address:  0x95D98
// GOT/IAT slot:    0x95360
// Slot symbol:     off_95360
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

