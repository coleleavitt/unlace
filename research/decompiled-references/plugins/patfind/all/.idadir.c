// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_131B8
//
// Resolved target: idadir
// Target address:  0x13468
// GOT/IAT slot:    0x131B8
// Slot symbol:     off_131B8
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

