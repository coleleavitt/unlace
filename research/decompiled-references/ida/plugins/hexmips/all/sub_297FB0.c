__int64 __fastcall sub_297FB0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int tinfo_size; // ebp
  int v6; // eax
  bool v7; // bl
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *a3 != 6 )
  {
    if ( !under_debugger )
      sub_37E160(51259);
    BUG();
  }
  v8 = 0;
  v3 = sub_296B40(a2, a1, &v8);
  if ( (_BYTE)v3 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v10 = 0;
    v10 = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    if ( tinfo_size >= 0 )
    {
      v6 = get_tinfo_size();
      if ( v6 >= 0 )
      {
        v3 = 0;
        if ( tinfo_size == v6 )
        {
          v7 = (get_tinfo_property() & 0xF) == 9;
          LOBYTE(v3) = ((get_tinfo_property() & 0xF) == 9) == v7;
        }
      }
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v3 = 1;
  }
  clear_tinfo_t();
  return v3;
}

