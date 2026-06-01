__int64 __fastcall sub_29C830(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  unsigned int v4; // ebx
  int tinfo_size; // ebp
  int v7; // eax
  bool v8; // bl
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( *a3 != 6 )
  {
    if ( !under_debugger )
      sub_383060(0xC83Bu, a4);
    BUG();
  }
  v9 = 0;
  v4 = sub_29B3C0(a2, a1, &v9, a4);
  if ( (_BYTE)v4 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v11 = 0;
    v11 = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    if ( tinfo_size >= 0 )
    {
      v7 = get_tinfo_size();
      if ( v7 >= 0 )
      {
        v4 = 0;
        if ( tinfo_size == v7 )
        {
          v8 = (get_tinfo_property() & 0xF) == 9;
          LOBYTE(v4) = ((get_tinfo_property() & 0xF) == 9) == v8;
        }
      }
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v4 = 1;
  }
  clear_tinfo_t();
  return v4;
}

