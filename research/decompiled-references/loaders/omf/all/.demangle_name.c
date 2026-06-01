// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_14198
//
// Resolved target: demangle_name
// Target address:  0x14788
// GOT/IAT slot:    0x14198
// Slot symbol:     off_14198
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

