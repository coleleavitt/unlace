// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3550
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3550 jmp     cs:off_29290
//
// Resolved target: idadir
// Target address:  0x29658
// GOT/IAT slot:    0x29290
// Slot symbol:     off_29290
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

