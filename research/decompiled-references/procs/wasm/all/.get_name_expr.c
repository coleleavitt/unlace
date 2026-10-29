// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9200
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9200 jmp     cs:off_260E8
//
// Resolved target: get_name_expr
// Target address:  0x263F8
// GOT/IAT slot:    0x260E8
// Slot symbol:     off_260E8
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

