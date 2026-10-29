__int64 __fastcall sub_2840F0(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  unsigned int v5; // eax
  unsigned int v6; // r13d
  _QWORD v8[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int128 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  int v13; // [rsp+58h] [rbp-50h]
  __int16 v14; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_383060(0xC837u, a4);
    BUG();
  }
  LOBYTE(v5) = sub_245630(*(_QWORD *)(a1 + 72), (__int64 *)(*(_QWORD *)(a2 + 24) + 48LL), a3, 0x16u);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a4);
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
      return sub_246B40(a2, *(_QWORD *)(a1 + 72), a3, a4);
    v8[0] = 0;
    copy_tinfo_t();
    v9 = 0;
    v10 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      a4 = 0.0;
      v8[2] = 0;
      v8[1] = 0;
      v11 = 0;
      copy_tinfo_t();
      v12 = 0;
      copy_tinfo_t();
      v13 = 0;
      v14 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v11 = v9;
      v9 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v6 = sub_246B40(a2, *(_QWORD *)(a1 + 72), v8, a4);
    clear_tinfo_t();
  }
  return v6;
}

