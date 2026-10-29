// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x206E0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x206E0 jmp     cs:off_95358
//
// Resolved target: get_name_expr
// Target address:  0x95D90
// GOT/IAT slot:    0x95358
// Slot symbol:     off_95358
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

