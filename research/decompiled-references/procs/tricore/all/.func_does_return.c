// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6400
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6400 jmp     cs:off_241E8
//
// Resolved target: func_does_return
// Target address:  0x25FB8
// GOT/IAT slot:    0x241E8
// Slot symbol:     off_241E8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

