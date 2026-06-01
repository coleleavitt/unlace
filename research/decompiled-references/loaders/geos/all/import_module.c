// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8278
// Name:     import_module
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to import_module are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void import_module(/* see import library declaration */);

