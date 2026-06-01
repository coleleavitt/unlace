// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6160
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6160 jmp     cs:off_24098
//
// Resolved target: getinf
// Target address:  0x25E68
// GOT/IAT slot:    0x24098
// Slot symbol:     off_24098
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

