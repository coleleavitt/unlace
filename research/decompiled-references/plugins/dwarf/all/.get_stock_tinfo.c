// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA660
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA660 jmp     cs:off_CA318
//
// Resolved target: get_stock_tinfo
// Target address:  0xD0C50
// GOT/IAT slot:    0xCA318
// Slot symbol:     off_CA318
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

