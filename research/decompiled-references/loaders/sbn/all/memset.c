// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4100
// Name:     memset
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to memset are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void memset(/* see import library declaration */);

