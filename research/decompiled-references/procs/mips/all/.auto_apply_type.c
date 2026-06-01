// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AD0
// Name:            .auto_apply_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AD0 jmp     cs:off_75550
//
// Resolved target: auto_apply_type
// Target address:  0x75DB0
// GOT/IAT slot:    0x75550
// Slot symbol:     off_75550
// Target type:     <no type info>
// ============================================================

void .auto_apply_type(/* see target signature */)
{
    // Tail-call to auto_apply_type via GOT/IAT indirection
    return auto_apply_type(/* forwarded args */);
}

