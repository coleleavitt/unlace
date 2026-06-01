// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA40
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA40 jmp     cs:off_CA508
//
// Resolved target: guess_func_cc
// Target address:  0xD0E50
// GOT/IAT slot:    0xCA508
// Slot symbol:     off_CA508
// Target type:     <no type info>
// ============================================================

void .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

