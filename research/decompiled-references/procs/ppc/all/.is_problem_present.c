// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E20
// Name:            .is_problem_present
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E20 jmp     cs:off_956F8
//
// Resolved target: is_problem_present
// Target address:  0x96148
// GOT/IAT slot:    0x956F8
// Slot symbol:     off_956F8
// Target type:     <no type info>
// ============================================================

void .is_problem_present(/* see target signature */)
{
    // Tail-call to is_problem_present via GOT/IAT indirection
    return is_problem_present(/* forwarded args */);
}

