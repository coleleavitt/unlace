// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20490
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20490 jmp     cs:off_95230
//
// Resolved target: sel2para
// Target address:  0x95C68
// GOT/IAT slot:    0x95230
// Slot symbol:     off_95230
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

