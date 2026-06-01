// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .import_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_B008
//
// Resolved target: import_module
// Target address:  0xB2B0
// GOT/IAT slot:    0xB008
// Slot symbol:     off_B008
// Target type:     <no type info>
// ============================================================

void .import_module(/* see target signature */)
{
    // Tail-call to import_module via GOT/IAT indirection
    return import_module(/* forwarded args */);
}

