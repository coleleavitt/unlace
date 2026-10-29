// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_B0F0
//
// Resolved target: sel2para
// Target address:  0xB588
// GOT/IAT slot:    0xB0F0
// Slot symbol:     off_B0F0
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

