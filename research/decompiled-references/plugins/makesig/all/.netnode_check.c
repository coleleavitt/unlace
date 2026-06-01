// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3460
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3460 jmp     cs:off_20218
//
// Resolved target: netnode_check
// Target address:  0x21B40
// GOT/IAT slot:    0x20218
// Slot symbol:     off_20218
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

