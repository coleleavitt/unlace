// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19090
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19090 jmp     cs:off_75030
//
// Resolved target: unpack_dw
// Target address:  0x75880
// GOT/IAT slot:    0x75030
// Slot symbol:     off_75030
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

