// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2430
// Name:            .set_import_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2430 jmp     cs:off_B200
//
// Resolved target: set_import_ordinal
// Target address:  0xB4C0
// GOT/IAT slot:    0xB200
// Slot symbol:     off_B200
// Target type:     <no type info>
// ============================================================

void .set_import_ordinal(/* see target signature */)
{
    // Tail-call to set_import_ordinal via GOT/IAT indirection
    return set_import_ordinal(/* forwarded args */);
}

