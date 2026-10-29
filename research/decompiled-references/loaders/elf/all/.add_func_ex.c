// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9700
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9700 jmp     cs:off_89368
//
// Resolved target: add_func_ex
// Target address:  0x8C670
// GOT/IAT slot:    0x89368
// Slot symbol:     off_89368
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

