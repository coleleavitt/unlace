// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_8048
//
// Resolved target: trim
// Target address:  0x82A8
// GOT/IAT slot:    0x8048
// Slot symbol:     off_8048
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

