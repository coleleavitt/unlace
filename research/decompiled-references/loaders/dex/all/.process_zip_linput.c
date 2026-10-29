// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .process_zip_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_28198
//
// Resolved target: process_zip_linput
// Target address:  0x28648
// GOT/IAT slot:    0x28198
// Slot symbol:     off_28198
// Target type:     <no type info>
// ============================================================

void .process_zip_linput(/* see target signature */)
{
    // Tail-call to process_zip_linput via GOT/IAT indirection
    return process_zip_linput(/* forwarded args */);
}

