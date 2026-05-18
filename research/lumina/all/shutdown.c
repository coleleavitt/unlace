// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x244080
// Name:     shutdown
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to shutdown are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void shutdown(/* see import library declaration */);

