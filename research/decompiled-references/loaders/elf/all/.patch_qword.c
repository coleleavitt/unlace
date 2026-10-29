// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A80
// Name:            .patch_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A80 jmp     cs:off_89528
//
// Resolved target: patch_qword
// Target address:  0x8C858
// GOT/IAT slot:    0x89528
// Slot symbol:     off_89528
// Target type:     <no type info>
// ============================================================

void .patch_qword(/* see target signature */)
{
    // Tail-call to patch_qword via GOT/IAT indirection
    return patch_qword(/* forwarded args */);
}

