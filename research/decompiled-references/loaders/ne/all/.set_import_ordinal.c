// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2440
// Name:            .set_import_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2440 jmp     cs:off_B208
//
// Resolved target: set_import_ordinal
// Target address:  0xB4B8
// GOT/IAT slot:    0xB208
// Slot symbol:     off_B208
// Target type:     <no type info>
// ============================================================

void .set_import_ordinal(/* see target signature */)
{
    // Tail-call to set_import_ordinal via GOT/IAT indirection
    return set_import_ordinal(/* forwarded args */);
}

