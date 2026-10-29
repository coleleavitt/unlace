// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9540
// Name:            .is_debugger_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9540 jmp     cs:off_89288
//
// Resolved target: is_debugger_on
// Target address:  0x8C590
// GOT/IAT slot:    0x89288
// Slot symbol:     off_89288
// Target type:     <no type info>
// ============================================================

void .is_debugger_on(/* see target signature */)
{
    // Tail-call to is_debugger_on via GOT/IAT indirection
    return is_debugger_on(/* forwarded args */);
}

