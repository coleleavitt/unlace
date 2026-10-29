// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8620
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8620 jmp     cs:off_2A2F8
//
// Resolved target: is_stkvar
// Target address:  0x2A878
// GOT/IAT slot:    0x2A2F8
// Slot symbol:     off_2A2F8
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

