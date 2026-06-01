// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1260
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1260 jmp     cs:off_5118
//
// Resolved target: file2base
// Target address:  0x52A8
// GOT/IAT slot:    0x5118
// Slot symbol:     off_5118
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

