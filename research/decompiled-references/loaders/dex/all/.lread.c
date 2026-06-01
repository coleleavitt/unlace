// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3520
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3520 jmp     cs:off_28278
//
// Resolved target: lread
// Target address:  0x28728
// GOT/IAT slot:    0x28278
// Slot symbol:     off_28278
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

