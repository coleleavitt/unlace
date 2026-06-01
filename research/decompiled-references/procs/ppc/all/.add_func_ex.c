// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A70
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A70 jmp     cs:off_95520
//
// Resolved target: add_func_ex
// Target address:  0x95F58
// GOT/IAT slot:    0x95520
// Slot symbol:     off_95520
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

