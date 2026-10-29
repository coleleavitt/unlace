// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61A0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61A0 jmp     cs:off_2F0B8
//
// Resolved target: copy_tinfo_t
// Target address:  0x2F728
// GOT/IAT slot:    0x2F0B8
// Slot symbol:     off_2F0B8
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

