// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A30
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A30 jmp     cs:off_75500
//
// Resolved target: get_switch_info
// Target address:  0x75D58
// GOT/IAT slot:    0x75500
// Slot symbol:     off_75500
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

