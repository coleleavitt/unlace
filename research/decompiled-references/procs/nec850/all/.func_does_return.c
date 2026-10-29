// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9490
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9490 jmp     cs:off_2E230
//
// Resolved target: func_does_return
// Target address:  0x2E8A0
// GOT/IAT slot:    0x2E230
// Slot symbol:     off_2E230
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

