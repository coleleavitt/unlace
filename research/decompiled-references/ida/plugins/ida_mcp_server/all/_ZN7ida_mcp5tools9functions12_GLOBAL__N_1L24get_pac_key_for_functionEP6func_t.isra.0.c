__int64 __fastcall ida_mcp::tools::functions::`anonymous namespace'::get_pac_key_for_function(
        unsigned __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp

  v2 = a1 + 32;
  if ( a2 - a1 <= 0x20 )
    v2 = a2;
  if ( a1 < v2 )
  {
    do
      decode_insn();
    while ( next_head() < v2 );
  }
  return 0;
}

