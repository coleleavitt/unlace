// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_A130
//
// Resolved target: qrealloc
// Target address:  0xA3E0
// GOT/IAT slot:    0xA130
// Slot symbol:     off_A130
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

