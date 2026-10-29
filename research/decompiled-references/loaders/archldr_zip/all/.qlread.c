// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_80C8
//
// Resolved target: qlread
// Target address:  0x8298
// GOT/IAT slot:    0x80C8
// Slot symbol:     off_80C8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

