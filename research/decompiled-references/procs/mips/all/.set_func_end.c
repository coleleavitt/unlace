// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CE0
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CE0 jmp     cs:off_75658
//
// Resolved target: set_func_end
// Target address:  0x75EC0
// GOT/IAT slot:    0x75658
// Slot symbol:     off_75658
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

