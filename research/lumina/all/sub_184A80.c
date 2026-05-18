// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x184A80
// Name:            sub_184A80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x184A80 jmp     sub_184940
//
// Resolved target: sub_184940
// Target address:  0x184940
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, _DWORD *)
// ============================================================

/* see target sig */ sub_184A80(/* see target signature */)
{
    // Tail-call to sub_184940 via direct jump indirection
    return sub_184940(/* forwarded args */);
}

