__int64 __fastcall sub_832E0(_QWORD *a1, __int64 a2, const void *a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  size_t v10; // rax
  size_t v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rdi
  void *v25; // rdi
  size_t v26; // r14
  __int64 v27; // rax
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v6 = qalloc(a4 + 1);
  if ( v6 )
  {
    v7 = a1[39];
    v8 = a1[40];
    if ( v8 < v7 + 1 )
    {
      v13 = qvector_reserve(a1 + 38, 0, v7 + 1, 72);
      v14 = a1[40];
      a1[40] = v8;
      v30 = v13;
      v31 = v14;
      v15 = (__int64 *)a1[38];
      v16 = a1[39] - 1LL;
      if ( v16 >= 0 )
      {
        v17 = v13;
        do
        {
          v18 = *v15;
          v19 = _mm_loadu_si128((const __m128i *)(v15 + 1));
          *v15 = 0;
          *(_OWORD *)(v15 + 1) = 0;
          *(_QWORD *)v17 = v18;
          *(__m128i *)(v17 + 8) = v19;
          v20 = v15[3];
          v21 = _mm_loadu_si128((const __m128i *)v15 + 2);
          v15[3] = 0;
          *(_QWORD *)(v17 + 24) = v20;
          *(__m128i *)(v17 + 32) = v21;
          LODWORD(v20) = *((_DWORD *)v15 + 12);
          v15[5] = 0;
          *(_DWORD *)(v17 + 48) = v20;
          *(_QWORD *)(v17 + 56) = v15[7];
          *(_QWORD *)(v17 + 64) = v15[8];
          v22 = v15[3];
          if ( v22 )
          {
            v15[4] = 0;
            qfree(v22);
          }
          v23 = *v15;
          if ( *v15 )
          {
            v15[1] = 0;
            qfree(v23);
          }
          v15 += 9;
          v17 += 72;
        }
        while ( v16-- != 0 );
        v15 = (__int64 *)a1[38];
      }
      qfree(v15);
      a1[38] = v30;
      a1[40] = v31;
      v7 = a1[39];
    }
    else
    {
      v30 = a1[38];
    }
    v9 = v30 + 72 * v7;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    ++a1[39];
    *(_QWORD *)(v9 + 64) = a2;
    if ( a3 && (v10 = strlen((const char *)a3), (v11 = v10) != 0) )
    {
      v25 = *(void **)(v9 + 24);
      v26 = v10 + 1;
      if ( *(_QWORD *)(v9 + 40) < v10 + 1 )
      {
        v27 = qvector_reserve(v9 + 24, *(_QWORD *)(v9 + 24), v26, 1);
        *(_QWORD *)(v9 + 24) = v27;
        v25 = (void *)v27;
      }
      *(_QWORD *)(v9 + 32) = v26;
      memmove(v25, a3, v11);
      *(_BYTE *)(*(_QWORD *)(v9 + 24) + v11) = 0;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = 0;
    }
    *(_DWORD *)(v9 + 48) = v4;
    *(_QWORD *)(v9 + 56) = v6;
    *(_BYTE *)(v6 + v4) = 0;
  }
  return v6;
}

