unsigned __int64 __fastcall sub_1AF220(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64, _BYTE *, __int64),
        __int64 a4)
{
  __m128i v4; // xmm0
  _BYTE *v9; // rbx
  char v10; // al
  _BYTE *v11; // rsi
  __int64 *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  const __m128i *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+0h] [rbp-78h]
  __m128i v27; // [rsp+18h] [rbp-60h] BYREF
  __int128 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a1 + 22 >= a2 )
    return v29 - __readfsqword(0x28u);
  v4.m128i_i64[0] = 0;
  v27.m128i_i64[1] = 0;
  v28 = 0;
  if ( a1 >= a2 )
    return v29 - __readfsqword(0x28u);
  v9 = (_BYTE *)a1;
  while ( 1 )
  {
    while ( *v9 == 1 )
    {
      v10 = v9[1];
      v11 = v9 + 18;
      if ( v10 != 40 )
      {
        v11 = v9 + 2;
        if ( (unsigned __int64)(v9 + 3) < a2 && (unsigned __int8)(v10 - 41) <= 2u && v9[2] == 1 && v9[3] == 40 )
        {
          v27.m128i_i64[0] = 0;
          addr_from_tag();
          v16 = v28;
          v9 += 20;
          if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
          {
            v25 = *((_QWORD *)&v28 + 1);
            v18 = qvector_reserve((__int64)&v27.m128i_i64[1], 0, v28 + 1, 16);
            v19 = *((_QWORD *)&v28 + 1);
            v20 = (const __m128i *)v27.m128i_i64[1];
            *((_QWORD *)&v28 + 1) = v25;
            v21 = v28 - 1;
            if ( (__int64)v28 - 1 >= 0 )
            {
              v22 = v18;
              do
              {
                v23 = _mm_loadu_si128(v20);
                v22 += 16;
                ++v20;
                *(__m128i *)(v22 - 16) = v23;
              }
              while ( v21-- != 0 );
              v20 = (const __m128i *)v27.m128i_i64[1];
            }
            v26 = v18;
            qfree((__int64)v20);
            v17 = v26;
            v16 = v28;
            v27.m128i_i64[1] = v26;
            *((_QWORD *)&v28 + 1) = v19;
          }
          else
          {
            v17 = v27.m128i_i64[1];
          }
          v4 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v27), (__m128i)(unsigned __int64)&v9[-a1]);
          *(__m128i *)(v17 + 16 * v16) = v4;
          *(_QWORD *)&v28 = v28 + 1;
          goto LABEL_6;
        }
      }
      v9 = v11;
      if ( (unsigned __int64)v11 >= a2 )
      {
LABEL_14:
        if ( (_QWORD)v28 )
        {
          if ( !under_debugger )
            sub_383060(0xCEB2u, *(double *)v4.m128i_i64);
          BUG();
        }
        if ( v27.m128i_i64[1] )
          qfree(v27.m128i_i64[1]);
        return v29 - __readfsqword(0x28u);
      }
    }
    if ( *v9 == 2 )
      break;
    ++v9;
LABEL_6:
    if ( (unsigned __int64)v9 >= a2 )
      goto LABEL_14;
  }
  if ( (unsigned __int64)(v9 + 1) >= a2
    || (unsigned __int8)(v9[1] - 41) > 2u
    || !(_QWORD)v28
    || (v13 = (__int64 *)(v27.m128i_i64[1] + 16 * v28 - 16),
        v14 = *v13,
        v15 = v13[1],
        *(_QWORD *)&v28 = v28 - 1,
        a3(v14, v15, &v9[-a1], a4)) )
  {
    v9 += 2;
    goto LABEL_6;
  }
  if ( v27.m128i_i64[1] )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27.m128i_i64[1]);
  }
  return v29 - __readfsqword(0x28u);
}

