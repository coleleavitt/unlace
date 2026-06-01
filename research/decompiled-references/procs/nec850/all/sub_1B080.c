__int64 __fastcall sub_1B080(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // rsi
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  const __m128i *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx

  v7 = a1[10];
  if ( a2 != 3 )
  {
    v8 = a1[9];
    v9 = -1;
    if ( a2 > 0x1F )
    {
LABEL_3:
      a1[12] &= v9;
      v10 = v8 + 16 * v7;
      if ( v10 == v8 )
      {
LABEL_16:
        v14 = a1[11];
        v15 = v7 + 1;
        if ( v14 < v15 )
        {
          v20 = qvector_reserve(a1 + 9, 0, v15, 16);
          v21 = a1[11];
          v22 = (const __m128i *)a1[9];
          a1[11] = v14;
          v23 = v20;
          v24 = a1[10] - 1LL;
          if ( v24 >= 0 )
          {
            v25 = v23;
            do
            {
              v26 = _mm_loadu_si128(v22);
              v25 += 16;
              ++v22;
              *(__m128i *)(v25 - 16) = v26;
            }
            while ( v24-- != 0 );
            v22 = (const __m128i *)a1[9];
          }
          qfree(v22);
          v28 = a1[10];
          a1[9] = v23;
          a1[11] = v21;
          v10 = v23 + 16 * v28;
        }
        *(_DWORD *)v10 = a2;
        *(_DWORD *)(v10 + 4) = 3;
        *(_QWORD *)(v10 + 8) = a3;
        ++a1[10];
      }
      else
      {
        while ( a2 != *(_DWORD *)v8 )
        {
          v8 += 16;
          if ( v10 == v8 )
            goto LABEL_16;
        }
        *(_DWORD *)(v8 + 4) = 3;
        *(_QWORD *)(v8 + 8) = a3;
      }
      return 1;
    }
LABEL_15:
    v9 = __ROL8__(-2, a2);
    goto LABEL_3;
  }
  if ( v7 )
  {
    v8 = a1[9];
    if ( *(_DWORD *)v8 == 3 && *(_DWORD *)(v8 + 4) == 3 )
    {
      v11 = 0;
      if ( a3 > *(_QWORD *)(v8 + 8) )
        return v11;
      if ( a4 != -1 )
      {
        v16 = (_QWORD *)a1[6];
        v17 = a1[7];
        v18 = &v16[v17];
        if ( v16 == v18 )
          goto LABEL_23;
        v19 = v16;
        while ( *v19 != a4 )
        {
          if ( v18 == ++v19 )
            goto LABEL_23;
        }
        if ( v18 == v19 )
        {
LABEL_23:
          if ( a1[8] < (unsigned __int64)(v17 + 1) )
          {
            v29 = qvector_reserve(a1 + 6, v16, v17 + 1, 8);
            v30 = a1[7];
            a1[6] = v29;
            v18 = (_QWORD *)(v29 + 8 * v30);
          }
          *v18 = a4;
          v8 = a1[9];
          ++a1[7];
          v7 = a1[10];
        }
      }
      goto LABEL_15;
    }
  }
  sub_1A5B0();
  return sub_1B290();
}
