// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_1A128
//
// Resolved target: is_loaded
// Target address:  0x1A3E0
// GOT/IAT slot:    0x1A128
// Slot symbol:     off_1A128
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

