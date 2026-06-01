// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xA240
// Name:     define_stkvar
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to define_stkvar are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void define_stkvar(/* see import library declaration */);

