// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_B0A8
//
// Resolved target: sel2para
// Target address:  0xB350
// GOT/IAT slot:    0xB0A8
// Slot symbol:     off_B0A8
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

