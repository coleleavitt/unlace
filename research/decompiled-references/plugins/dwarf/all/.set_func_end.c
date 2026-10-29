// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACE0
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACE0 jmp     cs:off_CA658
//
// Resolved target: set_func_end
// Target address:  0xD0FB8
// GOT/IAT slot:    0xCA658
// Slot symbol:     off_CA658
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

