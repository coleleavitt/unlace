// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4A0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4A0 jmp     cs:off_35238
//
// Resolved target: get_name_expr
// Target address:  0x35888
// GOT/IAT slot:    0x35238
// Slot symbol:     off_35238
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

