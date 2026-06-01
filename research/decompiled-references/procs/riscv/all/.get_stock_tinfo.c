// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA550
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA550 jmp     cs:off_35290
//
// Resolved target: get_stock_tinfo
// Target address:  0x358E0
// GOT/IAT slot:    0x35290
// Slot symbol:     off_35290
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

