unsigned __int64 __fastcall sub_70050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  __int64 v9; // r12
  bool v10; // zf
  __int64 v11; // r9
  __int64 v14; // [rsp+10h] [rbp-50h] BYREF
  __int128 v15; // [rsp+18h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( (a5 != -1 || a4 != 0) && a4 != a5 )
  {
    v9 = sub_85560(a2, *(unsigned __int16 *)(a3 + 8));
    if ( v9 )
    {
      v10 = *a6 == 0;
      v14 = 0;
      v15 = 0;
      if ( v10 )
      {
        v11 = 0;
      }
      else
      {
        print_tinfo(&v14, 0, 0, 0, 0, a6, 0);
        v11 = v14;
      }
      add_regvar(*(_QWORD *)(a1 + 16), a4, a5, *(_QWORD *)(v9 + 8), a7, v11);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}

