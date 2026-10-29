__int64 __fastcall sub_535A0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const void *v10; // r14
  void *v11; // rdi
  __int64 v12; // rax
  __m128i *v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 144LL);
  sub_75D50(v6);
  if ( (unsigned __int64)a4 < *(_QWORD *)(v6 + 560) )
  {
    v7 = *(_QWORD *)(v6 + 552) + 56LL * a4;
    if ( a2 != (__int64 *)(v7 + 24) )
    {
      v8 = *(_QWORD *)(v7 + 32);
      if ( v8 <= 1 )
      {
        a2[1] = 0;
        if ( (debug & 0x40000) == 0 )
          return 0;
LABEL_6:
        sub_29350();
        return 0;
      }
      v10 = *(const void **)(v7 + 24);
      v11 = (void *)*a2;
      if ( a2[2] < v8 )
      {
        v12 = qvector_reserve(a2, *a2, *(_QWORD *)(v7 + 32), 1);
        *a2 = v12;
        v11 = (void *)v12;
      }
      a2[1] = v8;
      memmove(v11, v10, v8 - 1);
      *(_BYTE *)(*a2 + v8 - 1) = 0;
    }
    if ( (debug & 0x40000) == 0 )
      return 0;
    goto LABEL_6;
  }
  v13 = (__m128i *)*a3;
  if ( (unsigned __int64)a3[2] <= 0x14 )
  {
    v15 = qvector_reserve(a3, v13, 21, 1);
    *a3 = v15;
    v13 = (__m128i *)v15;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_94060);
  a3[1] = 21;
  v13[1].m128i_i32[0] = 1684611173;
  *v13 = si128;
  *(_BYTE *)(*a3 + 20) = 0;
  return 2147500037LL;
}

