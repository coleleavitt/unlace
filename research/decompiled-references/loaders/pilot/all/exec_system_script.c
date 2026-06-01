// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x82B8
// Name:     exec_system_script
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to exec_system_script are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void exec_system_script(/* see import library declaration */);

