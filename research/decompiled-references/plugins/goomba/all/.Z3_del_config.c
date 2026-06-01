// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4180
// Name:            .Z3_del_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4180 jmp     cs:off_4E0A8
//
// Resolved target: Z3_del_config
// Target address:  0x4F6B0
// GOT/IAT slot:    0x4E0A8
// Slot symbol:     off_4E0A8
// Target type:     <no type info>
// ============================================================

void .Z3_del_config(/* see target signature */)
{
    // Tail-call to Z3_del_config via GOT/IAT indirection
    return Z3_del_config(/* forwarded args */);
}

