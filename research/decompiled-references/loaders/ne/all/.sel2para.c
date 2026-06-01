// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_B090
//
// Resolved target: sel2para
// Target address:  0xB328
// GOT/IAT slot:    0xB090
// Slot symbol:     off_B090
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

