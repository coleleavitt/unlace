const __m128i *__fastcall sub_46520(
        const __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 (__fastcall *a4)(__m128i *, __m128i *))
{
  __int64 v4; // rsi
  const __m128i *v5; // r14
  __int64 v6; // rbx
  __m128i v8; // xmm0
  __int64 v9; // r13
  size_t v10; // rbp
  const __m128i *v11; // r15
  __int32 v12; // eax
  __m128i v13; // xmm0
  size_t v14; // rbp
  char v15; // bp
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  __m128i v22; // [rsp+10h] [rbp-A8h] BYREF
  void *v23; // [rsp+20h] [rbp-98h]
  __int128 v24; // [rsp+28h] [rbp-90h]
  __int32 v25; // [rsp+38h] [rbp-80h]
  __m128i v26; // [rsp+40h] [rbp-78h] BYREF
  void *v27; // [rsp+50h] [rbp-68h]
  __int128 v28; // [rsp+58h] [rbp-60h]
  __int32 v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v4 = a2 - (_QWORD)a1;
  v5 = a1;
  v30 = __readfsqword(0x28u);
  v6 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4);
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = _mm_loadu_si128(a3);
        v9 = v6 >> 1;
        v10 = a3[1].m128i_u64[1];
        v23 = nullptr;
        v22 = v8;
        v24 = 0;
        v11 = &v5[(v6 >> 1) + (v6 & 0xFFFFFFFFFFFFFFFELL)];
        if ( v10 )
        {
          v19 = (void *)qalloc_or_throw(v10);
          v20 = (const void *)a3[1].m128i_i64[0];
          *((_QWORD *)&v24 + 1) = v10;
          v23 = v19;
          memcpy(v19, v20, v10);
          *(_QWORD *)&v24 = v10;
        }
        v12 = a3[2].m128i_i32[2];
        v13 = _mm_loadu_si128(v11);
        v27 = nullptr;
        v14 = v11[1].m128i_u64[1];
        v28 = 0;
        v25 = v12;
        v26 = v13;
        if ( v14 )
        {
          v17 = (void *)qalloc_or_throw(v14);
          v18 = (const void *)v11[1].m128i_i64[0];
          v27 = v17;
          *((_QWORD *)&v28 + 1) = v14;
          memcpy(v17, v18, v14);
          *(_QWORD *)&v28 = v14;
        }
        v29 = v11[2].m128i_i32[2];
        v15 = a4(&v26, &v22);
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27);
        }
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        if ( v15 )
          break;
        v6 >>= 1;
        if ( v9 <= 0 )
          return v5;
      }
      v5 = v11 + 3;
      v6 = v6 - 1 - v9;
    }
    while ( v6 > 0 );
  }
  return v5;
}

