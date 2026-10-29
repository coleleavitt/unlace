__int64 __fastcall sub_37F740(__int64 a1, unsigned int a2, __int64 a3)
{
  copy_tinfo_t();
  copy_tinfo_t();
  if ( (*(_QWORD *)(get_ash() + 320) || (unsigned __int8)getinf_flag()) && a3 )
    LOBYTE(a2) = a3 == get_tinfo_size();
  else
    a2 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  return a2;
}

