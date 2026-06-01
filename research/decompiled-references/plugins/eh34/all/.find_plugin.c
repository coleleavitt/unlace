// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62F0
// Name:            .find_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62F0 jmp     cs:off_8D160
//
// Resolved target: find_plugin
// Target address:  0x8D6F8
// GOT/IAT slot:    0x8D160
// Slot symbol:     off_8D160
// Target type:     <no type info>
// ============================================================

void .find_plugin(/* see target signature */)
{
    // Tail-call to find_plugin via GOT/IAT indirection
    return find_plugin(/* forwarded args */);
}

