// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_15050
//
// Resolved target: set_cmt
// Target address:  0x15240
// GOT/IAT slot:    0x15050
// Slot symbol:     off_15050
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

