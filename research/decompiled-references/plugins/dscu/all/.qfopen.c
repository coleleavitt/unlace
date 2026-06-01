// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4380
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4380 jmp     cs:off_1F1A8
//
// Resolved target: qfopen
// Target address:  0x1F468
// GOT/IAT slot:    0x1F1A8
// Slot symbol:     off_1F1A8
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

