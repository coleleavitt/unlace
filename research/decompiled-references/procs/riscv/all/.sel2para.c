// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA320
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA320 jmp     cs:off_35178
//
// Resolved target: sel2para
// Target address:  0x357C8
// GOT/IAT slot:    0x35178
// Slot symbol:     off_35178
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

