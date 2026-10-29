// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x74A0
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x74A0 jmp     cs:off_19238
//
// Resolved target: lock_func_range
// Target address:  0x19768
// GOT/IAT slot:    0x19238
// Slot symbol:     off_19238
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

