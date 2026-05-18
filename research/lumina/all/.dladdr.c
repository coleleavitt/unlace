// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19750
// Name:            .dladdr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19750 jmp     cs:off_23E390
//
// Resolved target: dladdr
// Target address:  0x243F18
// GOT/IAT slot:    0x23E390
// Slot symbol:     off_23E390
// Target type:     int(const void *address, Dl_info *info)
// ============================================================

/* see target sig */ .dladdr(/* see target signature */)
{
    // Tail-call to dladdr via GOT/IAT indirection
    return dladdr(/* forwarded args */);
}

