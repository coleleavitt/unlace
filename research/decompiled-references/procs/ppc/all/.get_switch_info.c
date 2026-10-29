// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BB0
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BB0 jmp     cs:off_955C0
//
// Resolved target: get_switch_info
// Target address:  0x96000
// GOT/IAT slot:    0x955C0
// Slot symbol:     off_955C0
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

