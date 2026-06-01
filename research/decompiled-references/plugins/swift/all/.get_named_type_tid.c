// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46F0
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46F0 jmp     cs:off_28360
//
// Resolved target: get_named_type_tid
// Target address:  0x29D08
// GOT/IAT slot:    0x28360
// Slot symbol:     off_28360
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

