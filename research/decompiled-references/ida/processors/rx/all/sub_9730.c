signed __int64 __fastcall sub_9730(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 result; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  const __m128i *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char i; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __m128i v28; // xmm2
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF
  __int128 v30; // [rsp+30h] [rbp-48h]

  result = a2 - a1;
  if ( (__int64)(a2 - a1) > 512 )
  {
    v7 = a3;
    v8 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v10 = (const __m128i *)(a1 + 32);
        --v7;
        v11 = v8;
        sub_9130(a1, a1 + 32, a1 + 32 * (result >> 6), v8 - 32, a4);
LABEL_5:
        for ( i = ((__int64 (__fastcall *)(const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD))a4)(
                    v10,
                    a1,
                    v12,
                    v13,
                    v14,
                    v15,
                    v29.m128i_i64[0],
                    v29.m128i_i64[1],
                    v30,
                    *((_QWORD *)&v30 + 1));
              ;
              i = ((__int64 (__fastcall *)(const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD))a4)(
                    v10,
                    a1,
                    v17,
                    v18,
                    v19,
                    v20,
                    v29.m128i_i64[0],
                    v29.m128i_i64[1],
                    v30,
                    *((_QWORD *)&v30 + 1)) )
        {
          if ( i )
          {
            v10 += 2;
            goto LABEL_5;
          }
          do
            v11 -= 32LL;
          while ( (unsigned __int8)a4(a1, v11) );
          if ( (unsigned __int64)v10 >= v11 )
            break;
          v21 = _mm_loadu_si128(v10 + 1);
          v22 = _mm_loadu_si128(v10);
          v10 += 2;
          v30 = (__int128)v21;
          v23 = _mm_loadu_si128((const __m128i *)v11);
          v29 = v22;
          v10[-2] = v23;
          *(const __m128i *)((char *)&v10[-2] + 12) = _mm_loadu_si128((const __m128i *)(v11 + 12));
          *(__m128i *)v11 = v22;
          *(__m128i *)(v11 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v29.m128i_u64[1] + 4));
        }
        sub_9730(v10, v8, v7, a4);
        result = (signed __int64)v10->m128i_i64 - a1;
        if ( (__int64)v10->m128i_i64 - a1 <= 512 )
          break;
        v8 = (unsigned __int64)v10;
        if ( !v7 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      sub_9600(a1, (__m128i *)v8, v8, a4, a5, a6);
      for ( result = v8 - a1;
            (__int64)(v8 - a1) > 32;
            result = sub_93E0(a1, 0, (__int64)(v8 - a1) >> 5, a4, v24, v25, v26, v27) )
      {
        v8 -= 32LL;
        v26 = (__int128)_mm_loadu_si128((const __m128i *)v8);
        *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
        v27 = (__int128)_mm_loadu_si128((const __m128i *)(v8 + 16));
        v28 = _mm_loadu_si128((const __m128i *)(a1 + 12));
        v29.m128i_i32[3] = HIDWORD(v26);
        *(__m128i *)(v8 + 12) = v28;
        v30 = v27;
      }
    }
  }
  return result;
}

