// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_13238
//
// Resolved target: update_func
// Target address:  0x135C0
// GOT/IAT slot:    0x13238
// Slot symbol:     off_13238
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

