// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4B0
// Name:            .create_zip_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4B0 jmp     cs:off_CA240
//
// Resolved target: create_zip_linput
// Target address:  0xD0B78
// GOT/IAT slot:    0xCA240
// Slot symbol:     off_CA240
// Target type:     <no type info>
// ============================================================

void .create_zip_linput(/* see target signature */)
{
    // Tail-call to create_zip_linput via GOT/IAT indirection
    return create_zip_linput(/* forwarded args */);
}

