// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .set_import_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_80D0
//
// Resolved target: set_import_name
// Target address:  0x87B0
// GOT/IAT slot:    0x80D0
// Slot symbol:     off_80D0
// Target type:     <no type info>
// ============================================================

void .set_import_name(/* see target signature */)
{
    // Tail-call to set_import_name via GOT/IAT indirection
    return set_import_name(/* forwarded args */);
}

