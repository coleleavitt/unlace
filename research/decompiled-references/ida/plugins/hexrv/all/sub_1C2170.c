unsigned __int64 __fastcall sub_1C2170(__int64 a1, __int64 a2, _DWORD *a3)
{
  int tinfo_size; // eax
  __int64 v6; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+10h] [rbp-78h]
  __int64 v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *a3 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size > 0 )
    {
      sub_1C1370(
        (__int64)&v6,
        *(_QWORD *)(a1 + 1504),
        (__int64)a3,
        tinfo_size,
        *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116));
      v8 = a2;
      v7 = off_4B12C0;
      v12 = -1;
      v9 = 0;
      v11 = 0;
      v13 = 0;
      v10 = 0;
      for_all_arglocs();
      v7 = off_4B12C0;
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
      cleanup_argloc();
    }
  }
  return v14 - __readfsqword(0x28u);
}

