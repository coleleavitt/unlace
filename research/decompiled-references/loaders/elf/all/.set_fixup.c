// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9510
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9510 jmp     cs:off_89270
//
// Resolved target: set_fixup
// Target address:  0x8C578
// GOT/IAT slot:    0x89270
// Slot symbol:     off_89270
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

