// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19610
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19610 jmp     cs:off_752F0
//
// Resolved target: func_does_return
// Target address:  0x75B40
// GOT/IAT slot:    0x752F0
// Slot symbol:     off_752F0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

