// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91B0
// Name:            .run_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91B0 jmp     cs:off_890C0
//
// Resolved target: run_plugin
// Target address:  0x8C3C0
// GOT/IAT slot:    0x890C0
// Slot symbol:     off_890C0
// Target type:     <no type info>
// ============================================================

void .run_plugin(/* see target signature */)
{
    // Tail-call to run_plugin via GOT/IAT indirection
    return run_plugin(/* forwarded args */);
}

