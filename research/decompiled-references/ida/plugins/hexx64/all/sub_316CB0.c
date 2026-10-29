__int64 __fastcall sub_316CB0(__int64 *a1, const void **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  _QWORD *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // r14d
  __int64 *v11; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  void *v17; // r14
  __int64 v18; // rdi
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v5 = a1[1];
  v20 = __readfsqword(0x28u);
  if ( v5 != 1 )
  {
    v6 = (unsigned __int64)a2[1];
    if ( !v6 )
      return 0;
    if ( v6 == 1 && !*(_QWORD *)*a2 && !*((_QWORD *)*a2 + 1) )
    {
      v7 = (_QWORD *)*a1;
      goto LABEL_21;
    }
    if ( !v5 )
    {
      v17 = (void *)qalloc_or_throw(16 * v6, (__int64)a2, 0, a4);
      memcpy(v17, *a2, 16 * v6);
      v18 = *a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v18);
      }
      *a1 = (__int64)v17;
      *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
      return 1;
    }
    v7 = (_QWORD *)*a1;
    v8 = (__int64 *)*a2;
    goto LABEL_6;
  }
  v7 = (_QWORD *)*a1;
  if ( !*v7 && !v7[1] )
    return 0;
  v6 = (unsigned __int64)a2[1];
  if ( !v6 )
    return 0;
  if ( v6 == 1 )
  {
    v8 = (__int64 *)*a2;
    v9 = (__int64 *)*a2;
    if ( !*(_QWORD *)*a2 )
    {
      if ( !v8[1] )
      {
LABEL_21:
        v13 = (__int64)v7;
        if ( v7 )
        {
          a1[1] = 0;
          qfree((__int64)v7);
          v5 = a1[1];
          v14 = 0;
          *a1 = 0;
          a1[2] = 0;
          v15 = v5 + 1;
          v19 = 0;
        }
        else
        {
          v14 = a1[2];
          v15 = v5 + 1;
          v19 = 0;
          if ( (unsigned __int64)&v19 < 16 * v14 )
          {
            if ( v14 < v15 )
            {
              v13 = qvector_reserve((__int64)a1, 0, v5 + 1, 16);
              v5 = a1[1];
              *a1 = v13;
            }
            *(_OWORD *)(v13 + 16 * v5) = 0;
            goto LABEL_26;
          }
        }
        v16 = 0;
        if ( v14 < v15 )
        {
          v16 = qvector_reserve((__int64)a1, 0, v15, 16);
          v5 = a1[1];
          *a1 = v16;
        }
        *(__m128i *)(v16 + 16 * v5) = _mm_load_si128(&v19);
LABEL_26:
        ++a1[1];
        return 1;
      }
LABEL_6:
      v9 = v8;
    }
  }
  else
  {
    v9 = (__int64 *)*a2;
  }
  v19.m128i_i64[0] = (__int64)v7;
  if ( !(16 * v6) )
    return 0;
  v10 = 0;
  do
  {
    v11 = v9;
    v9 += 2;
    v10 |= sub_3168F0(a1, (__m128i **)&v19, v11);
  }
  while ( v9 != (__int64 *)((char *)*a2 + 16 * (_QWORD)a2[1]) );
  return v10;
}

