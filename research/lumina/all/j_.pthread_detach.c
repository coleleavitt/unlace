// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199BD0
// Name:            j_.pthread_detach
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x199BD0 jmp     _pthread_detach
//
// Resolved target: .pthread_detach
// Target address:  0x19760
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int(pthread_t th)
// ============================================================

/* see target sig */ j_.pthread_detach(/* see target signature */)
{
    // Tail-call to .pthread_detach via direct jump indirection
    return .pthread_detach(/* forwarded args */);
}

