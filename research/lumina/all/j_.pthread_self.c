// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199BA0
// Name:            j_.pthread_self
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x199BA0 jmp     _pthread_self
//
// Resolved target: .pthread_self
// Target address:  0x19680
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ j_.pthread_self(/* see target signature */)
{
    // Tail-call to .pthread_self via direct jump indirection
    return .pthread_self(/* forwarded args */);
}

