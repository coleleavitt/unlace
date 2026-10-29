// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9800
// Name:            .find_sp_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9800 jmp     cs:off_2E3E8
//
// Resolved target: find_sp_value
// Target address:  0x2EA68
// GOT/IAT slot:    0x2E3E8
// Slot symbol:     off_2E3E8
// Target type:     <no type info>
// ============================================================

void .find_sp_value(/* see target signature */)
{
    // Tail-call to find_sp_value via GOT/IAT indirection
    return find_sp_value(/* forwarded args */);
}

