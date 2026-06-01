// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0D0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0D0 jmp     cs:off_B3050
//
// Resolved target: vloader_failure
// Target address:  0xB37C0
// GOT/IAT slot:    0xB3050
// Slot symbol:     off_B3050
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

