// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20AB0
// Name:            .get_spoiled_reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20AB0 jmp     cs:off_95540
//
// Resolved target: get_spoiled_reg
// Target address:  0x95F78
// GOT/IAT slot:    0x95540
// Slot symbol:     off_95540
// Target type:     <no type info>
// ============================================================

void .get_spoiled_reg(/* see target signature */)
{
    // Tail-call to get_spoiled_reg via GOT/IAT indirection
    return get_spoiled_reg(/* forwarded args */);
}

