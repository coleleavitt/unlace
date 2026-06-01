// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA630
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA630 jmp     cs:off_35300
//
// Resolved target: lock_func_range
// Target address:  0x35950
// GOT/IAT slot:    0x35300
// Slot symbol:     off_35300
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

