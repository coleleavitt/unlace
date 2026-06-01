__int64 __fastcall sub_1F1B00(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 **a4,
        unsigned __int8 a5,
        double a6)
{
  __int64 v7; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // rax
  void *v23; // rax
  unsigned __int64 *v24; // rsi
  __int64 v26[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v27; // [rsp+20h] [rbp-58h]
  __m128i v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60(a6);
  v7 = a3;
  if ( !(unsigned __int8)sub_64780((_QWORD *)a1, a4)
    && !(unsigned __int8)sub_318470((unsigned __int64 **)(a1 + 16), (__int64)(a4 + 2)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 88) )
    return a5 ^ 1u;
  if ( *(_BYTE *)(a1 + 84) )
    return 0;
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 != v7 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v11 = v10 + 40LL * *(_QWORD *)(a1 + 48);
    if ( v11 != v10 )
    {
      v12 = *(_QWORD *)(a1 + 40);
      while ( !(unsigned __int8)sub_64780((_QWORD *)v12, a4)
           && !(unsigned __int8)sub_318470((unsigned __int64 **)(v12 + 16), (__int64)(a4 + 2)) )
      {
        v12 += 40;
        if ( v11 == v12 )
        {
          v9 = *(_QWORD *)(a1 + 64);
          if ( v9 == v7 )
            goto LABEL_19;
          goto LABEL_16;
        }
      }
      return 1;
    }
LABEL_16:
    if ( a5 )
      v7 = *(_QWORD *)(v7 + 8);
    if ( !sub_A9AA0(*a2, a4, v7, v9, 0x81u) )
    {
LABEL_19:
      sub_64000(v26, (__int64)a4, a6);
      v16 = (__int64)a4[3];
      v27 = nullptr;
      v28 = 0;
      if ( v16 )
      {
        v23 = (void *)qalloc_or_throw(16 * v16, (__int64)a4, v14, v15);
        v24 = a4[2];
        v27 = v23;
        v28.m128i_i64[1] = v16;
        memcpy(v23, v24, 16 * v16);
        v28.m128i_i64[0] = v16;
      }
      v17 = *(_QWORD *)(a1 + 48);
      v18 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v17 + 1) )
      {
        v22 = qvector_reserve(a1 + 40, v18, v17 + 1, 40);
        *(_QWORD *)(a1 + 40) = v22;
        v17 = *(_QWORD *)(a1 + 48);
        v18 = v22;
      }
      v19 = v18 + 40 * v17;
      sub_64000((__int64 *)v19, (__int64)v26, 0.0);
      v20 = _mm_loadu_si128(&v28);
      v21 = v26[0];
      *(_QWORD *)(v19 + 16) = v27;
      *(__m128i *)(v19 + 24) = v20;
      ++*(_QWORD *)(a1 + 48);
      qfree(v21);
      return 1;
    }
    return 0;
  }
  if ( a5 || !(unsigned __int8)sub_64820(a4, (_QWORD *)a1) )
    return 0;
  return sub_317F40((__int64 *)(a1 + 16), (__int64)(a4 + 2));
}

