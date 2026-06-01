// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xD0B20
// Name:     swap_value
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to swap_value are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void swap_value(/* see import library declaration */);

