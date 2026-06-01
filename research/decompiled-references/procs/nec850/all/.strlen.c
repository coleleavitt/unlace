// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9200
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9200 jmp     cs:off_2E0E8
//
// Resolved target: strlen
// Target address:  0x2E758
// GOT/IAT slot:    0x2E0E8
// Slot symbol:     off_2E0E8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

