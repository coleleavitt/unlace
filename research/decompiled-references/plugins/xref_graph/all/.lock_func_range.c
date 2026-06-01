// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16230
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16230 jmp     cs:off_4F100
//
// Resolved target: lock_func_range
// Target address:  0x4FF98
// GOT/IAT slot:    0x4F100
// Slot symbol:     off_4F100
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

