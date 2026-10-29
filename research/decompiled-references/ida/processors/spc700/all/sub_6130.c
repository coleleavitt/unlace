__int64 sub_6130()
{
  __int64 named_type_tid; // rbx

  named_type_tid = get_named_type_tid();
  if ( named_type_tid == -1 )
  {
    if ( (unsigned __int8)parse_decl() )
    {
      save_tinfo();
      named_type_tid = get_tinfo_tid();
    }
    clear_tinfo_t();
  }
  return named_type_tid;
}

