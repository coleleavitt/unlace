// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7F0
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7F0 jmp     cs:off_353E0
//
// Resolved target: is_stkvar
// Target address:  0x35A40
// GOT/IAT slot:    0x353E0
// Slot symbol:     off_353E0
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

