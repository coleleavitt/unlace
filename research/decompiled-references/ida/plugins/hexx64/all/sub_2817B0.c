__int64 __fastcall sub_2817B0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  bool v4; // zf
  int tinfo_size; // r14d
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int128 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  int v14; // [rsp+58h] [rbp-50h]
  __int16 v15; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 8) == 61;
  v16 = __readfsqword(0x28u);
  if ( !v4 || sub_255A30(*(__int64 **)(a3 + 24)) )
  {
    v9[0] = 0;
    copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    if ( (get_tinfo_property() & 0xF) == 0xB && *(_DWORD *)(a2 + 8) == 51 )
    {
      v7 = 0;
    }
    else
    {
      if ( tinfo_size == *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) )
      {
        v10 = 0;
        v11 = 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          a4 = 0.0;
          v9[2] = 0;
          v9[1] = 0;
          v12 = 0;
          copy_tinfo_t();
          v13 = 0;
          copy_tinfo_t();
          v14 = 0;
          v15 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          *(_QWORD *)&v12 = v10;
          v10 = 0;
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        clear_tinfo_t();
      }
      v7 = sub_246B40(a3, a1, v9, a4);
    }
    clear_tinfo_t();
  }
  else
  {
    return 0;
  }
  return v7;
}

