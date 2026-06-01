// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3300
// Name:            .idcv_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3300 jmp     cs:off_13168
//
// Resolved target: idcv_string
// Target address:  0x134E8
// GOT/IAT slot:    0x13168
// Slot symbol:     off_13168
// Target type:     <no type info>
// ============================================================

void .idcv_string(/* see target signature */)
{
    // Tail-call to idcv_string via GOT/IAT indirection
    return idcv_string(/* forwarded args */);
}

