// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D50
// Name:            .getlogin_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D50 jmp     cs:off_23E690
//
// Resolved target: getlogin_r
// Target address:  0x244260
// GOT/IAT slot:    0x23E690
// Slot symbol:     off_23E690
// Target type:     int(char *name, size_t name_len)
// ============================================================

/* see target sig */ .getlogin_r(/* see target signature */)
{
    // Tail-call to getlogin_r via GOT/IAT indirection
    return getlogin_r(/* forwarded args */);
}

