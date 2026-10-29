// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49D0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x49D0 jmp     cs:off_4E4D0
//
// Resolved target: qstrerror
// Target address:  0x4FB08
// GOT/IAT slot:    0x4E4D0
// Slot symbol:     off_4E4D0
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

