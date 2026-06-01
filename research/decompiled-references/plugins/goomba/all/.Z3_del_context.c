// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4740
// Name:            .Z3_del_context
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4740 jmp     cs:off_4E388
//
// Resolved target: Z3_del_context
// Target address:  0x4F998
// GOT/IAT slot:    0x4E388
// Slot symbol:     off_4E388
// Target type:     <no type info>
// ============================================================

void .Z3_del_context(/* see target signature */)
{
    // Tail-call to Z3_del_context via GOT/IAT indirection
    return Z3_del_context(/* forwarded args */);
}

