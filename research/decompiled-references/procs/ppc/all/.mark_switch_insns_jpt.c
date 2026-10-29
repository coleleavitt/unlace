// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C10
// Name:            .mark_switch_insns_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C10 jmp     cs:off_955F0
//
// Resolved target: mark_switch_insns_jpt
// Target address:  0x96038
// GOT/IAT slot:    0x955F0
// Slot symbol:     off_955F0
// Target type:     <no type info>
// ============================================================

void .mark_switch_insns_jpt(/* see target signature */)
{
    // Tail-call to mark_switch_insns_jpt via GOT/IAT indirection
    return mark_switch_insns_jpt(/* forwarded args */);
}

