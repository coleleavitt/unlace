// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2420
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2420 jmp     cs:off_B1F8
//
// Resolved target: file2base
// Target address:  0xB4A8
// GOT/IAT slot:    0xB1F8
// Slot symbol:     off_B1F8
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

