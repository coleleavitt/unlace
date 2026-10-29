// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4770
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4770 jmp     cs:off_283A0
//
// Resolved target: is_valid_cp
// Target address:  0x29D58
// GOT/IAT slot:    0x283A0
// Slot symbol:     off_283A0
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

