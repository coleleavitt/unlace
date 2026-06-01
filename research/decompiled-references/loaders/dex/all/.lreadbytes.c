// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36F0
// Name:            .lreadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36F0 jmp     cs:off_28360
//
// Resolved target: lreadbytes
// Target address:  0x28828
// GOT/IAT slot:    0x28360
// Slot symbol:     off_28360
// Target type:     <no type info>
// ============================================================

void .lreadbytes(/* see target signature */)
{
    // Tail-call to lreadbytes via GOT/IAT indirection
    return lreadbytes(/* forwarded args */);
}

