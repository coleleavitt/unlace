// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x25FC0
// Name:     register_custom_refinfo
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to register_custom_refinfo are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void register_custom_refinfo(/* see import library declaration */);

