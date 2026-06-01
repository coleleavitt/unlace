// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4730
// Name:            .Z3_model_inc_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4730 jmp     cs:off_4E380
//
// Resolved target: Z3_model_inc_ref
// Target address:  0x4F990
// GOT/IAT slot:    0x4E380
// Slot symbol:     off_4E380
// Target type:     <no type info>
// ============================================================

void .Z3_model_inc_ref(/* see target signature */)
{
    // Tail-call to Z3_model_inc_ref via GOT/IAT indirection
    return Z3_model_inc_ref(/* forwarded args */);
}

