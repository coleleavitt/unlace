// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19F10
// Name:            .getpwuid_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19F10 jmp     cs:off_23E770
//
// Resolved target: getpwuid_r
// Target address:  0x244358
// GOT/IAT slot:    0x23E770
// Slot symbol:     off_23E770
// Target type:     int(__uid_t uid, struct passwd *resultbuf, char *buffer, size_t buflen, struct passwd **result)
// ============================================================

/* see target sig */ .getpwuid_r(/* see target signature */)
{
    // Tail-call to getpwuid_r via GOT/IAT indirection
    return getpwuid_r(/* forwarded args */);
}

