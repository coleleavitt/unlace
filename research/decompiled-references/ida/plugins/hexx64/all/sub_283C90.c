unsigned __int64 __fastcall sub_283C90(__int64 a1, char a2)
{
  __m128 v3; // xmm0
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdi
  __m128 v8; // xmm1
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-88h] BYREF
  int v10; // [rsp+8h] [rbp-80h]
  __int64 v11; // [rsp+10h] [rbp-78h]
  __int128 v12; // [rsp+18h] [rbp-70h]
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h]
  __m128 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  unsigned __int64 v17; // [rsp+58h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = _mm_loadh_ps((const double *)(a1 + 216));
    v10 = 2;
    v11 = 0;
    v13 = 0;
    v16 = 0;
    v9 = (__int64 (__fastcall **)())&off_4E0878;
    v12 = 0;
    v14 = 0;
    v15 = v8;
    sub_256390((__int64)&v9, a1 + 16, 0);
    v9 = off_4DBCF8;
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
  }
  v10 = 2;
  v12 = 0;
  v14 = 0;
  v11 = 0;
  v3 = _mm_loadh_ps((const double *)(a1 + 216));
  v13 = 0;
  v16 = 0;
  v9 = (__int64 (__fastcall **)())&off_4E08B8;
  v15 = v3;
  do
  {
    sub_2583C0(a1);
    LODWORD(v16) = 0;
    v4 = sub_255A80((__int64 *)&v9, a1 + 16, 0, *(double *)v3.m128_u64);
    v5 = HIDWORD(v16);
    if ( HIDWORD(v16) )
    {
      HIDWORD(v16) = 0;
      v4 += v5;
      sub_2585C0(a1);
    }
    v6 = *(_QWORD *)(a1 + 8);
    LODWORD(v16) = v4 + v16;
    sub_138440(v6);
  }
  while ( (_DWORD)v16 );
  if ( a2 )
    sub_23FD50(a1, 2u);
  sub_3252D0(a1, 0, 0);
  v9 = off_4DBCF8;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v17 - __readfsqword(0x28u);
}

