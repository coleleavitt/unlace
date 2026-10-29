// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x69E0
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x69E0 jmp     cs:off_2F4D8
//
// Resolved target: set_func_end
// Target address:  0x2FB68
// GOT/IAT slot:    0x2F4D8
// Slot symbol:     off_2F4D8
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

