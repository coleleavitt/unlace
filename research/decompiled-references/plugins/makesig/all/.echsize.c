// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            .echsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_20160
//
// Resolved target: echsize
// Target address:  0x21A70
// GOT/IAT slot:    0x20160
// Slot symbol:     off_20160
// Target type:     <no type info>
// ============================================================

void .echsize(/* see target signature */)
{
    // Tail-call to echsize via GOT/IAT indirection
    return echsize(/* forwarded args */);
}

