// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197A0
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197A0 jmp     cs:off_753B8
//
// Resolved target: set_switch_info
// Target address:  0x75C08
// GOT/IAT slot:    0x753B8
// Slot symbol:     off_753B8
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

