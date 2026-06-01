// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .change_storage_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_A0A0
//
// Resolved target: change_storage_type
// Target address:  0xA350
// GOT/IAT slot:    0xA0A0
// Slot symbol:     off_A0A0
// Target type:     <no type info>
// ============================================================

void .change_storage_type(/* see target signature */)
{
    // Tail-call to change_storage_type via GOT/IAT indirection
    return change_storage_type(/* forwarded args */);
}

