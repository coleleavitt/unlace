// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x101D0
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x101D0 jmp     cs:off_2E0D0
//
// Resolved target: func_does_return
// Target address:  0x36D48
// GOT/IAT slot:    0x2E0D0
// Slot symbol:     off_2E0D0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

