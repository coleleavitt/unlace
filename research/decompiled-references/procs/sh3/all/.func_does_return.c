// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5390
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5390 jmp     cs:off_151B0
//
// Resolved target: func_does_return
// Target address:  0x16240
// GOT/IAT slot:    0x151B0
// Slot symbol:     off_151B0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

