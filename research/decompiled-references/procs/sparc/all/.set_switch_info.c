// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7470
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7470 jmp     cs:off_19220
//
// Resolved target: set_switch_info
// Target address:  0x19750
// GOT/IAT slot:    0x19220
// Slot symbol:     off_19220
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

