// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xD0DD0
// Name:     new_til
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to new_til are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void new_til(/* see import library declaration */);

