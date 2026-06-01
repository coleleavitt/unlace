// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6470
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6470 jmp     cs:off_2F220
//
// Resolved target: op_offset_ex
// Target address:  0x2F890
// GOT/IAT slot:    0x2F220
// Slot symbol:     off_2F220
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

