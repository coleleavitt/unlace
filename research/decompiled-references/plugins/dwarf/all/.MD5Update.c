// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC20
// Name:            .MD5Update
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC20 jmp     cs:off_CA5F8
//
// Resolved target: MD5Update
// Target address:  0xD0F58
// GOT/IAT slot:    0xCA5F8
// Slot symbol:     off_CA5F8
// Target type:     <no type info>
// ============================================================

void .MD5Update(/* see target signature */)
{
    // Tail-call to MD5Update via GOT/IAT indirection
    return MD5Update(/* forwarded args */);
}

