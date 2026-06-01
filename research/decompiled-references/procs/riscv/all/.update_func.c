// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA740
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA740 jmp     cs:off_35388
//
// Resolved target: update_func
// Target address:  0x359E0
// GOT/IAT slot:    0x35388
// Slot symbol:     off_35388
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

