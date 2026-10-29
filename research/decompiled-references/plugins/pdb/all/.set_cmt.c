// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D410
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D410 jmp     cs:off_B31F0
//
// Resolved target: set_cmt
// Target address:  0xB3988
// GOT/IAT slot:    0xB31F0
// Slot symbol:     off_B31F0
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

