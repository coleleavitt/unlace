// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43C0
// Name:            .Z3_inc_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43C0 jmp     cs:off_4E1C8
//
// Resolved target: Z3_inc_ref
// Target address:  0x4F7D8
// GOT/IAT slot:    0x4E1C8
// Slot symbol:     off_4E1C8
// Target type:     <no type info>
// ============================================================

void .Z3_inc_ref(/* see target signature */)
{
    // Tail-call to Z3_inc_ref via GOT/IAT indirection
    return Z3_inc_ref(/* forwarded args */);
}

