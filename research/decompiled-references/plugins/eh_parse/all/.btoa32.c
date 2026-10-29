// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6660
// Name:            .btoa32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6660 jmp     cs:off_2F318
//
// Resolved target: btoa32
// Target address:  0x2F988
// GOT/IAT slot:    0x2F318
// Slot symbol:     off_2F318
// Target type:     <no type info>
// ============================================================

void .btoa32(/* see target signature */)
{
    // Tail-call to btoa32 via GOT/IAT indirection
    return btoa32(/* forwarded args */);
}

