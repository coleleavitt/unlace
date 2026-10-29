// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3630
// Name:            .is_planned_proc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3630 jmp     cs:off_13300
//
// Resolved target: is_planned_proc
// Target address:  0x136A8
// GOT/IAT slot:    0x13300
// Slot symbol:     off_13300
// Target type:     <no type info>
// ============================================================

void .is_planned_proc(/* see target signature */)
{
    // Tail-call to is_planned_proc via GOT/IAT indirection
    return is_planned_proc(/* forwarded args */);
}

