// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20EB0
// Name:            .set_func_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20EB0 jmp     cs:off_95740
//
// Resolved target: set_func_end
// Target address:  0x96190
// GOT/IAT slot:    0x95740
// Slot symbol:     off_95740
// Target type:     <no type info>
// ============================================================

void .set_func_end(/* see target signature */)
{
    // Tail-call to set_func_end via GOT/IAT indirection
    return set_func_end(/* forwarded args */);
}

