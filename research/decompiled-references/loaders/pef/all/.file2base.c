// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_8158
//
// Resolved target: file2base
// Target address:  0x8360
// GOT/IAT slot:    0x8158
// Slot symbol:     off_8158
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

