// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20690
// Name:            .revert_ida_decisions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20690 jmp     cs:off_95330
//
// Resolved target: revert_ida_decisions
// Target address:  0x95D68
// GOT/IAT slot:    0x95330
// Slot symbol:     off_95330
// Target type:     <no type info>
// ============================================================

void .revert_ida_decisions(/* see target signature */)
{
    // Tail-call to revert_ida_decisions via GOT/IAT indirection
    return revert_ida_decisions(/* forwarded args */);
}

