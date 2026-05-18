// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19610
// Name:            .scandir64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19610 jmp     cs:off_23E2F0
//
// Resolved target: scandir64
// Target address:  0x243E70
// GOT/IAT slot:    0x23E2F0
// Slot symbol:     off_23E2F0
// Target type:     int(const char *dir, struct dirent64 ***namelist, int (*selector)(const struct dirent64 *), int (*cmp)(const struct dirent64 **, const struct dirent64 **))
// ============================================================

/* see target sig */ .scandir64(/* see target signature */)
{
    // Tail-call to scandir64 via GOT/IAT indirection
    return scandir64(/* forwarded args */);
}

