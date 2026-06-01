// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1B0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1B0 jmp     cs:off_350C0
//
// Resolved target: copy_tinfo_t
// Target address:  0x35710
// GOT/IAT slot:    0x350C0
// Slot symbol:     off_350C0
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

