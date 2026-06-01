// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4320
// Name:            .find_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4320 jmp     cs:off_23178
//
// Resolved target: find_plugin
// Target address:  0x23598
// GOT/IAT slot:    0x23178
// Slot symbol:     off_23178
// Target type:     <no type info>
// ============================================================

void .find_plugin(/* see target signature */)
{
    // Tail-call to find_plugin via GOT/IAT indirection
    return find_plugin(/* forwarded args */);
}

