// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4440
// Name:            .Z3_mk_bvuge
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4440 jmp     cs:off_4E208
//
// Resolved target: Z3_mk_bvuge
// Target address:  0x4F818
// GOT/IAT slot:    0x4E208
// Slot symbol:     off_4E208
// Target type:     <no type info>
// ============================================================

void .Z3_mk_bvuge(/* see target signature */)
{
    // Tail-call to Z3_mk_bvuge via GOT/IAT indirection
    return Z3_mk_bvuge(/* forwarded args */);
}

