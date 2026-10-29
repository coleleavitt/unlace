// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9090
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9090 jmp     cs:off_89030
//
// Resolved target: is_uname
// Target address:  0x8C330
// GOT/IAT slot:    0x89030
// Slot symbol:     off_89030
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

