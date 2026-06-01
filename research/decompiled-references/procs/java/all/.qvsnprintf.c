// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6560
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6560 jmp     cs:off_2D298
//
// Resolved target: qvsnprintf
// Target address:  0x2D798
// GOT/IAT slot:    0x2D298
// Slot symbol:     off_2D298
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

