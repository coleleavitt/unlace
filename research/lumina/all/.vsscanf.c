// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194D0
// Name:            .vsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194D0 jmp     cs:off_23E250
//
// Resolved target: vsscanf
// Target address:  0x243DC8
// GOT/IAT slot:    0x23E250
// Slot symbol:     off_23E250
// Target type:     int(const char *s, const char *format, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .vsscanf(/* see target signature */)
{
    // Tail-call to vsscanf via GOT/IAT indirection
    return vsscanf(/* forwarded args */);
}

