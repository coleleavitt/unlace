// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8680
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8680 jmp     cs:off_2A328
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x2A8A8
// GOT/IAT slot:    0x2A328
// Slot symbol:     off_2A328
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

