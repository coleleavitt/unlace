// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48F0
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48F0 jmp     cs:off_28460
//
// Resolved target: get_type_by_tid
// Target address:  0x29E20
// GOT/IAT slot:    0x28460
// Slot symbol:     off_28460
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

