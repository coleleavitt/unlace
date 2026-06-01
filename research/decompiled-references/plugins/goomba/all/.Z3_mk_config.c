// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4700
// Name:            .Z3_mk_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4700 jmp     cs:off_4E368
//
// Resolved target: Z3_mk_config
// Target address:  0x4F978
// GOT/IAT slot:    0x4E368
// Slot symbol:     off_4E368
// Target type:     <no type info>
// ============================================================

void .Z3_mk_config(/* see target signature */)
{
    // Tail-call to Z3_mk_config via GOT/IAT indirection
    return Z3_mk_config(/* forwarded args */);
}

