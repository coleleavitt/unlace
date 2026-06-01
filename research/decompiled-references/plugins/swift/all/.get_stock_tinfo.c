// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4440
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4440 jmp     cs:off_28208
//
// Resolved target: get_stock_tinfo
// Target address:  0x29BA0
// GOT/IAT slot:    0x28208
// Slot symbol:     off_28208
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

