// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4560
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4560 jmp     cs:off_23298
//
// Resolved target: is_loaded
// Target address:  0x236B8
// GOT/IAT slot:    0x23298
// Slot symbol:     off_23298
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

