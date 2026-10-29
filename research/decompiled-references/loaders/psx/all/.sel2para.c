// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_A078
//
// Resolved target: sel2para
// Target address:  0xA328
// GOT/IAT slot:    0xA078
// Slot symbol:     off_A078
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

