// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48C0
// Name:            .Z3_mk_lt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48C0 jmp     cs:off_4E448
//
// Resolved target: Z3_mk_lt
// Target address:  0x4FA70
// GOT/IAT slot:    0x4E448
// Slot symbol:     off_4E448
// Target type:     <no type info>
// ============================================================

void .Z3_mk_lt(/* see target signature */)
{
    // Tail-call to Z3_mk_lt via GOT/IAT indirection
    return Z3_mk_lt(/* forwarded args */);
}

