// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9110
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9110 jmp     cs:off_89070
//
// Resolved target: vloader_failure
// Target address:  0x8C370
// GOT/IAT slot:    0x89070
// Slot symbol:     off_89070
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

