// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4510
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4510 jmp     cs:off_23270
//
// Resolved target: lread
// Target address:  0x23690
// GOT/IAT slot:    0x23270
// Slot symbol:     off_23270
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

