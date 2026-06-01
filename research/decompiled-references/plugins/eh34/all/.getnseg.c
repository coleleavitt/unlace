// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6670
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6670 jmp     cs:off_8D320
//
// Resolved target: getnseg
// Target address:  0x8D8E0
// GOT/IAT slot:    0x8D320
// Slot symbol:     off_8D320
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

