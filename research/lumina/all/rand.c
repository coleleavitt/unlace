// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x243BE8
// Name:     rand
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to rand are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void rand(/* see import library declaration */);

