// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7220
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7220 jmp     cs:off_190F8
//
// Resolved target: sel2para
// Target address:  0x19628
// GOT/IAT slot:    0x190F8
// Slot symbol:     off_190F8
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

