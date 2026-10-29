// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_201D8
//
// Resolved target: qfindfirst
// Target address:  0x21AF8
// GOT/IAT slot:    0x201D8
// Slot symbol:     off_201D8
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

