// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3540
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3540 jmp     cs:off_28288
//
// Resolved target: is_loaded
// Target address:  0x28738
// GOT/IAT slot:    0x28288
// Slot symbol:     off_28288
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

