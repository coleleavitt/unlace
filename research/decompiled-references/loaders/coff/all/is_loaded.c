// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x236B8
// Name:     is_loaded
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to is_loaded are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void is_loaded(/* see import library declaration */);

