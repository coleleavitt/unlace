// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_15130
//
// Resolved target: file2base
// Target address:  0x15330
// GOT/IAT slot:    0x15130
// Slot symbol:     off_15130
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

