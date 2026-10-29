// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9580
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9580 jmp     cs:off_2E2A8
//
// Resolved target: set_switch_info
// Target address:  0x2E918
// GOT/IAT slot:    0x2E2A8
// Slot symbol:     off_2E2A8
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

