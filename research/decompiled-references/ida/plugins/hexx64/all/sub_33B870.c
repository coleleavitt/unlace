unsigned __int64 __fastcall sub_33B870(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  size_t v9; // rdx
  __m128i *v10; // r12
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  size_t v19; // rdx
  __m128i *v20; // r12
  __m128i v21; // xmm0
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  netnode_check();
  if ( *(_DWORD *)(a1 + 1420) )
  {
    v22 = *(unsigned int *)(a1 + 1420);
    netnode_set();
  }
  else
  {
    netnode_delvalue();
  }
  v1 = *(_QWORD *)(a1 + 840);
  v2 = *(_BYTE *)(v1 + 286);
  if ( (v2 & 1) != 0 )
  {
    *(_BYTE *)(v1 + 286) = v2 & 0xFE;
    v22 = 0;
    v23 = 0;
    v22 = qvector_reserve((__int64)&v22, 0, 1, 1);
    *(_BYTE *)(v22 + v23) = 89;
    *(_QWORD *)&v23 = v23 + 1;
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    v4 = v23;
    v5 = v23 + 32;
    v6 = v23 + 32;
    if ( (unsigned __int64)v23 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v7 = v22;
      v8 = v23;
      v9 = 32;
      if ( *((_QWORD *)&v23 + 1) < v5 )
      {
        v22 = qvector_reserve((__int64)&v22, v22, v23 + 32, 1);
        v7 = v22;
        v8 = v23;
        v9 = v5 - v23;
      }
      memset((void *)(v7 + v8), 0, v9);
    }
    *(_QWORD *)&v23 = v6;
    v10 = (__m128i *)(v22 + v4);
    *v10 = _mm_loadu_si128((const __m128i *)(a1 + 608));
    v10[1] = _mm_loadu_si128((const __m128i *)(a1 + 624));
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    v11 = v23;
    v12 = *(_BYTE *)(a1 + 712);
    v13 = v22;
    if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v23 + 1) )
    {
      v22 = qvector_reserve((__int64)&v22, v22, v23 + 1, 1);
      v13 = v22;
      v11 = v23;
    }
    *(_BYTE *)(v13 + v11) = v12;
    *(_QWORD *)&v23 = v23 + 1;
    sub_7C7F0(&v22);
    sub_7C7F0(&v22);
    v14 = v23;
    v15 = v23 + 32;
    v16 = v23 + 32;
    if ( (unsigned __int64)v23 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v17 = v22;
      v18 = v23;
      v19 = 32;
      if ( *((_QWORD *)&v23 + 1) < v15 )
      {
        v22 = qvector_reserve((__int64)&v22, v22, v23 + 32, 1);
        v17 = v22;
        v18 = v23;
        v19 = v15 - v23;
      }
      memset((void *)(v17 + v18), 0, v19);
    }
    *(_QWORD *)&v23 = v16;
    v20 = (__m128i *)(v22 + v14);
    *v20 = _mm_loadu_si128((const __m128i *)(a1 + 728));
    v21 = _mm_loadu_si128((const __m128i *)(a1 + 744));
    v20[1] = v21;
    sub_7C7F0(&v22);
    if ( (unsigned __int64)v23 > 0x400 )
    {
      if ( !under_debugger )
        sub_383060(0xC91Cu, *(double *)v21.m128i_i64);
      BUG();
    }
    netnode_supset();
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
  }
  return v24 - __readfsqword(0x28u);
}

