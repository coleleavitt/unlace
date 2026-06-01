// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBD0
// Name:            .set_debug_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBD0 jmp     cs:off_B35D0
//
// Resolved target: set_debug_name
// Target address:  0xB3DA8
// GOT/IAT slot:    0xB35D0
// Slot symbol:     off_B35D0
// Target type:     <no type info>
// ============================================================

void .set_debug_name(/* see target signature */)
{
    // Tail-call to set_debug_name via GOT/IAT indirection
    return set_debug_name(/* forwarded args */);
}

