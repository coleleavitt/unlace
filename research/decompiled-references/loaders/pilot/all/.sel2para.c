// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_8058
//
// Resolved target: sel2para
// Target address:  0x8238
// GOT/IAT slot:    0x8058
// Slot symbol:     off_8058
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

