// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6550
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6550 jmp     cs:off_8D290
//
// Resolved target: qvsnprintf
// Target address:  0x8D830
// GOT/IAT slot:    0x8D290
// Slot symbol:     off_8D290
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

