// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6030
// Name:            .build_stkvar_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6030 jmp     cs:off_2F000
//
// Resolved target: build_stkvar_xrefs
// Target address:  0x2F670
// GOT/IAT slot:    0x2F000
// Slot symbol:     off_2F000
// Target type:     <no type info>
// ============================================================

void .build_stkvar_xrefs(/* see target signature */)
{
    // Tail-call to build_stkvar_xrefs via GOT/IAT indirection
    return build_stkvar_xrefs(/* forwarded args */);
}

