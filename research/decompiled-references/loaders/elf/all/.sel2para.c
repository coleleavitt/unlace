// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9380
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9380 jmp     cs:off_891A8
//
// Resolved target: sel2para
// Target address:  0x8C4A8
// GOT/IAT slot:    0x891A8
// Slot symbol:     off_891A8
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

