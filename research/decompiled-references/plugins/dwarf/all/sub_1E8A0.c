__int64 __fastcall sub_1E8A0(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  size_t v8; // r14
  void *v9; // r12
  __int16 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdi
  __int64 v16; // rdi
  __m128i v17; // xmm2
  __int8 v18; // al
  __m128i v19; // xmm0
  __m128i v20; // [rsp+0h] [rbp-A8h] BYREF
  int v21; // [rsp+14h] [rbp-94h] BYREF
  const char *v22; // [rsp+18h] [rbp-90h] BYREF
  __int8 v23; // [rsp+48h] [rbp-60h]
  __m128i v24; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v3 = a3[1];
  v25 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = *a3;
    v7 = v6 + (v3 << 6) - 64;
    v8 = *(_QWORD *)(v7 + 8);
    v20 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw(v8);
      memcpy(v9, *(const void **)v7, v8);
      v3 = a3[1];
      v10 = *(_WORD *)(v7 + 24);
      v23 = *(_BYTE *)(v7 + 40);
      v11 = *(_QWORD *)(v7 + 32);
      v24 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      if ( !v3 )
      {
LABEL_10:
        v16 = a1->m128i_i64[0];
        if ( a1->m128i_i64[0] )
        {
          a1->m128i_i64[1] = 0;
          qfree(v16);
        }
        v17 = _mm_load_si128(&v20);
        v18 = v23;
        a1->m128i_i64[0] = (__int64)v9;
        v19 = _mm_load_si128(&v24);
        a1[1].m128i_i16[4] = v10;
        a1[2].m128i_i64[0] = v11;
        a1[2].m128i_i8[8] = v18;
        *(__m128i *)((char *)a1 + 8) = v17;
        a1[3] = v19;
        return 1;
      }
      v6 = *a3;
    }
    else
    {
      v9 = nullptr;
      v10 = *(_WORD *)(v7 + 24);
      v11 = *(_QWORD *)(v7 + 32);
      v23 = *(_BYTE *)(v7 + 40);
      v24 = _mm_loadu_si128((const __m128i *)(v7 + 48));
    }
    v12 = v3 - 1;
    a3[1] = v12;
    v13 = (__int64 *)((v12 << 6) + v6);
    v14 = *v13;
    if ( *v13 )
    {
      v13[1] = 0;
      qfree(v14);
    }
    goto LABEL_10;
  }
  if ( !(unsigned int)lex_get_token(a2, a1, 0) )
    return 1;
  lex_get_file_line(a2, &v21, &v22, 0);
  sub_1E060((__int64)"Invalid configuration at line %d: %s %s\n", v21, v22, "");
  return 0;
}
