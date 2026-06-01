// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xD0BF0
// Name:     is_name_defined_locally
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to is_name_defined_locally are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void is_name_defined_locally(/* see import library declaration */);

