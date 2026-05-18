// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97890
// Name:            sub_97890
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x97890 jmp     sub_97620
//
// Resolved target: sub_97620
// Target address:  0x97620
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, char *)
// ============================================================

/* see target sig */ sub_97890(/* see target signature */)
{
    // Tail-call to sub_97620 via direct jump indirection
    return sub_97620(/* forwarded args */);
}

