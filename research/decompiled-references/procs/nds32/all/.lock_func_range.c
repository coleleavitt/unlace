// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8490
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8490 jmp     cs:off_2A230
//
// Resolved target: lock_func_range
// Target address:  0x2A7A0
// GOT/IAT slot:    0x2A230
// Slot symbol:     off_2A230
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

