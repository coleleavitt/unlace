// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x299E8
// Name:     cleanup_argloc
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to cleanup_argloc are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void cleanup_argloc(/* see import library declaration */);

