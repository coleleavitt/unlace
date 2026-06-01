// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3450
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3450 jmp     cs:off_14210
//
// Resolved target: is_loaded
// Target address:  0x14808
// GOT/IAT slot:    0x14210
// Slot symbol:     off_14210
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

