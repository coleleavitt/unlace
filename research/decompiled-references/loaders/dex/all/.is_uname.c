// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_28008
//
// Resolved target: is_uname
// Target address:  0x284B8
// GOT/IAT slot:    0x28008
// Slot symbol:     off_28008
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

