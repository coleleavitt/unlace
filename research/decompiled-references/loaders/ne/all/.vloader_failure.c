// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_B028
//
// Resolved target: vloader_failure
// Target address:  0xB2C0
// GOT/IAT slot:    0xB028
// Slot symbol:     off_B028
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

