// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99A0
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99A0 jmp     cs:off_2E4B8
//
// Resolved target: bitcount
// Target address:  0x2EB40
// GOT/IAT slot:    0x2E4B8
// Slot symbol:     off_2E4B8
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

