// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_B0B8
//
// Resolved target: set_cmt
// Target address:  0xB350
// GOT/IAT slot:    0xB0B8
// Slot symbol:     off_B0B8
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

