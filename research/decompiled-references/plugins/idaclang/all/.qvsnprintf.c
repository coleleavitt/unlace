// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_291A0
//
// Resolved target: qvsnprintf
// Target address:  0x29550
// GOT/IAT slot:    0x291A0
// Slot symbol:     off_291A0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

