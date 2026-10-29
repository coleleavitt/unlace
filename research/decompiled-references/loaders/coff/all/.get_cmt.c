// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43D0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43D0 jmp     cs:off_231D0
//
// Resolved target: get_cmt
// Target address:  0x235F0
// GOT/IAT slot:    0x231D0
// Slot symbol:     off_231D0
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

