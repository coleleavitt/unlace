// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92F0
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92F0 jmp     cs:off_2E160
//
// Resolved target: sel2para
// Target address:  0x2E7D0
// GOT/IAT slot:    0x2E160
// Slot symbol:     off_2E160
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

