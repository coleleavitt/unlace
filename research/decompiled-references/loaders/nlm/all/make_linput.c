// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8820
// Name:     make_linput
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to make_linput are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void make_linput(/* see import library declaration */);

