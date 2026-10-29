// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5F0
// Name:            .del_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5F0 jmp     cs:off_CA2E0
//
// Resolved target: del_til
// Target address:  0xD0C18
// GOT/IAT slot:    0xCA2E0
// Slot symbol:     off_CA2E0
// Target type:     <no type info>
// ============================================================

void .del_til(/* see target signature */)
{
    // Tail-call to del_til via GOT/IAT indirection
    return del_til(/* forwarded args */);
}

