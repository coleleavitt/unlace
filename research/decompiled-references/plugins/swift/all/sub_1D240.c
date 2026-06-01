__int64 __fastcall sub_1D240(__int64 a1, char a2, char a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *v9; // r15
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 *v12; // r14
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  _QWORD *v22; // rsi
  __int64 *v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v5 = a4;
  v29 = __readfsqword(0x28u);
  v6 = a5;
  if ( a2 || a3 )
  {
    HIBYTE(v28) = a3;
    LOBYTE(v28) = a2;
    v12 = *(__int64 **)(a1 + 8);
    *(_QWORD *)(a1 + 16) = 0;
    memset(v27, 0, sizeof(v27));
    *(_QWORD *)v27 = qvector_reserve(v27, 0, 1, 16);
    v13 = (_QWORD *)(16LL * *(_QWORD *)&v27[8] + *(_QWORD *)v27);
    *v13 = v5;
    v13[1] = v6;
    ++*(_QWORD *)&v27[8];
    sub_1CFE0(v12, (unsigned __int64)v27);
    if ( *(_QWORD *)v27 )
    {
      *(_QWORD *)&v27[8] = 0;
      qfree(*(_QWORD *)v27);
    }
    return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) > 4u;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = a4 + a5;
    if ( v7 && (a4 & 0xFFFFFFFFFFFFFFF8LL) == ((v7 - 1) & 0xFFFFFFFFFFFFFFF8LL) )
    {
      result = 0xFFFFFFFFLL;
      if ( (a4 & 0xFFFFFFFFFFFFFFF8LL) == ((v8 - 1) & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v14 = *(__int64 **)(a1 + 8);
        v15 = v14[1];
        v16 = *v14;
        *(_QWORD *)v27 = a4;
        *(_QWORD *)&v27[8] = a5;
        v17 = (__int64 *)(v16 + 32 * v15 - 32);
        v18 = v17[1];
        v19 = *v17;
        v20 = v17[2];
        v21 = v18 + 1;
        if ( (unsigned __int64)v27 < *v17 || (unsigned __int64)v27 >= v19 + 16 * v20 )
        {
          if ( v20 < v21 )
          {
            v25 = qvector_reserve(v17, v19, v18 + 1, 16);
            *v17 = v25;
            v19 = v25;
            v18 = v17[1];
          }
          *(__m128i *)(v19 + 16 * v18) = _mm_load_si128((const __m128i *)v27);
        }
        else
        {
          if ( v20 < v21 )
          {
            v26 = qvector_reserve(v17, v19, v18 + 1, 16);
            *v17 = v26;
            v19 = v26;
            v18 = v17[1];
          }
          v22 = (_QWORD *)(16 * v18 + v19);
          *v22 = v5;
          v22[1] = v6;
        }
        ++v17[1];
        return 0;
      }
    }
    else if ( (a4 & 7) != 0 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      if ( a5 > 7 )
      {
        v9 = *(__int64 **)(a1 + 8);
        do
        {
          memset(v27, 0, sizeof(v27));
          v28 = 0;
          *(_QWORD *)v27 = qvector_reserve(v27, 0, 1, 16);
          v10 = (_QWORD *)(16LL * *(_QWORD *)&v27[8] + *(_QWORD *)v27);
          *v10 = v5;
          v10[1] = 8;
          ++*(_QWORD *)&v27[8];
          sub_1CFE0(v9, (unsigned __int64)v27);
          if ( *(_QWORD *)v27 )
          {
            *(_QWORD *)&v27[8] = 0;
            qfree(*(_QWORD *)v27);
          }
          v9 = *(__int64 **)(a1 + 8);
          if ( (unsigned __int64)v9[1] > 4 )
            return 1;
          v6 -= 8LL;
          v5 += 8;
        }
        while ( v6 > 7 );
      }
      if ( v6 )
      {
        v28 = 0;
        v23 = *(__int64 **)(a1 + 8);
        memset(v27, 0, sizeof(v27));
        *(_QWORD *)v27 = qvector_reserve(v27, 0, 1, 16);
        v24 = (_QWORD *)(16LL * *(_QWORD *)&v27[8] + *(_QWORD *)v27);
        *v24 = v5;
        v24[1] = v6;
        ++*(_QWORD *)&v27[8];
        sub_1CFE0(v23, (unsigned __int64)v27);
        if ( *(_QWORD *)v27 )
        {
          *(_QWORD *)&v27[8] = 0;
          qfree(*(_QWORD *)v27);
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) > 4u )
          return 1;
        *(_QWORD *)(a1 + 16) = v8;
        return 0;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 0;
        return 0;
      }
    }
  }
  return result;
}
