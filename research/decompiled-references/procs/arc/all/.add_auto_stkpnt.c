// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83F0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83F0 jmp     cs:off_2A1E0
//
// Resolved target: add_auto_stkpnt
// Target address:  0x2BBF0
// GOT/IAT slot:    0x2A1E0
// Slot symbol:     off_2A1E0
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

