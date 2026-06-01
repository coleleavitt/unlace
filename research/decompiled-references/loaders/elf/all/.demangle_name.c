// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9590
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9590 jmp     cs:off_892B0
//
// Resolved target: demangle_name
// Target address:  0x8C5B8
// GOT/IAT slot:    0x892B0
// Slot symbol:     off_892B0
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

