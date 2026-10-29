// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5D0
// Name:            .append_snprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5D0 jmp     cs:off_352D0
//
// Resolved target: append_snprintf
// Target address:  0x35920
// GOT/IAT slot:    0x352D0
// Slot symbol:     off_352D0
// Target type:     <no type info>
// ============================================================

void .append_snprintf(/* see target signature */)
{
    // Tail-call to append_snprintf via GOT/IAT indirection
    return append_snprintf(/* forwarded args */);
}

