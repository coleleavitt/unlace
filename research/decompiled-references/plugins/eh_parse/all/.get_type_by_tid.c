// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A90
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A90 jmp     cs:off_2F530
//
// Resolved target: get_type_by_tid
// Target address:  0x2FBC8
// GOT/IAT slot:    0x2F530
// Slot symbol:     off_2F530
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

