// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA880
// Name:            .MD5Final
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA880 jmp     cs:off_CA428
//
// Resolved target: MD5Final
// Target address:  0xD0D60
// GOT/IAT slot:    0xCA428
// Slot symbol:     off_CA428
// Target type:     <no type info>
// ============================================================

void .MD5Final(/* see target signature */)
{
    // Tail-call to MD5Final via GOT/IAT indirection
    return MD5Final(/* forwarded args */);
}

