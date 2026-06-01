// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45F0
// Name:            .Z3_mk_bvashr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45F0 jmp     cs:off_4E2E0
//
// Resolved target: Z3_mk_bvashr
// Target address:  0x4F8F0
// GOT/IAT slot:    0x4E2E0
// Slot symbol:     off_4E2E0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvashr(/* see target signature */)
{
    // Tail-call to Z3_mk_bvashr via GOT/IAT indirection
    return Z3_mk_bvashr(/* forwarded args */);
}

