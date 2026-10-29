// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA310
// Name:            .MD5Init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA310 jmp     cs:off_CA170
//
// Resolved target: MD5Init
// Target address:  0xD0AA0
// GOT/IAT slot:    0xCA170
// Slot symbol:     off_CA170
// Target type:     <no type info>
// ============================================================

void .MD5Init(/* see target signature */)
{
    // Tail-call to MD5Init via GOT/IAT indirection
    return MD5Init(/* forwarded args */);
}

