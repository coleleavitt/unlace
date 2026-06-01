// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7290
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7290 jmp     cs:off_19130
//
// Resolved target: op_offset
// Target address:  0x19660
// GOT/IAT slot:    0x19130
// Slot symbol:     off_19130
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

