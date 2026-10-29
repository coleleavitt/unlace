// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1260
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1260 jmp     cs:off_6118
//
// Resolved target: lreadbytes
// Target address:  0x62B0
// GOT/IAT slot:    0x6118
// Slot symbol:     off_6118
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

