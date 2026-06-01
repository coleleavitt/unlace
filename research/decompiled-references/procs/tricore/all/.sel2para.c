// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6290
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6290 jmp     cs:off_24130
//
// Resolved target: sel2para
// Target address:  0x25F00
// GOT/IAT slot:    0x24130
// Slot symbol:     off_24130
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

