// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x36D08
// Name:     calc_dataseg
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to calc_dataseg are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void calc_dataseg(/* see import library declaration */);

