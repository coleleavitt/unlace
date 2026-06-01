// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B30
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B30 jmp     cs:off_95580
//
// Resolved target: update_func
// Target address:  0x95FC0
// GOT/IAT slot:    0x95580
// Slot symbol:     off_95580
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

