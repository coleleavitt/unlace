// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4540
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4540 jmp     cs:off_23288
//
// Resolved target: add_func_ex
// Target address:  0x236A8
// GOT/IAT slot:    0x23288
// Slot symbol:     off_23288
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

