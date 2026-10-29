unsigned __int64 __fastcall sub_2E0CA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  const __m128i *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v9; // [rsp+0h] [rbp-178h]
  __m128i v10[3]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v11[12]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-98h]
  _BYTE v13[16]; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v14; // [rsp+100h] [rbp-78h] BYREF
  __int128 v15; // [rsp+110h] [rbp-68h] BYREF
  __m128i v16; // [rsp+120h] [rbp-58h]
  unsigned __int64 v17; // [rsp+138h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 200 )
  {
    v4 = a1 + 400;
    do
    {
      v5 = (const __m128i *)(v4 - 200);
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v4 - 200, a1) >= 0 )
      {
        sub_2D0760((__int64)v13, (const __m128i *)a3);
        v16 = 0u;
        v15 = 0;
        if ( v14.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v14.m128i_i64[0])(&v15, v13, 2);
          v16 = _mm_load_si128(&v14);
        }
        sub_2E0B50((const __m128i *)(v4 - 200), (__int64)&v15);
        if ( v16.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v16.m128i_i64[0])(&v15, &v15, 3);
        if ( v14.m128i_i64[0] )
          ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v14.m128i_i64[0])(v13, v13, 3);
        v9 = v4;
      }
      else
      {
        sub_2CE6D0(v10, (const __m128i *)(v4 - 200));
        v9 = v4;
        v10[0].m128i_i64[0] = (__int64)off_4DD3E8;
        v12 = *(_QWORD *)(v4 - 8);
        v6 = 0x8F5C28F5C28F5C29LL * (((__int64)v5->m128i_i64 - a1) >> 3);
        if ( (__int64)v5->m128i_i64 - a1 > 0 )
        {
          do
          {
            v7 = (__int64)v5;
            v5 = (const __m128i *)((char *)v5 - 200);
            sub_2B3320(v7, v5);
            *(_QWORD *)(v7 + 192) = *(_QWORD *)(v7 - 8);
            --v6;
          }
          while ( v6 );
        }
        sub_2B3320(a1, v10);
        *(_QWORD *)(a1 + 192) = v12;
        v10[0].m128i_i64[0] = (__int64)&off_4DBBE8;
        cleanup_argloc();
        sub_2B9D40(v11);
        cleanup_argloc();
      }
      v4 += 200;
    }
    while ( v9 != a2 );
  }
  return v17 - __readfsqword(0x28u);
}

