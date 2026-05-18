// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DA0
// Name:            .setgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DA0 jmp     cs:off_23E6B8
//
// Resolved target: setgid
// Target address:  0x244288
// GOT/IAT slot:    0x23E6B8
// Slot symbol:     off_23E6B8
// Target type:     int(__gid_t gid)
// ============================================================

/* see target sig */ .setgid(/* see target signature */)
{
    // Tail-call to setgid via GOT/IAT indirection
    return setgid(/* forwarded args */);
}

