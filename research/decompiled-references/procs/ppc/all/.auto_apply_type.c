// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C50
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C50 jmp     cs:off_95610
//
// Resolved target: auto_apply_type
// Target address:  0x96058
// GOT/IAT slot:    0x95610
// Slot symbol:     off_95610
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

