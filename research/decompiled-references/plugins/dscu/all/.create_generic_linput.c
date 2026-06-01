// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4210
// Name:            .create_generic_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4210 jmp     cs:off_1F0F0
//
// Resolved target: create_generic_linput
// Target address:  0x1F3A0
// GOT/IAT slot:    0x1F0F0
// Slot symbol:     off_1F0F0
// Target type:     <no type info>
// ============================================================

void .create_generic_linput(/* see target signature */)
{
    // Tail-call to create_generic_linput via GOT/IAT indirection
    return create_generic_linput(/* forwarded args */);
}

