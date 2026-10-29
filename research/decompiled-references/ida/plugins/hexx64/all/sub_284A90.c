unsigned __int64 __fastcall sub_284A90(__int64 a1)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm0
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-E8h] BYREF
  int v5; // [rsp+8h] [rbp-E0h]
  __int64 v6; // [rsp+10h] [rbp-D8h]
  __int128 v7; // [rsp+18h] [rbp-D0h]
  __int64 v8; // [rsp+28h] [rbp-C0h]
  __int128 v9; // [rsp+30h] [rbp-B8h]
  __m128 v10; // [rsp+40h] [rbp-A8h]
  __int64 v11; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall **v12)(); // [rsp+60h] [rbp-88h] BYREF
  int v13; // [rsp+68h] [rbp-80h]
  __int64 v14; // [rsp+70h] [rbp-78h]
  __int128 v15; // [rsp+78h] [rbp-70h]
  __int64 v16; // [rsp+88h] [rbp-60h]
  __int128 v17; // [rsp+90h] [rbp-58h]
  __m128 v18; // [rsp+A0h] [rbp-48h]
  __int64 v19; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v20; // [rsp+B8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v7 = 0;
  v9 = 0;
  v5 = 2;
  v6 = 0;
  v8 = 0;
  v11 = 0;
  v4 = (__int64 (__fastcall **)())&off_4E08F8;
  v1 = _mm_loadh_ps((const double *)(a1 + 216));
  v10 = v1;
  if ( (unsigned int)sub_256390((__int64)&v4, a1 + 16, 0) )
  {
    if ( !under_debugger )
      sub_383060(0xC5B5u, *(double *)v1.m128_u64);
    BUG();
  }
  sub_23FD50(a1, 3u);
  sub_3252D0(a1, 0, 0);
  v13 = 2;
  v15 = 0;
  v17 = 0;
  v2 = _mm_loadh_ps((const double *)(a1 + 216));
  v14 = 0;
  v16 = 0;
  v19 = 0;
  v12 = (__int64 (__fastcall **)())&off_4E0938;
  v18 = v2;
  while ( 1 )
  {
    if ( (int)sub_255A80((__int64 *)&v12, a1 + 16, 0, *(double *)v2.m128_u64) > 0 )
    {
      if ( SHIDWORD(v19) <= 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
    if ( SHIDWORD(v19) <= 0 )
      break;
LABEL_7:
    HIDWORD(v19) = 0;
    sub_2585C0(a1);
LABEL_4:
    sub_138440(*(_QWORD *)(a1 + 8));
  }
  sub_3252D0(a1, 0, 1);
  sub_23FD50(a1, 4u);
  v12 = off_4DBCF8;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  v4 = off_4DBCF8;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v20 - __readfsqword(0x28u);
}

