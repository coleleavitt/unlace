__int64 __fastcall sub_5E1D0(__int64 a1, __int64 a2, _DWORD *a3, unsigned __int64 a4)
{
  char tinfo_property; // al
  unsigned int v6; // r12d
  char v8; // r15
  char v9; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rax
  int v14; // r12d
  struct _Unwind_Exception *v15; // rbx
  __int64 *v16; // [rsp+0h] [rbp-A8h]

  if ( __PAIR128__(a4, (unsigned __int64)a3) == 0 )
  {
    if ( !under_debugger )
    {
      v15 = (struct _Unwind_Exception *)interr();
      sub_5E130(v16);
      _Unwind_Resume(v15);
    }
    BUG();
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 )
  {
    v8 = tinfo_property & 0xF;
    if ( (tinfo_property & 0xFu) <= 9 )
    {
      tinfo_size = get_tinfo_size();
      if ( tinfo_size == -1 )
        return 0;
      if ( v8 == 9 )
      {
        if ( *(_QWORD *)(a1 + 72) < tinfo_size )
          return 0;
        v13 = *(unsigned __int8 *)(a1 + 87);
        if ( (unsigned __int8)v13 >= *(_BYTE *)(a1 + 85) )
          return 0;
        v14 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v13);
        cleanup_argloc();
        *a3 = 3;
        a3[2] = v14;
        ++*(_BYTE *)(a1 + 87);
        return 1;
      }
    }
    else
    {
      v9 = tinfo_property & 0x3F;
      if ( v9 != 45 && ((v8 - 10) & 0xFD) != 0 )
      {
        if ( v9 == 13 )
        {
          get_tinfo_details();
          return (unsigned int)-1;
        }
        if ( v8 == 11 )
        {
          get_tinfo_details();
          v6 = -1;
          clear_tinfo_t();
          return v6;
        }
        return (unsigned int)-1;
      }
      tinfo_size = get_tinfo_size();
      if ( tinfo_size == -1 )
        return 0;
    }
    if ( *(_QWORD *)(a1 + 64) < tinfo_size )
      return 0;
    v11 = *(unsigned __int8 *)(a1 + 86);
    if ( (unsigned __int8)v11 >= *(_BYTE *)(a1 + 84) )
      return 0;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v11);
    cleanup_argloc();
    *a3 = 3;
    a3[2] = v12;
    ++*(_BYTE *)(a1 + 86);
    return 1;
  }
  return (unsigned int)-1;
}

