// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3E0
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3E0 jmp     cs:off_351D8
//
// Resolved target: btoa64
// Target address:  0x35828
// GOT/IAT slot:    0x351D8
// Slot symbol:     off_351D8
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

