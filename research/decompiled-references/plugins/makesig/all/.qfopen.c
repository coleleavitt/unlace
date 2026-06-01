// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34E0
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34E0 jmp     cs:off_20258
//
// Resolved target: qfopen
// Target address:  0x21B88
// GOT/IAT slot:    0x20258
// Slot symbol:     off_20258
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

