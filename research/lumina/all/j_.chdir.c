// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197780
// Name:            j_.chdir
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x197780 jmp     _chdir
//
// Resolved target: .chdir
// Target address:  0x19B20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int(const char *path)
// ============================================================

/* see target sig */ j_.chdir(/* see target signature */)
{
    // Tail-call to .chdir via direct jump indirection
    return .chdir(/* forwarded args */);
}

