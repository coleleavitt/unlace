// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBB0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBB0 jmp     cs:off_B35C0
//
// Resolved target: auto_mark_range
// Target address:  0xB3D90
// GOT/IAT slot:    0xB35C0
// Slot symbol:     off_B35C0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

