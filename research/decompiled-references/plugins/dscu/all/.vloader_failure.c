// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4090
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4090 jmp     cs:off_1F030
//
// Resolved target: vloader_failure
// Target address:  0x1F2E0
// GOT/IAT slot:    0x1F030
// Slot symbol:     off_1F030
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

