// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1210
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1210 jmp     cs:off_50F0
//
// Resolved target: file2base
// Target address:  0x5230
// GOT/IAT slot:    0x50F0
// Slot symbol:     off_50F0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

