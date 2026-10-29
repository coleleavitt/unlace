__int64 __fastcall sub_312B30(__int64 *a1, __int64 **a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r13
  _QWORD *v5; // rdi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  unsigned int v8; // r14d
  __int64 *v9; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // r14
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v17 = __readfsqword(0x28u);
  if ( v3 != 1 )
  {
    v4 = (unsigned __int64)a2[1];
    if ( !v4 )
      return 0;
    if ( v4 == 1 && !**a2 && !(*a2)[1] )
    {
      v5 = (_QWORD *)*a1;
      goto LABEL_21;
    }
    if ( !v3 )
    {
      v15 = (void *)qalloc_or_throw();
      memcpy(v15, *a2, 16 * v4);
      if ( *a1 )
      {
        a1[1] = 0;
        qfree();
      }
      *a1 = (__int64)v15;
      *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      return 1;
    }
    v5 = (_QWORD *)*a1;
    v6 = *a2;
    goto LABEL_6;
  }
  v5 = (_QWORD *)*a1;
  if ( !*v5 && !v5[1] )
    return 0;
  v4 = (unsigned __int64)a2[1];
  if ( !v4 )
    return 0;
  if ( v4 == 1 )
  {
    v6 = *a2;
    v7 = *a2;
    if ( !**a2 )
    {
      if ( !v6[1] )
      {
LABEL_21:
        v11 = (__int64)v5;
        if ( v5 )
        {
          a1[1] = 0;
          qfree();
          v3 = a1[1];
          v12 = 0;
          *a1 = 0;
          a1[2] = 0;
          v13 = v3 + 1;
          v16 = 0;
        }
        else
        {
          v12 = a1[2];
          v13 = v3 + 1;
          v16 = 0;
          if ( (unsigned __int64)&v16 < 16 * v12 )
          {
            if ( v12 < v13 )
            {
              v11 = qvector_reserve();
              v3 = a1[1];
              *a1 = v11;
            }
            *(_OWORD *)(v11 + 16 * v3) = 0;
            goto LABEL_26;
          }
        }
        v14 = 0;
        if ( v12 < v13 )
        {
          v14 = qvector_reserve();
          v3 = a1[1];
          *a1 = v14;
        }
        *(__m128i *)(v14 + 16 * v3) = _mm_load_si128(&v16);
LABEL_26:
        ++a1[1];
        return 1;
      }
LABEL_6:
      v7 = v6;
    }
  }
  else
  {
    v7 = *a2;
  }
  v16.m128i_i64[0] = (__int64)v5;
  if ( !(16 * v4) )
    return 0;
  v8 = 0;
  do
  {
    v9 = v7;
    v7 += 2;
    v8 |= sub_312770(a1, (__m128i **)&v16, v9);
  }
  while ( v7 != &(*a2)[2 * (_QWORD)a2[1]] );
  return v8;
}

