// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_20030
//
// Resolved target: getn_func
// Target address:  0x21940
// GOT/IAT slot:    0x20030
// Slot symbol:     off_20030
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

