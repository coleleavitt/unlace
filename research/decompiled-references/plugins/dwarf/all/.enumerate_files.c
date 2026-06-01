// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1C0
// Name:            .enumerate_files
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1C0 jmp     cs:off_CA0C8
//
// Resolved target: enumerate_files
// Target address:  0xD09F8
// GOT/IAT slot:    0xCA0C8
// Slot symbol:     off_CA0C8
// Target type:     <no type info>
// ============================================================

void .enumerate_files(/* see target signature */)
{
    // Tail-call to enumerate_files via GOT/IAT indirection
    return enumerate_files(/* forwarded args */);
}

