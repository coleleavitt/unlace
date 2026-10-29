// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x2D650
// Name:     qexit
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to qexit are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void qexit(/* see import library declaration */);

