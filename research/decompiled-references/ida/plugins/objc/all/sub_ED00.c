__int64 __fastcall sub_ED00(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 named_type_tid; // rax
  unsigned int tinfo_details; // ebp

  named_type_tid = get_named_type_tid();
  *a2 = named_type_tid;
  if ( named_type_tid == -1 )
  {
    tinfo_details = 0;
    sub_EC40();
  }
  else
  {
    if ( (unsigned __int8)get_type_by_tid() && (tinfo_details = get_tinfo_details(), (_BYTE)tinfo_details) )
    {
      *a3 = get_tinfo_size();
    }
    else
    {
      sub_EC40();
      tinfo_details = 0;
    }
    clear_tinfo_t();
  }
  return tinfo_details;
}
