// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19640
// Name:            .ptrace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19640 jmp     cs:off_23E308
//
// Resolved target: ptrace
// Target address:  0x243E88
// GOT/IAT slot:    0x23E308
// Slot symbol:     off_23E308
// Target type:     __int64(enum __ptrace_request request, ...)
// ============================================================

/* see target sig */ .ptrace(/* see target signature */)
{
    // Tail-call to ptrace via GOT/IAT indirection
    return ptrace(/* forwarded args */);
}

