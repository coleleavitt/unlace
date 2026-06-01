const __m128i *__fastcall sub_46740(
        const __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 (__fastcall *a4)(__m128i *, __m128i *))
{
  __int64 v4; // rsi
  const __m128i *v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  const __m128i *v9; // r15
  size_t v10; // rbp
  __int32 v11; // eax
  __m128i v12; // xmm0
  size_t v13; // rbp
  char v14; // bp
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  const void *v19; // rsi
  __m128i v21; // [rsp+10h] [rbp-A8h] BYREF
  void *v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+28h] [rbp-90h]
  __int32 v24; // [rsp+38h] [rbp-80h]
  __m128i v25; // [rsp+40h] [rbp-78h] BYREF
  void *v26; // [rsp+50h] [rbp-68h]
  __int128 v27; // [rsp+58h] [rbp-60h]
  __int32 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v4 = a2 - (_QWORD)a1;
  v5 = a1;
  v29 = __readfsqword(0x28u);
  v6 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4);
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v22 = nullptr;
        v8 = v6 >> 1;
        v23 = 0;
        v9 = &v5[(v6 >> 1) + (v6 & 0xFFFFFFFFFFFFFFFELL)];
        v10 = v9[1].m128i_u64[1];
        v21 = _mm_loadu_si128(v9);
        if ( v10 )
        {
          v18 = (void *)qalloc_or_throw(v10);
          v19 = (const void *)v9[1].m128i_i64[0];
          *((_QWORD *)&v23 + 1) = v10;
          v22 = v18;
          memcpy(v18, v19, v10);
          *(_QWORD *)&v23 = v10;
        }
        v11 = v9[2].m128i_i32[2];
        v12 = _mm_loadu_si128(a3);
        v26 = nullptr;
        v13 = a3[1].m128i_u64[1];
        v27 = 0;
        v24 = v11;
        v25 = v12;
        if ( v13 )
        {
          v16 = (void *)qalloc_or_throw(v13);
          v17 = (const void *)a3[1].m128i_i64[0];
          v26 = v16;
          *((_QWORD *)&v27 + 1) = v13;
          memcpy(v16, v17, v13);
          *(_QWORD *)&v27 = v13;
        }
        v28 = a3[2].m128i_i32[2];
        v14 = a4(&v25, &v21);
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26);
        }
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v22);
        }
        if ( !v14 )
          break;
        v6 >>= 1;
        if ( v8 <= 0 )
          return v5;
      }
      v5 = v9 + 3;
      v6 = v6 - 1 - v8;
    }
    while ( v6 > 0 );
  }
  return v5;
}

