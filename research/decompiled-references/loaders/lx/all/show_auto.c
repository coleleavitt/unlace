// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB438
// Name:     show_auto
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to show_auto are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void show_auto(/* see import library declaration */);

