// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4880
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4880 jmp     cs:off_28428
//
// Resolved target: idadir
// Target address:  0x29DE0
// GOT/IAT slot:    0x28428
// Slot symbol:     off_28428
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

