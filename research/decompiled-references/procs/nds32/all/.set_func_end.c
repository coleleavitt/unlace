// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87C0
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87C0 jmp     cs:off_2A3C8
//
// Resolved target: set_func_end
// Target address:  0x2A950
// GOT/IAT slot:    0x2A3C8
// Slot symbol:     off_2A3C8
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

