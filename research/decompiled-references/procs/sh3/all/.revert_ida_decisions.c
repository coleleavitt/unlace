// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5310
// Name:            .revert_ida_decisions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5310 jmp     cs:off_15170
//
// Resolved target: revert_ida_decisions
// Target address:  0x16200
// GOT/IAT slot:    0x15170
// Slot symbol:     off_15170
// Target type:     <no type info>
// ============================================================

void .revert_ida_decisions(/* see target signature */)
{
    // Tail-call to revert_ida_decisions via GOT/IAT indirection
    return revert_ida_decisions(/* forwarded args */);
}

