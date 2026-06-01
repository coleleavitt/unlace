// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44B0
// Name:            .reload_file_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44B0 jmp     cs:off_1F240
//
// Resolved target: reload_file_ex
// Target address:  0x1F518
// GOT/IAT slot:    0x1F240
// Slot symbol:     off_1F240
// Target type:     <no type info>
// ============================================================

void .reload_file_ex(/* see target signature */)
{
    // Tail-call to reload_file_ex via GOT/IAT indirection
    return reload_file_ex(/* forwarded args */);
}

