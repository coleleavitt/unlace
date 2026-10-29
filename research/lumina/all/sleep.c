// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x243E00
// Name:     sleep
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to sleep are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void sleep(/* see import library declaration */);

