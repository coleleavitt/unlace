// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A60
// Name:            .is_align_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A60 jmp     cs:off_2F518
//
// Resolved target: is_align_insn
// Target address:  0x2FBB0
// GOT/IAT slot:    0x2F518
// Slot symbol:     off_2F518
// Target type:     <no type info>
// ============================================================

void .is_align_insn(/* see target signature */)
{
    // Tail-call to is_align_insn via GOT/IAT indirection
    return is_align_insn(/* forwarded args */);
}

