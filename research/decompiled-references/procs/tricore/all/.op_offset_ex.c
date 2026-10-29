// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63E0
// Name:            .op_offset_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63E0 jmp     cs:off_241D8
//
// Resolved target: op_offset_ex
// Target address:  0x25FA8
// GOT/IAT slot:    0x241D8
// Slot symbol:     off_241D8
// Target type:     <no type info>
// ============================================================

void .op_offset_ex(/* see target signature */)
{
    // Tail-call to op_offset_ex via GOT/IAT indirection
    return op_offset_ex(/* forwarded args */);
}

