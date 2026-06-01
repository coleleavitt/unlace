// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .plan_to_apply_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: plan_to_apply_idasgn
// Target address:  0x51C0
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     <no type info>
// ============================================================

void .plan_to_apply_idasgn(/* see target signature */)
{
    // Tail-call to plan_to_apply_idasgn via GOT/IAT indirection
    return plan_to_apply_idasgn(/* forwarded args */);
}

