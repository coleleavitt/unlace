// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66A0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66A0 jmp     cs:off_2F338
//
// Resolved target: add_func_ex
// Target address:  0x2F9A8
// GOT/IAT slot:    0x2F338
// Slot symbol:     off_2F338
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

