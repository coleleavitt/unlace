__int64 __fastcall sub_331840(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *func; // rax
  __int64 *v5; // r14
  unsigned int v6; // r12d
  __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-C9h]

  func = (__int64 *)get_func();
  v5 = func;
  if ( func )
  {
    if ( *func != a2 )
      return 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 48LL) & 2) == 0 )
      return sub_331580(a2);
    while ( *((char *)v5 + 16) < 0 )
    {
      get_first_fcref_from();
      v8 = get_func();
      if ( !v8 || (__int64 *)v8 == v5 )
      {
        if ( !(unsigned __int8)*a3 )
          return sub_331580(*v5);
        get_tinfo_property();
        goto LABEL_28;
      }
      v5 = (__int64 *)v8;
    }
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 48LL) & 2;
    if ( !v6 )
      return v6;
  }
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 || (unsigned __int8)is_spec_ea() )
  {
    v6 = guess_tinfo();
    if ( (!(unsigned __int8)*a3 || (get_tinfo_property() & 0xF) == 0xC) && v6 )
    {
      if ( (unsigned __int8)get_tinfo_details() )
      {
        sub_322590(a1, *(unsigned __int8 *)(a1 + 130));
        if ( (unsigned int)getinf() == 48 && (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 48LL) & 8) == 0 )
          create_tinfo();
        v9 = 0;
      }
      else
      {
        v9 = 1;
        v6 = 0;
      }
      cleanup_argloc();
      clear_tinfo_t();
    }
    else
    {
LABEL_28:
      v9 = 1;
      v6 = 0;
    }
  }
  else
  {
    v9 = 1;
    v6 = 0;
    if ( (unsigned __int8)*a3 )
      get_tinfo_property();
  }
  if ( !v5 || !v9 )
    return v6;
  return sub_331580(*v5);
}

