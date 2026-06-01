// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3570
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3570 jmp     cs:off_282A0
//
// Resolved target: qvsnprintf
// Target address:  0x28750
// GOT/IAT slot:    0x282A0
// Slot symbol:     off_282A0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

