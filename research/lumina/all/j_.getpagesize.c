// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xC77E0
// Name:            j_.getpagesize
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xC77E0 jmp     _getpagesize
//
// Resolved target: .getpagesize
// Target address:  0x19DD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int(void)
// ============================================================

/* see target sig */ j_.getpagesize(/* see target signature */)
{
    // Tail-call to .getpagesize via direct jump indirection
    return .getpagesize(/* forwarded args */);
}

