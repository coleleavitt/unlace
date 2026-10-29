// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B50
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B50 jmp     cs:off_75590
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x75DF0
// GOT/IAT slot:    0x75590
// Slot symbol:     off_75590
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

