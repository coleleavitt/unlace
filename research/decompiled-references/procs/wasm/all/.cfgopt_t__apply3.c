// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9350
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9350 jmp     cs:off_26190
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x264B0
// GOT/IAT slot:    0x26190
// Slot symbol:     off_26190
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

