// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7600
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7600 jmp     cs:off_192E8
//
// Resolved target: auto_apply_type
// Target address:  0x19828
// GOT/IAT slot:    0x192E8
// Slot symbol:     off_192E8
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

