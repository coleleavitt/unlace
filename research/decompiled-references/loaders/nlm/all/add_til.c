// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8898
// Name:     add_til
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_til are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_til(/* see import library declaration */);

