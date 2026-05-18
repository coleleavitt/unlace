__int64 *__fastcall sub_E5530(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r13
  __int64 *v5; // rbx
  __int64 v8; // rsi
  int v9; // r8d
  __int64 v10; // r14
  __int64 *v11; // rax
  int i; // esi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rdx
  int v17; // r12d
  __int64 v18; // r15
  __int64 *v19; // rax

  v4 = a3;
  v5 = a2;
  v8 = *(int *)a2;
  v9 = v8 + a3;
  if ( (unsigned int)(v8 + a3) <= *((_DWORD *)v5 + 1) )
    goto LABEL_7;
  if ( v9 > 199 )
  {
    v5 = nullptr;
    sub_DBD10((__int64)a1, "too many FROM clause terms, max: %d", 200);
    return v5;
  }
  v10 = 200;
  if ( a3 + 2 * v8 <= 200 )
    v10 = a3 + 2 * v8;
  v11 = sub_DFAD0(*a1, v5, 104 * (v10 - 1) + 112);
  v5 = v11;
  if ( v11 )
  {
    LODWORD(v8) = *(_DWORD *)v11;
    *((_DWORD *)v11 + 1) = v10;
    v9 = v8 + a3;
LABEL_7:
    for ( i = v8 - 1; a4 <= i; v15[13] = v16[13] )
    {
      v13 = 13LL * (i + a3);
      v14 = i--;
      v15 = &v5[v13];
      v16 = &v5[13 * v14];
      *(__m128i *)(v15 + 1) = _mm_loadu_si128((const __m128i *)(v16 + 1));
      *(__m128i *)(v15 + 3) = _mm_loadu_si128((const __m128i *)(v16 + 3));
      *(__m128i *)(v15 + 5) = _mm_loadu_si128((const __m128i *)(v16 + 5));
      *(__m128i *)(v15 + 7) = _mm_loadu_si128((const __m128i *)(v16 + 7));
      *(__m128i *)(v15 + 9) = _mm_loadu_si128((const __m128i *)(v16 + 9));
      *(__m128i *)(v15 + 11) = _mm_loadu_si128((const __m128i *)(v16 + 11));
    }
    *(_DWORD *)v5 = v9;
    v17 = a4 + a3;
    v18 = 13LL * a4;
    memset(&v5[v18 + 1], 0, 104 * v4);
    if ( a4 < v17 )
    {
      v19 = &v5[v18 + 9];
      do
      {
        *(_DWORD *)v19 = -1;
        v19 += 13;
      }
      while ( v19 != &v5[13 * a4 + 22 + 13 * (unsigned __int64)(unsigned int)(~a4 + v17)] );
    }
  }
  return v5;
}
