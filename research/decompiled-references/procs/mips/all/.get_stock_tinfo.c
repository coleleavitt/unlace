// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19680
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19680 jmp     cs:off_75328
//
// Resolved target: get_stock_tinfo
// Target address:  0x75B78
// GOT/IAT slot:    0x75328
// Slot symbol:     off_75328
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

