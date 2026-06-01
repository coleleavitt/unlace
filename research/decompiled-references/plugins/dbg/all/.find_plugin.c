// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .find_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_13130
//
// Resolved target: find_plugin
// Target address:  0x134B0
// GOT/IAT slot:    0x13130
// Slot symbol:     off_13130
// Target type:     <no type info>
// ============================================================

void .find_plugin(/* see target signature */)
{
    // Tail-call to find_plugin via GOT/IAT indirection
    return find_plugin(/* forwarded args */);
}

