// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7490
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7490 jmp     cs:off_19230
//
// Resolved target: is_numop
// Target address:  0x19760
// GOT/IAT slot:    0x19230
// Slot symbol:     off_19230
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

