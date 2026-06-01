// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4790
// Name:            .is_planned_proc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4790 jmp     cs:off_233B0
//
// Resolved target: is_planned_proc
// Target address:  0x237F8
// GOT/IAT slot:    0x233B0
// Slot symbol:     off_233B0
// Target type:     <no type info>
// ============================================================

void .is_planned_proc(/* see target signature */)
{
    // Tail-call to is_planned_proc via GOT/IAT indirection
    return is_planned_proc(/* forwarded args */);
}

