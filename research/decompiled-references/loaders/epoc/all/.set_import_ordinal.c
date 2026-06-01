// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .set_import_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_13240
//
// Resolved target: set_import_ordinal
// Target address:  0x13948
// GOT/IAT slot:    0x13240
// Slot symbol:     off_13240
// Target type:     <no type info>
// ============================================================

void .set_import_ordinal(/* see target signature */)
{
    // Tail-call to set_import_ordinal via GOT/IAT indirection
    return set_import_ordinal(/* forwarded args */);
}

