// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .import_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_13008
//
// Resolved target: import_module
// Target address:  0x136F0
// GOT/IAT slot:    0x13008
// Slot symbol:     off_13008
// Target type:     <no type info>
// ============================================================

void .import_module(/* see target signature */)
{
    // Tail-call to import_module via GOT/IAT indirection
    return import_module(/* forwarded args */);
}

