// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .set_import_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_81D8
//
// Resolved target: set_import_ordinal
// Target address:  0x8450
// GOT/IAT slot:    0x81D8
// Slot symbol:     off_81D8
// Target type:     <no type info>
// ============================================================

void .set_import_ordinal(/* see target signature */)
{
    // Tail-call to set_import_ordinal via GOT/IAT indirection
    return set_import_ordinal(/* forwarded args */);
}

