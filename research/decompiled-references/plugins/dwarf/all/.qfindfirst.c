// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7E0
// Name:            .qfindfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7E0 jmp     cs:off_CA3D8
//
// Resolved target: qfindfirst
// Target address:  0xD0D10
// GOT/IAT slot:    0xCA3D8
// Slot symbol:     off_CA3D8
// Target type:     <no type info>
// ============================================================

void .qfindfirst(/* see target signature */)
{
    // Tail-call to qfindfirst via GOT/IAT indirection
    return qfindfirst(/* forwarded args */);
}

