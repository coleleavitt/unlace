__int64 __fastcall sub_27ED30(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  _QWORD v7[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  __int128 v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+50h] [rbp-58h]
  int v12; // [rsp+58h] [rbp-50h]
  __int16 v13; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v14; // [rsp+68h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37CFE0(51255);
    BUG();
  }
  LOBYTE(v4) = sub_240270(*(_QWORD *)(a1 + 72), (__int64 *)(*(_QWORD *)(a2 + 24) + 48LL), a3, 0x16u);
  v5 = v4;
  if ( (_BYTE)v4 )
  {
    sub_250490((__int64 *)a2, *(_QWORD *)(a2 + 24));
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
      return sub_241780(a2, *(_QWORD *)(a1 + 72), a3);
    v7[0] = 0;
    copy_tinfo_t();
    v8 = 0;
    v9 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v7[2] = 0;
      v7[1] = 0;
      v10 = 0;
      copy_tinfo_t();
      v11 = 0;
      copy_tinfo_t();
      v12 = 0;
      v13 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v10 = v8;
      v8 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v5 = sub_241780(a2, *(_QWORD *)(a1 + 72), v7);
    clear_tinfo_t();
  }
  return v5;
}

