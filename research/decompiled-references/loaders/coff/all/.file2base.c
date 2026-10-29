// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4700
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4700 jmp     cs:off_23368
//
// Resolved target: file2base
// Target address:  0x237A8
// GOT/IAT slot:    0x23368
// Slot symbol:     off_23368
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

