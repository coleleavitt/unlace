// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90E0
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90E0 jmp     cs:off_89058
//
// Resolved target: get_strlit_contents
// Target address:  0x8C358
// GOT/IAT slot:    0x89058
// Slot symbol:     off_89058
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

