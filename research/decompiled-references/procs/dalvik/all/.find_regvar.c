// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5450
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5450 jmp     cs:off_1A210
//
// Resolved target: find_regvar
// Target address:  0x1A5A8
// GOT/IAT slot:    0x1A210
// Slot symbol:     off_1A210
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}

