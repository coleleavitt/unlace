__int64 __fastcall sub_65900(int *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  int *v9; // rbp
  __int64 j; // rbx
  __int64 v11; // r14
  __int16 v12; // ax
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdi
  __m128i *v17; // rax
  __int64 k; // rax
  __int64 v19; // rdx
  __m128i *v20; // rax
  const __m128i *v21; // rdx
  __int64 i; // rax
  __int64 v23; // rdx

  v3 = operator new(0x58u);
  v4 = *((_QWORD *)a1 + 9);
  v5 = v3;
  LODWORD(v3) = a1[8];
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 32) = v3;
  v6 = *((_QWORD *)a1 + 5);
  *(_OWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 40) = v6;
  *(_QWORD *)(v5 + 48) = *((_QWORD *)a1 + 6);
  *(_WORD *)(v5 + 56) = *((_WORD *)a1 + 28);
  if ( v4 )
  {
    v20 = (__m128i *)qalloc_or_throw(16 * v4);
    v21 = *((const __m128i **)a1 + 8);
    *(_QWORD *)(v5 + 64) = v20;
    *(_QWORD *)(v5 + 80) = v4;
    *v20 = _mm_loadu_si128(v21);
    if ( v4 != 1 )
    {
      for ( i = 1; i != v4; ++i )
      {
        v23 = i;
        *(__m128i *)(*(_QWORD *)(v5 + 64) + 16 * v23) = _mm_loadu_si128((const __m128i *)(*((_QWORD *)a1 + 8) + 16 * v23));
      }
    }
    *(_QWORD *)(v5 + 72) = v4;
  }
  v7 = *a1;
  v8 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)v5 = v7;
  *(_QWORD *)(v5 + 24) = 0;
  if ( v8 )
    *(_QWORD *)(v5 + 24) = sub_65900(v8, v5);
  v9 = *((int **)a1 + 2);
  for ( j = v5; v9; v9 = *((int **)v9 + 2) )
  {
    v11 = j;
    j = operator new(0x58u);
    *(_DWORD *)(j + 32) = v9[8];
    *(_QWORD *)(j + 40) = *((_QWORD *)v9 + 5);
    *(_QWORD *)(j + 48) = *((_QWORD *)v9 + 6);
    v12 = *((_WORD *)v9 + 28);
    *(_QWORD *)(j + 64) = 0;
    *(_WORD *)(j + 56) = v12;
    *(_OWORD *)(j + 72) = 0;
    v13 = *((_QWORD *)v9 + 9);
    if ( v13 )
    {
      v17 = (__m128i *)qalloc_or_throw(16 * v13);
      *(_QWORD *)(j + 64) = v17;
      *(_QWORD *)(j + 80) = v13;
      *v17 = _mm_loadu_si128((const __m128i *)*((_QWORD *)v9 + 8));
      if ( v13 != 1 )
      {
        for ( k = 1; k != v13; ++k )
        {
          v19 = k;
          *(__m128i *)(*(_QWORD *)(j + 64) + 16 * v19) = _mm_loadu_si128((const __m128i *)(*((_QWORD *)v9 + 8) + 16 * v19));
        }
      }
      *(_QWORD *)(j + 72) = v13;
    }
    v14 = *v9;
    *(_QWORD *)(j + 16) = 0;
    *(_QWORD *)(j + 24) = 0;
    *(_DWORD *)j = v14;
    *(_QWORD *)(v11 + 16) = j;
    *(_QWORD *)(j + 8) = v11;
    v15 = *((_QWORD *)v9 + 3);
    if ( v15 )
      *(_QWORD *)(j + 24) = sub_65900(v15, j);
  }
  return v5;
}

