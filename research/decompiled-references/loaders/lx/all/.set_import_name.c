// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .set_import_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_B140
//
// Resolved target: set_import_name
// Target address:  0xB3E8
// GOT/IAT slot:    0xB140
// Slot symbol:     off_B140
// Target type:     <no type info>
// ============================================================

void .set_import_name(/* see target signature */)
{
    // Tail-call to set_import_name via GOT/IAT indirection
    return set_import_name(/* forwarded args */);
}

