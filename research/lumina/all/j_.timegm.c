// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1992E0
// Name:            j_.timegm
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1992E0 jmp     _timegm
//
// Resolved target: .timegm
// Target address:  0x19D00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ j_.timegm(/* see target signature */)
{
    // Tail-call to .timegm via direct jump indirection
    return .timegm(/* forwarded args */);
}

