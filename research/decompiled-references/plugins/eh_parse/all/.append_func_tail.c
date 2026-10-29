// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6040
// Name:            .append_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6040 jmp     cs:off_2F008
//
// Resolved target: append_func_tail
// Target address:  0x2F678
// GOT/IAT slot:    0x2F008
// Slot symbol:     off_2F008
// Target type:     <no type info>
// ============================================================

void .append_func_tail(/* see target signature */)
{
    // Tail-call to append_func_tail via GOT/IAT indirection
    return append_func_tail(/* forwarded args */);
}

