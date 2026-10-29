// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A90
// Name:            .mark_switch_insns_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A90 jmp     cs:off_75530
//
// Resolved target: mark_switch_insns_jpt
// Target address:  0x75D90
// GOT/IAT slot:    0x75530
// Slot symbol:     off_75530
// Target type:     <no type info>
// ============================================================

void .mark_switch_insns_jpt(/* see target signature */)
{
    // Tail-call to mark_switch_insns_jpt via GOT/IAT indirection
    return mark_switch_insns_jpt(/* forwarded args */);
}

