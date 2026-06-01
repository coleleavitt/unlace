// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67A0
// Name:            .is_func_locked
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67A0 jmp     cs:off_2F3B8
//
// Resolved target: is_func_locked
// Target address:  0x2FA30
// GOT/IAT slot:    0x2F3B8
// Slot symbol:     off_2F3B8
// Target type:     <no type info>
// ============================================================

void .is_func_locked(/* see target signature */)
{
    // Tail-call to is_func_locked via GOT/IAT indirection
    return is_func_locked(/* forwarded args */);
}

