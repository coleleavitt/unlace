__int64 __fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::reanalyse_all_code_segments(
        ida_mcp::tools::xtensa_options::_anonymous_namespace_ *this)
{
  __int64 result; // rax
  __int64 v2; // rbx

  set_processor_type();
  result = get_first_seg();
  if ( result )
  {
    v2 = result;
    do
    {
      if ( *(_BYTE *)(v2 + 184) == 2 || (*(_BYTE *)(v2 + 42) & 1) != 0 )
        auto_mark_range();
      result = get_next_seg();
      v2 = result;
    }
    while ( result );
  }
  return result;
}

