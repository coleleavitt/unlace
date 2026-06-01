// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35D0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35D0 jmp     cs:off_202D0
//
// Resolved target: qstrerror
// Target address:  0x21C08
// GOT/IAT slot:    0x202D0
// Slot symbol:     off_202D0
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

