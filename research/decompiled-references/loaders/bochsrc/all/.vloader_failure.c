// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_4018
//
// Resolved target: vloader_failure
// Target address:  0x5158
// GOT/IAT slot:    0x4018
// Slot symbol:     off_4018
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

