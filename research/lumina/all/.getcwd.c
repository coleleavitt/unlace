// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19370
// Name:            .getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19370 jmp     cs:off_23E1A0
//
// Resolved target: getcwd
// Target address:  0x243CE8
// GOT/IAT slot:    0x23E1A0
// Slot symbol:     off_23E1A0
// Target type:     char *(char *buf, size_t size)
// ============================================================

/* see target sig */ .getcwd(/* see target signature */)
{
    // Tail-call to getcwd via GOT/IAT indirection
    return getcwd(/* forwarded args */);
}

