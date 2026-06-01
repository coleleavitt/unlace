// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19550
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19550 jmp     cs:off_75290
//
// Resolved target: netnode_altval
// Target address:  0x75AE0
// GOT/IAT slot:    0x75290
// Slot symbol:     off_75290
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

