// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73C0
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73C0 jmp     cs:off_191C8
//
// Resolved target: func_does_return
// Target address:  0x196F8
// GOT/IAT slot:    0x191C8
// Slot symbol:     off_191C8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

