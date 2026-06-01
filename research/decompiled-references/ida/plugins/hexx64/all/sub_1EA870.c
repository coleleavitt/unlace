unsigned __int64 __fastcall sub_1EA870(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  unsigned __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v24[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v25[4]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 *v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-60h]
  __int64 v28[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a2 != (__m128i *)(a1 + 416) )
  {
    a2->m128i_i64[0] = *(_QWORD *)(a1 + 416);
    if ( (unsigned __int64 *)(a1 + 424) != &a2->m128i_u64[1] )
    {
      sub_1E4290(&v26, a1 + 424);
      v7 = (unsigned __int64 *)a2->m128i_i64[1];
      v8 = v27;
      a2->m128i_i64[1] = (__int64)v26;
      v9 = a2[1].m128i_i64[0];
      v26 = v7;
      a2[1].m128i_i64[0] = v8;
      v27 = v9;
      if ( v7 )
      {
        sub_13FCB0(&v26);
        if ( v26 )
          qfree((__int64)v26);
      }
    }
    a2[1].m128i_i8[8] = *(_BYTE *)(a1 + 440);
  }
  for ( ; a4 != a3; a3 = *(_QWORD *)(a3 + 8) )
  {
    if ( !a3 )
    {
      if ( !under_debugger )
        sub_383060(0xCB51u, *(double *)a5.m128_u64);
      BUG();
    }
    sub_1E9F20((__int64)v24, a2->m128i_i64, a3);
    sub_127A20((__int64)&v26, a1, a3, 1, v10, v11, *(double *)a5.m128_u64, a6);
    v12 = *(_QWORD *)(a1 + 64);
    sub_64640((__int64 *)&v26, v24, v13, v14, v15, v16);
    sub_317C60(v28, (__int64)v25);
    v17 = *(_QWORD *)(v12 + 1504);
    sub_64640((__int64 *)&v26, (__int64 *)(v17 + 104), v18, v19, v20, v21);
    sub_317C60(v28, v17 + 120);
    sub_1E17E0(a2, (__int64 *)&v26, a5);
    if ( v28[0] )
    {
      v28[1] = 0;
      qfree(v28[0]);
    }
    qfree((__int64)v26);
    if ( v25[0] )
    {
      v25[1] = 0;
      qfree(v25[0]);
    }
    qfree(v24[0]);
  }
  return v29 - __readfsqword(0x28u);
}

