// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .plan_to_apply_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_8128
//
// Resolved target: plan_to_apply_idasgn
// Target address:  0x8308
// GOT/IAT slot:    0x8128
// Slot symbol:     off_8128
// Target type:     <no type info>
// ============================================================

void .plan_to_apply_idasgn(/* see target signature */)
{
    // Tail-call to plan_to_apply_idasgn via GOT/IAT indirection
    return plan_to_apply_idasgn(/* forwarded args */);
}

