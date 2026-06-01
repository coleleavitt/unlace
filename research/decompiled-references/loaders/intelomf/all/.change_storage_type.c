// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .change_storage_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_5068
//
// Resolved target: change_storage_type
// Target address:  0x52B0
// GOT/IAT slot:    0x5068
// Slot symbol:     off_5068
// Target type:     <no type info>
// ============================================================

void .change_storage_type(/* see target signature */)
{
    // Tail-call to change_storage_type via GOT/IAT indirection
    return change_storage_type(/* forwarded args */);
}

