// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4190
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4190 jmp     cs:off_280B0
//
// Resolved target: copy_tinfo_t
// Target address:  0x29A48
// GOT/IAT slot:    0x280B0
// Slot symbol:     off_280B0
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

