__int64 __fastcall sub_334050(__int64 a1, __int64 a2, __int64 a3, const char *a4, unsigned int a5)
{
  __int64 v5; // rbp
  __int64 i; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  const char **v10; // rbp
  __int64 v12; // rcx
  __int64 v15; // [rsp+10h] [rbp-48h]

  v5 = (a3 - 1) / 2;
  v15 = a3 & 1;
  if ( a2 >= v5 )
  {
    v8 = a1 + 16 * a2;
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_13;
    v7 = a2;
    goto LABEL_15;
  }
  for ( i = a2; ; i = v7 )
  {
    v7 = 2 * (i + 1);
    v8 = a1 + 32 * (i + 1);
    if ( strcmp(*(const char **)v8, *(const char **)(v8 - 16)) < 0 )
    {
      --v7;
      v8 = a1 + 16 * v7;
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128((const __m128i *)v8);
    if ( v7 >= v5 )
      break;
  }
  if ( !v15 && v7 == (a3 - 2) / 2 )
  {
LABEL_15:
    v12 = v7 + 1;
    v7 = 2 * (v7 + 1) - 1;
    *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v12 - 16));
    v8 = a1 + 16 * v7;
  }
  v9 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v10 = (const char **)(a1 + 16 * v9);
      v8 = a1 + 16 * v7;
      if ( strcmp(*v10, a4) >= 0 )
        break;
      v7 = v9;
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)v10);
      if ( a2 >= v9 )
      {
        v8 = a1 + 16 * v9;
        break;
      }
      v9 = (v9 - 1) / 2;
    }
  }
LABEL_13:
  *(_QWORD *)v8 = a4;
  *(_DWORD *)(v8 + 8) = a5;
  return a5;
}

