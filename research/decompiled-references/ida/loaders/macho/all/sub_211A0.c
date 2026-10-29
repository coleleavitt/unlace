__int64 __fastcall sub_211A0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  __int64 v4; // rbp

  v4 = a4;
  if ( a3 && *a3 )
  {
    sub_210D0(a1, (__int64)a3);
    if ( (unsigned __int8)get_type_by_tid() )
    {
      del_items();
      set_cmt();
      get_tinfo_size();
      create_data();
    }
    clear_tinfo_t();
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a2 + v4);
}

